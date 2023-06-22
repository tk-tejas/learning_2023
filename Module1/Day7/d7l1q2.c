#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>

#define BUFFER_SIZE 4096

void convertToUpper(char* str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void convertToLower(char* str) {
    while (*str) {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

void convertToSentenceCase(char* str) {
    int capitalizeNext = 1;
    while (*str) {
        if (isspace((unsigned char)*str)) {
            capitalizeNext = 1;
        } else if (capitalizeNext) {
            *str = toupper((unsigned char)*str);
            capitalizeNext = 0;
        } else {
            *str = tolower((unsigned char)*str);
        }
        str++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: ./cp <option> <source_file> <destination_file>\n");
        printf("Options:\n");
        printf("-u : Change file content to Upper Case\n");
        printf("-l : Change file content to Lower Case\n");
        printf("-s : Change file content to Sentence Case\n");
        return 1;  // Exit the program with an error code
    }

    char* option = argv[1];
    char* sourcePath = argv[2];
    char* destinationPath = argv[3];

    FILE* sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;  // Exit the program with an error code
    }

    FILE* destinationFile = fopen(destinationPath, "w");
    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;  // Exit the program with an error code
    }

    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
        if (option != NULL) {
            if (strcmp(option, "-u") == 0) {
                convertToUpper(buffer);
            } else if (strcmp(option, "-l") == 0) {
                convertToLower(buffer);
            } else if (strcmp(option, "-s") == 0) {
                convertToSentenceCase(buffer);
            }
        }

        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}

