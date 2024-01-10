#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funktion til at finde det længste fælles endelse af to ord
void findLongestSuffix(const char *word1, const char *word2, char **commonSuffix) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);

    // Find minimum af de to længder
    int minLength = (len1 < len2) ? len1 : len2;

    // Find længden af den fælles endelse
    int suffixLength = 0;
    while (suffixLength < minLength && word1[len1 - 1 - suffixLength] == word2[len2 - 1 - suffixLength]) {
        suffixLength++;
    }

    // Alloker plads til den fælles endelse og kopier den
    *commonSuffix = (char *)malloc(suffixLength + 1); // +1 for null-terminator
    strncpy(*commonSuffix, word1 + len1 - suffixLength, suffixLength);
    (*commonSuffix)[suffixLength] = '\0'; // Sørg for, at den fælles endelse er null-termineret
}

int main() {
    const char *word1 = "datalogi";
    const char *word2 = "biologi";
    char *commonSuffix = NULL;

    // Find og udskriv den længste fælles endelse
    findLongestSuffix(word1, word2, &commonSuffix);
    printf("Longest common suffix of %s and %s: %s\n", word1, word2, commonSuffix);

    // Husk at frigøre den allokerede hukommelse
    free(commonSuffix);

    return 0;
}


// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 10.4
// Længste fælles endelse af to ord
// Skriv et program med en funktion der finder og returnerer det længste fælles endelse (suffix) af to ord.

// Funktionen skal have tre parametre. De to ord (to tekststrenge) skal overføres som input parametre. Den længste fælles endelse skal returneres i en output parameter (også en tekststreng). (Hvordan markerer du forskellen på en input parameter og en output parameter, som begge er tekststrenge?) Overvej hvordan der bliver allokeret plads til tesktstrengen med den fælles endelse (vil du bruge statisk eller dynamisk allokering?).

// Eksempelvis er "logi" den længste fælles endelse af ordene "datalogi" og "biologi". Og den længste fælles endelse af "program" og "diagram" er "gram".

// Denne opgave svarer til opgave 8 side 533 i 6. udgave af lærebogen

// Løsningen til denne opgave er pt. ikke frigivet