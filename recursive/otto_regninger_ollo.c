#include <stdio.h>
#include <string.h>

// Iterativ funktion til at afgøre om en streng er et palindrom
int is_palindrome_iter(const char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; // Ikke et palindrom
        }
    }
    return 1; // Palindrom
}

// Hjælpefunktion til den rekursive funktion
int is_palindrome_rec_helper(const char *str, int start, int end) {
    if (start >= end) {
        return 1; // Tom eller enkelttegn streng er altid et palindrom
    }

    if (str[start] != str[end]) {
        return 0; // Ikke et palindrom
    }

    return is_palindrome_rec_helper(str, start + 1, end - 1);
}

// Rekursiv funktion til at afgøre om en streng er et palindrom
int is_palindrome_rec(const char *str) {
    int len = strlen(str);
    return is_palindrome_rec_helper(str, 0, len - 1);
}

int main() {
    const char *palindrome_str = "regninger";
    const char *non_palindrome_str = "programmering";

    // Test af den iterative funktion
    printf("%s er et palindrom: %s\n", palindrome_str, is_palindrome_iter(palindrome_str) ? "Ja" : "Nej");
    printf("%s er et palindrom: %s\n", non_palindrome_str, is_palindrome_iter(non_palindrome_str) ? "Ja" : "Nej");

    // Test af den rekursive funktion
    printf("%s er et palindrom: %s\n", palindrome_str, is_palindrome_rec(palindrome_str) ? "Ja" : "Nej");
    printf("%s er et palindrom: %s\n", non_palindrome_str, is_palindrome_rec(non_palindrome_str) ? "Ja" : "Nej");

    return 0;
}


// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 11.2
// Palindromer
// Et palindrom er en tekststreng, som læses ens både forfra og bagfra. Eksempelvis er strengen "regninger" et palindrom. Vi kan også sige at et palindrom er en tekststreng som er lig med sin egen strengomvending.

// Skriv først en iterativ funktion int is_palindrome_iter(char *str), der afgør om str er et palindrom. En iterativ funktion er en funktion, som programmeres ved brug af en while-løkke eller en for-løkke. Funktionen skal returnere 1 hvis str er et palindrom, og 0 hvis str ikke er et palindrom.

// Skriv dernæst en tilsvarende rekursiv udgave int is_palindrome_rec(char *str).

// Den rekursive funktion skal løse nøjagtig det samme problem som den iterative funktion; Altså om parameteren str er et palindrom. Den skal gøre dette ved at undersøge om en bestemt (lidt mindre) delstreng af strengen er et palindrom. Hvis det hjælper dig, kan du overveje at indføre en hjælpefunktion til is_palindrome_rec, for at gøre dette.

// Målet med denne opgave er at opnå viden og færdigheder i at arbejde med såvel rekursive som iterativt programmerede funktioner. Målet er endvidere at opnå yderligere viden og færdigheder i simpel programmering med tekststrenge.

// Løsningen til denne opgave er pt. ikke frigivet