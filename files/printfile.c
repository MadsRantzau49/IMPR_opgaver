#include <stdio.h>

int main() {
    // Open the file in "r+" mode, allowing both reading and writing
    FILE *file = fopen("text.txt", "r+");

    // Move the file position indicator to the end of the file
    fseek(file, 0, SEEK_END);

    // Append the string "LOL" to the file
    fputs("LOL", file);

    // Close the file
    fclose(file);

    // Return 0 to indicate successful execution
    return 0;
}
