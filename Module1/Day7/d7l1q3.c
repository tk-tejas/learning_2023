#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

void displayLogData(const char* filePath) {
    FILE* file = fopen(filePath, "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;
    }

    char line[MAX_LINE_LENGTH];

    // Read and skip the header line
    fgets(line, sizeof(line), file);

    // Read and display each log entry
    while (fgets(line, sizeof(line), file) != NULL) {
        // Split the line into fields using comma as the delimiter
        char* token = strtok(line, ",");
        int entryNo = atoi(token);

        token = strtok(NULL, ",");
        char* sensorNo = token;

        token = strtok(NULL, ",");
        float temperature = atof(token);

        token = strtok(NULL, ",");
        int humidity = atoi(token);

        token = strtok(NULL, ",");
        int light = atoi(token);

        token = strtok(NULL, ",");
        char* time = token;

        // Display the log entry
        printf("EntryNo: %d\n", entryNo);
        printf("SensorNo: %s\n", sensorNo);
        printf("Temperature: %.1f\n", temperature);
        printf("Humidity: %d\n", humidity);
        printf("Light: %d\n", light);
        printf("Time: %s", time);
        printf("--------------------------\n");
    }

    fclose(file);
}

int main() {
    char filePath[] = "data.csv";

    // Display the log data from the CSV file
    displayLogData(filePath);

    return 0;
}

