#include <stdio.h>

// Funktion til at indlæse et polynomium i et array
void get_polynomium(double coeff[], int* degreep) {
    printf("Enter the degree of the polynomial (<= 8): ");
    scanf("%d", degreep);

    printf("Enter the coefficients of the polynomial from a0 to a%d:\n", *degreep);
    for (int i = 0; i <= *degreep; ++i) {
        printf("a%d: ", i);
        scanf("%lf", &coeff[i]);
    }
}

// Funktion til at evaluere polynomiets værdi for en given x
double eval_polynomium(const double coeff[], int degree, double x) {
    double result = 0.0;

    // Beregn polynomiets værdi ved hjælp af Horner's metode
    for (int i = degree; i >= 0; --i) {
        result = result * x + coeff[i];
    }

    return result;
}

int main() {
    double coefficients[9];  // Array til at gemme polynomiumets koefficienter (maksimalt 8. grads)
    int degree;

    // Indlæs polynomiumet
    get_polynomium(coefficients, &degree);

    // Evaluer polynomiets værdi for forskellige x-værdier
    double x;
    printf("\nEnter x value for polynomial evaluation: ");
    scanf("%lf", &x);

    // Beregn og udskriv resultatet
    double result = eval_polynomium(coefficients, degree, x);
    printf("Result for x = %.2f: %.2f\n", x, result);

    return 0;
}


// Opgaver i denne lektion              Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 9.2
// Polynomier
// I denne opgave vil vi repræsentere et polynomium p af grad n som et array af koeficienter a0, ..., an, hver af typen double,

//    p(x) = a0 + a1 x + a2 x2 + ... + an xn

// hvor an er forskellig fra nul.

// Skriv et C program som indlæser et polynomium af grad højst 8, og som kan beregne polynomiets værdi for forskellige x værdier.

// Opdel din problemløsning i delproblemer, get_polynomium, som indlæser et polynomium i et array, og eval_polynomium, som beregner polynomiets værdi for en given x værdi:

// void get_polynomium(double coeff[], int* degreep);
// double eval_polynomium(const double coeff[], int degree, double x);
// Denne opgave svarer til opgave 14 side 464 i 6. udgave af lærebogen

// Der findes ingen løsning til denne opgave