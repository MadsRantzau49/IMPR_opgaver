#include <stdio.h>
#include <math.h>

// Funktion til at scanne data fra inputlinjen
void scan_data(char *operator, double *operand) {
    printf("Enter operator and operand: ");
    scanf(" %c %lf", operator, operand);
}

// Funktion til at udføre næste operation
void do_next_op(char operator, double operand, double *accumulator) {
    switch (operator) {
        case '+':
            *accumulator += operand;
            break;
        case '-':
            *accumulator -= operand;
            break;
        case '*':
            *accumulator *= operand;
            break;
        case '/':
            if (operand != 0.0) {
                *accumulator /= operand;
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '^':
            *accumulator = pow(*accumulator, operand);
            break;
        case 'q':
            printf("Final result is %.2f\n", *accumulator);
            break;
        default:
            printf("Invalid operator\n");
    }
}

int main(void) {
    double accumulator = 0.0;
    char operator;
    double operand;

    do {
        scan_data(&operator, &operand);
        if (operator != 'q') {
            do_next_op(operator, operand, &accumulator);
            printf("Result so far is %.2f\n", accumulator);
        }
    } while (operator != 'q');

    return 0;
}


// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 6.6
// En valutaomregner
// Skriv et C program som konverterer valuta i dollars til euro, kroner, rubler og yen. I kan antage en én dollar er 0.89 euros, 6.66 kroner, 66.43 rubler og 119.9 yen.

// I denne opgave skal der indgå en funktion med én input parameter (dollar-beløbet), og fire output parametre (svarende til de fire andre valutaer).

// Brug funktionen til at udskrive en omregningstabel til omregning af 1, 2, 3, ... 100 dollars til de fire andre valutaer.

// (Denne opgave svarer til programmeringsprojekt 1, side 384 i 7. udgave af lærebogen).

// Der findes ingen løsning til denne opgave