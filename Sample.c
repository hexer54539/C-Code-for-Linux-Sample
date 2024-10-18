#include <stdio.h>
#include <stdlib.h>

int main() {
    // Create and open a file
    FILE *file = fopen("sample.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Write to the file
    fprintf(file, "Hello, World!\nThis is a sample C program.\n");
    fclose(file); // Close the file

    // Reopen the file for reading
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read from the file and print to stdout
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file); // Close the file
    return EXIT_SUCCESS;
}