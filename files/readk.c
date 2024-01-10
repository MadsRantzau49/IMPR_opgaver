#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Funktion til at læse k ord fra en fil
int getwords(FILE *ifp, int k, char *words) {
    // Tjek om filen og strengen er gyldige
    if (ifp == NULL || words == NULL) {
        return -1; // Fejl, ugyldige inputparametre
    }

    int count = 0; // Tæller for læste ord
    int c; // Variabel til at gemme hvert tegn fra filen
    int inWord = 0; // Flag, der indikerer, om vi er i et ord

    // Læs tegn fra filen, indtil vi har læst k ord eller nået filens ende
    while ((c = fgetc(ifp)) != EOF && count < k) {
        // Hvis det aktuelle tegn er en bogstavskarakter, tilføj det til strengen
        if (isalpha(c)) {
            words[count++] = (char)c;
            inWord = 1; // Vi er nu i et ord
        } else {
            // Hvis vi har været i et ord og nu er ved slutningen af ordet
            if (inWord) {
                words[count++] = ' '; // Tilføj mellemrum mellem ord
                inWord = 0; // Nulstil flagget
            }
            // Ignorer andre tegn (mellemrum, tegnsætning, etc.)
        }
    }

    // Nul-terminer strengen
    words[count] = '\0';

    return count; // Returnér det faktiske antal læste ord
}

int main(void) {
    FILE *ifp;
    char words[100]; // Antag en maksimal længde på 100 tegn for ordene

    // Åbn filen for læsning (skift "input.txt" med din fil)
    ifp = fopen("text.txt", "r");

    if (ifp == NULL) {
        perror("Fejl ved åbning af fil");
        return EXIT_FAILURE;
    }

    // Kald funktionen til at læse 5 ord fra filen
    int actualCount = getwords(ifp, 5, words);

    // Tjek resultatet og udskriv de læste ord
    if (actualCount > 0) {
        printf("Læste %d ord: %s\n", actualCount, words);
    } else {
        printf("Ingen ord blev læst.\n");
    }

    // Luk filen
    fclose(ifp);

    return EXIT_SUCCESS;
}


// Opgaver i denne lektion        næste -- Tastaturgenvej: 'n'  Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 13.1
// Læsning af k ord fra fil
// Skriv en funktion

//   int getwords(FILE *ifp, int k, char *words)
// der, om muligt, læser k ord fra tekstfilen der er udpeget af pointeren ifp. Ordene skal læses over i tekststrengen words (som allokeres af den funktion, som kalder getwords). Hvis det ønskes kan ordene organiseres linievis i words, eller blot med 'white space' imellem ordene.

// Den programmerede funktion skal returnere det faktiske antal af læste ord (som kan være mindre end k).

// Løsningen til denne opgave er pt. ikke frigivet