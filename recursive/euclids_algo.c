#include <stdio.h>

// Rekursiv udgave af Euclids algoritme baseret på gentagen restberegning
int gcd_recursive_mod(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd_recursive_mod(b, a % b);
    }
}

// Rekursiv udgave af Euclids algoritme baseret på gentagen subtraktion
int gcd_recursive_sub(int a, int b) {
    if (a == b) {
        return a;
    } else if (a > b) {
        return gcd_recursive_sub(a - b, b);
    } else {
        return gcd_recursive_sub(a, b - a);
    }
}

int main() {
    int num1 = 48;
    int num2 = 18;

    // Test af den rekursive udgave baseret på gentagen restberegning
    printf("GCD af %d og %d (rekursiv, restberegning): %d\n", num1, num2, gcd_recursive_mod(num1, num2));

    // Test af den rekursive udgave baseret på gentagen subtraktion
    printf("GCD af %d og %d (rekursiv, subtraktion): %d\n", num1, num2, gcd_recursive_sub(num1, num2));

    return 0;
}

// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 11.5
// Rekursive udgaver af Euclids algoritme
// I denne opgave vil vi programmere iterative beregninger med brug af rekursion. Funktionerne, som skal programmeres i denne opgave, skal altså følge det mønster vi har set i funktionen iterative_factorial (et program i lektionen om rekursion).

// Vi har set iterative udgaver af Euclids algoritme i lektionen om gentagelse og løkker og vi har set en gcd funktion i lektionen om funktioner.

// Programmer først en rekursiv udgave af den version af Euclids algoritme, der er baseret på gentagen restberegning.

// Programmer dernæst en rekursiv udgave af den version af Euclids algoritme, der er baseret på gentagen subtraktion.

// Løsningen til denne opgave er pt. ikke frigivet