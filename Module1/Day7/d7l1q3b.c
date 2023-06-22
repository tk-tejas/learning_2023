#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100
#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
};

void extractLogData(const char* filePath, struct LogEntry* logEntries, int* numEntries) {
    FILE* file = fopen(filePath, "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;
    }

    char line[MAX_LINE_LENGTH];

    // Read and skip the header line
    fgets(line, sizeof(line), file);

    // Read and extract each log entry
    *numEntries = 0;
    while (fgets(line, sizeof(line), file) != NULL) {
        // Split the line into fields using comma as the delimiter
        char* token = strtok(line, ",");
        if (token == NULL) {
            break; // No more tokens, break out of the loop
        }
        logEntries[*numEntries].entryNo = atoi(token);

        token = strtok(NULL, ",");
        if (token == NULL) {
            break;
        }
        strncpy(logEntries[*numEntries].sensorNo, token, sizeof(logEntries[*numEntries].sensorNo));

        token = strtok(NULL, ",");
        if (token == NULL) {
            break;
        }
        logEntries[*numEntries].temperature = atof(token);

        token = strtok(NULL, ",");
        if (token == NULL) {
            break;
        }
        logEntries[*numEntries].humidity = atoi(token);

        token = strtok(NULL, ",");
        if (token == NULL) {
            break;
        }
        logEntries[*numEntries].light = atoi(token);

        token = strtok(NULL, ",");
        if (token == NULL) {
            break;
        }
        strncpy(logEntries[*numEntries].time, token, sizeof(logEntries[*numEntries].time));

        (*numEntries)++;

        if (*numEntries >= MAX_ENTRIES) {
            break; // Reached the maximum number of entries, stop reading
        }
    }

    fclose(file);
}

void displayLogEntry(struct LogEntry logEntry) {
    printf("EntryNo: %d\n", logEntry.entryNo);
    printf("SensorNo: %s\n", logEntry.sensorNo);
    printf("Temperature: %.1f\n", logEntry.temperature);
    printf("Humidity: %d\n", logEntry.humidity);
    printf("Light: %d\n", logEntry.light);
    printf("Time: %s\n", logEntry.time);
    printf("--------------------------\n");
}

void displayLogData(struct LogEntry* logEntries, int numEntries) {
    printf("Log Data:\n");
    for (int i = 0; i < numEntries; i++) {
        displayLogEntry(logEntries[i]);
    }
}

int main() {
    char filePath[] = "data.csv";
    struct LogEntry logEntries[MAX_ENTRIES];
    int numEntries;

    // Extract the log data from the CSV file
    extractLogData(filePath, logEntries, &numEntries);

    // Display the extracted log data
    displayLogData(logEntries, numEntries);

    return 0;
}

