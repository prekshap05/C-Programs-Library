#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("example.txt", "w"); 
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter text to write to the file: ");
    fgets(data, sizeof(data), stdin); 

    fputs(data, file); 
    fclose(file); 

    printf("Data written to file successfully.\n");

    file = fopen("example.txt", "r"); 
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Reading from file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data); 
    }

    fclose(file); 
    return 0;
}
