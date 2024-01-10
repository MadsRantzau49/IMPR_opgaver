#include <stdio.h>

int main(void) {
    int a, b;

    // Gentag beregningen af GCD indtil mindst et af tallene er negativt
    while (1) {
        // Indlæs to heltal
        printf("Enter two non-negative integers (or negative to exit): ");
        scanf("%d %d", &a, &b);

        // Check om et af tallene er negativt og afslut løkken
        if (a < 0 || b < 0) {
            printf("Exiting program.\n");
            break;
        }

        int gcd; // Variabel til at holde den største fælles divisor

        // Find GCD ved at afprøve divisorer
        for (gcd = a < b ? a : b; gcd >= 1; gcd--) {
            if (a % gcd == 0 && b % gcd == 0) {
                // Vi har fundet den største fælles divisor
                break;
            }
        }

        // Output resultatet
        printf("GCD of %d and %d is %d\n\n", a, b, gcd);
    }

    return 0;
}

// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 4.6
// Ligefrem programmering af 'største fælles divisor'
// I denne lektion har vi set at der findes fine, smarte, og effektive algoritmer til at finde den største fælles divisor af to positive heltal. Se her.

// Målet med denne opgave er at træne dig i programmering med løkker, herunder at vælge gode iterative kontrolstrukturer til opgaven. Som altid er det også målet at lave et velopstillet program med god indrykning, og med brug af gode variabelnavne.

// I denne opgave skal du skrive et ligefrem program, der på en simpel og intuitiv måde finder den største fælles divisor af to ikke-negative heltal a og b. Programmet skal på en systematisk måde - med brug af en løkke - afprøve om forskellig, nøje udvalgte tal er divisorer i både a og b. Overvej omhyggeligt hvordan løkken starter, og hvordan den slutter. Programmet skal finde den største sådanne divisor: altså største fælles divisor. Overvej også om der er nogle specialtilfælde vi skal tage os af, inden vi starter løkken?

// Programmet skal indlæse de to heltal a og b af hvilke vi ønsker at finde den største fælles divisor. Men for ikke at starte programmet forfra hver gang vi ønsker at finde den største fælles divisor af to tal (a og b) bedes du lave programmet således at den gentager beregningen af den største fælles divisor af to indlæste tal indtil et af tallene er negativ.

// Løsningen til denne opgave er pt. ikke frigivet