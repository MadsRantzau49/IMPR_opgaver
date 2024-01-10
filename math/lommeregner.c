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

// Opgaver i denne lektion        næste -- Tastaturgenvej: 'n'  Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 6.5
// En simpel lommeregner
// Skriv et program der modellerer en simpel lommeregner. Som altid udvikler vi programmet top-down, med trinvis forfinelse. Lommeregneren holder styr på ét enkelt tal, som indholder 'det hidtidige beregnede resultat': akkumulatoren (som starer med at være 0.0). Hver input-line skal bestå af den næste operation (binær), som skal udføres, efterfulgt af den højre operand til denne operation. (En binær operator tager to operander). Vi antager her at den venstre operand er akkumulatoren (den beregnede værdi, i starten 0.0). Således udfører lommeregneren i hvert trin følgende:

//   akkumulator operation højre_opperand
// Det anbefales at operationen som lommeregneren skal udføre indlæses som en char med scanf. Den næste højre operand læses naturligvis som en double. Her er en god måde at indlæse disse på:

//   scanf(" %c %lf", ...)
// Space tegnet foran %c kan være ganske vigtig. Hvorfor? (Læs evt. side 87 i Problem Solving and Program Design in C, 8th edition for at lære mere om dette).

// Du skal have en funktion, scan_data, med to output parametre som returnerer en operator og den højre operand fra en data linje, som brugeren taster efter en prompt. (Normalt anbefaler vi at printf/scanf foregår i main. Men som her kan vi naturligvis også have enkelte funktioner, som abstraherer over bruger input/output fra tastatur/skærm).

// Du skal også have en funktion, do_next_op, som udfører den påkrævede operation: do_next_op skal have to input parametre (operator og operand) foruden akkumulatoren, som både skal kunne bruges til input og output (og som derfor skal være en pointer).

// Her er de gyldige operationer i lommeregneren:

//   +    for addition
//   -    for subtraktion
//   *    for multiplikation
//   /    for division
//   ^    for potensopløftning
//   q    for at komme ud af lommeregneren med slutresultatet
// Din lommeregner skal vise den akkumulerede værdi efter hver operation.

// Her er et eksempel på en dialog med lommeregneren - som det ser ud når du får skrevet dit program:

//   Enter operator and operand: + 5.0
//   Result so far is 5.0
//   Enter operator and operand: ^ 2
//   Result so far is 25.0
//   Enter operator and operand: / 2.0
//   Result so far is 12.5
//   Enter operator and operand: q 0
//   Final result is 12.5
// (Denne opgave svarer til opgave 10 side 360 i 6. udgave af lærebogen, og den minder om opgave 10 side 391 i 7. udgave).

// Der findes ingen løsning til denne opgave