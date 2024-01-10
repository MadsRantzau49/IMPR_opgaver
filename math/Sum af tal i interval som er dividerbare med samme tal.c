#include <stdio.h>

int main(void) {
    // Input heltal m, n og k
    int m, n, k;
    
    printf("Enter three positive integers (m, n, k): ");
    scanf("%d %d %d", &m, &n, &k);

    // Tjek om m er større end n
    if (m > n) {
        printf("Result: 0\n");
        return 0;
    }

    // Beregn summen af tal i intervallet [m, n], der er dividerbare med k
    int sum = 0;
    for (int i = m; i <= n; i++) {
        if (i % k == 0) {
            sum += i;
        }
    }

    // Output resultatet
    printf("Result: %d\n", sum);

    return 0;
}

/*
Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'  næste -- Tastaturgenvej: 'n'  Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
Opgave 4.2
Sum af tal i interval som er dividerbare med samme tal
I denne opgave gives tre positive heltal m, n og k, hvor k er større end 1. Skriv et program der adderer alle heltal mellem m og n (begge inklusive) hvor i k går op.

Eksempler:

Hvis m er 5, n er 13 og k er 3 er resultatet 6 + 9 + 12 = 27.
Hvis m er 5, n er 10 og k er 5 er resultatet 5 + 10 = 15.
Hvis m er 10, n er 5 og k er 3 ønsker vi at resultatet er 0, idet m er større end n.
Denne opgave stammer fra bogen C by Dissection - anvendt med tilladelse fra forlaget.

Løsningen til denne opgave er pt. ikke frigivet
*/