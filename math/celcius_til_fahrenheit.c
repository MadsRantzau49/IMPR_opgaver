#include <stdio.h>

// Funktion til at konvertere celcius til fahrenheit med output-parameter
void celsius_to_fahrenheit(double celsius, double *fahrenheit) {
    *fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
}

int main(void) {
    double celsius_input, fahrenheit_output;

    // Input fra brugeren
    printf("Indtast temperaturen i Celsius: ");
    scanf("%lf", &celsius_input);

    // Kald af funktionen med output-parameter
    celsius_to_fahrenheit(celsius_input, &fahrenheit_output);

    // Udskriv resultatet
    printf("%.2f grader Celsius svarer til %.2f grader Fahrenheit.\n", celsius_input, fahrenheit_output);

    return 0;
}

// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'  næste -- Tastaturgenvej: 'n'  Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 6.1
// Celcius til fahrenheit med output parameter
// Vi har tidligere programmeret en simpel funktion, der omregner fra en celcius temperatur til fahrenheit temperatur. Det er helt naturligt at celcius temperaturen er en call by value input parameter. Ligeledes er det naturligt at fahrenheit temperaturen returneres med return fra funktionen.

// Omskriv nu funktionen således at fahrenheit temperaturen returneres gennem en output parameter - en pointer. Omskriv også main, således at kaldet ændres til denne nye parameterprofil.

// Hvilken version foretrækker du?

// Løsningen til denne opgave er pt. ikke frigivet