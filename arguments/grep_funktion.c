#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("IGANG\n");

    FILE *file = fopen("text.txt", "r");

    if (file == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        return 1;  // Return an error code
    }

    char c;
    char sentence[500] = "";  // Initialize as an empty string
    char word[50] = "";       // Initialize as an empty string

    int count_char = 0;
    int count_word = 0;

    while ((c = fgetc(file)) != EOF) {
        if (c != '\0') {
            // Append the character to the current word
            word[count_char] = c;
            count_char++;
        } else {
            // If a space, tab, newline, or carriage return is encountered,
            // consider it as the end of a word and update the sentence
            if (count_char > 0) {
                // Add the word to the sentence
                strcat(sentence, word);
                strcat(sentence, " ");
                count_word++;
                // Reset the word for the next iteration
                word[0] = '\0';
                count_char = 0;
            }
        }
    }

    // If there's a word at the end of the file, add it to the sentence
    if (count_char > 0) {
        strcat(sentence, word);
        count_word++;
    }

    fclose(file);

    // Print the results
    printf("Sentence: %s\n", sentence);
    printf("Word count: %d\n", count_word);

    return 0;
}
