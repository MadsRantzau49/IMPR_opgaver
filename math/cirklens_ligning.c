#include <stdio.h>
#include <math.h>

#define DELTA 0.000001

int main(void) {
    double r, x, y;
    int inside, onPerimeter;

    // Input radius and coordinates
    printf("Enter the radius r: ");
    scanf("%lf", &r);

    printf("Enter the coordinates (x, y): ");
    scanf("%lf %lf", &x, &y);

    // Calculate logical expressions
    double distance = sqrt(x * x + y * y);
    inside = (distance < r);
    onPerimeter = (distance >= r - DELTA && distance <= r + DELTA);

    // Use conditional operator in printf
    printf("Result: %s\n", (inside ? "Inside" : (onPerimeter ? "On the perimeter" : "Outside")));

    return 0;
}
/*
Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
Opgave 3.1
Inden i eller uden for en cirkel
Det er ofte nyttigt at kunne afgøre, om et punkt i et koordinatsystem er placeret inden i eller udenfor en bestemt cirkel.

Skriv et program med tre doubles r, x og y.   r fortolkes som radius af en cirkel omkring punktet (0,0). x og y er koordinaterne (x, y) af et punkt.

Programmet skal afgøre om punktet (x, y) er placeret inden i cirklen, på cirkelperiferien, eller uden for cirklen. Der er altså tre tilfælde. I bedes have tre logiske udtryk, assignet til tre logiske variable, som afspejler de tre forskellige situationer.

Kan I lave én printf med brug af betingede udtryk (?:), der udskriver 'inden i'/'uden for' og 'på' cirklen, baseret på de logiske udtryks værdi?

Hint: Det kan være svært at ramme periferien eksakt, fordi vi regner med doubles. Derfor kan I antage at punktet er 'på periferien' hvis det er ganske tæt på periferien. Indfør en symbolsk konstant DELTA, der fortæller hvor meget vi ønsker at kunne afvige fra et "perfect hit".

Løsningen til denne opgave er pt. ikke frigivet

*/