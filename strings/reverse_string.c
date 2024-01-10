#include <stdio.h>
#include <string.h>

// Funktion til at omvende tegnene i en tekststreng
void strrev(char *str) {
    int length = strlen(str);

    // Byt om på tegnene
    for (int start = 0, end = length - 1; start < end; start++, end--) {
        // Byt tegnene på position start og end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }
}

int main() {
    char input[100];

    // Indlæs en tekststreng fra brugeren
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Fjern newline-tegnet fra fgets
    input[strcspn(input, "\n")] = '\0';

    // Kald funktionen til at omvende strengen
    strrev(input);

    // Udskriv den omvendte streng
    printf("Reversed string: %s\n", input);

    return 0;
}

// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 10.1
// Funktionen strrev
// Strengomvending består i at bytte om på tegnene i en tekststreng, således at de første tegn ender med at være de sidste. Eksempelvis er strengomvendingen af "streng" lig med "gnerts".

// Programmer funktionen strrev(char *str), som omvender tegnene i parameteren str. Bemærk at parameteren str både tjener som input og output parameter. Vi ønsker altså at bytte om på tegnene i det char array, som str peger på.

// Løsningen til denne opgave er pt. ikke frigivet