#include <stdio.h>

// Funktion til at beregne kvadratroden med Newtons metode
double my_sqrt(double a) {
    // Håndtering af negativt input
    if (a < 0.0) {
        printf("Fejl: Kan ikke beregne kvadratroden af et negativt tal.\n");
        return -1.0; // Returnerer en fejlværdi
    }

    // Startværdi for Newtons metode
    double x = a / 2.0;

    // Iterationer for at forbedre skønnet
    for (int i = 0; i < 10; i++) {
        x = 0.5 * (x + a / x);
    }

    return x;
}

int main(void) {
    printf("a\tmy_sqrt(a)\tsqrt(a)\n");

    // Beregning og udskrivning for heltal a mellem 0 og 25
    for (int a = 0; a <= 25; a++) {
        double result_my_sqrt = my_sqrt((double)a);
        double result_sqrt = sqrt((double)a);
        printf("%d\t%.8f\t%.8f\n", a, result_my_sqrt, result_sqrt);
    }

    return 0;
}

// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'  næste -- Tastaturgenvej: 'n'  Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 5.6
// Programmering af en kvadratrodsfunktion
// Bibliotektet math.h indholder som bekendt funktionen sqrt, som beregner kvadratroden af et tal i typen double.

// Programmer din egen kvadratrodsfunktion my_sqrt med brug af Newtons metode. Newtons metode gør det muligt for os at finde denne rod. Se f.eks. denne video (lavet Oscar Veliz) om hvordan dette virker. (Se formlen for rækkeudviklingen ved tid 2:23). Bemærk venligst at forfatteren af videoen laver en fejl i den nederste formel ved tid 2:26. Den korrekte formel er xn+1 = 1/2(xn + a/xn). Regn selv efter.

// Vær sikker på at du programmerer en funktion, som tager en double som parameter, og som returnerer en double som resultat.

// Hvordan vil du håndtere en situation, hvor der overføres et negativt input?

// Udskriv en table over a, my_sqrt(a) og sqrt(a) for alle heltal a mellem 0.0 og 25.0, og check dermed om din nye funktion leverer gode resultater.

// Løsningen til denne opgave er pt. ikke frigivet