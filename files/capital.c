#include <stdio.h>
#include <ctype.h>

int main() {
    FILE* file = fopen("text.txt", "r+");

    if (file != NULL) {
        char c;
        while ((c = fgetc(file)) != EOF) {
            if (c == '.') {
                fseek(file, 2, SEEK_CUR);  // Move one character ahead
                if(isupper(fgetc(file))){
                    printf("Error");
                    fseek(file, -2, SEEK_CUR);  // Move back one character

                }
            }
        }
        fclose(file);
    } else {
        printf("Error opening the file.\n");
    }

    return 0;
}
