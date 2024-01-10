#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funktion til at simulere kast med en terning
int roll_die() {
    return rand() % 6 + 1; // Terningen har værdier fra 1 til 6
}

// Funktion til at simulere kast med n terninger
int* roll_multiple_dies(int n) {
    int* rolls = (int*)malloc(n * sizeof(int));

    if (rolls == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; i++) {
        rolls[i] = roll_die();
    }

    return rolls;
}

int main() {
    srand(time(NULL)); // Initialiser random seed

    int n;
    printf("Enter the number of dice: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++) {
        int* rolls = roll_multiple_dies(n);

        printf("Rolls #%d: ", i + 1);
        for (int j = 0; j < n; j++) {
            printf("%d ", rolls[j]);
        }
        printf("\n");

        free(rolls); // Deallokér det allokerede lager
    }

    return 0;
}


// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'  næste -- Tastaturgenvej: 'n'  Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 9.8
// Multiple terningekast.
// På siden om tilfældige tal, har vi set en simpel funktion, der simulerer et kast med en terning.

// I nogle sammenhænge er der behov for kast med n terninger, hvor n > 1. I det simple tilfælde kan vi naturligvis blot kaste én terning n gange (i en løkke). I andre tilfælde har vi behov for at have adgang til udfaldene af de n terninger samtidigt, i et array, for at kunne vurdere de n kast under ét. Vi vil senere på kurset få brug for netop denne mulighed.

// Skriv derfor en funktion roll_multiple_dies, med en heltals parameter n, der kaster n terninger, og som afleverer et array af de n terningekast.

// Afleveringen af de n kast kan ske på to måder: gennem en parameter af pointer type eller via funktionens returværdi. Allokering af arrayet kan også varieres: enten allokerer roll_multiple_dies plads, eller også er der allerede allokeret plads, når roll_multiple_dies kaldes. Hvis roll_multiple_dies allokerer plads med dynamisk lagerallokering, i hvert kald, udestår der et efterfølgende arbejde med passende kald af free.

// Skriv, ud fra denne analyse, din foretrukning variant af funktionen roll_multiple_dies.

// Programmer endvidere, i main, 10 kald af af roll_multiple_dies. Giv indledningsvis brugeren mulighed for at indlæse størrelsen n (antallet af terninger). Udskriv, for hvert kald af roll_multiple_dies, udfaldet af de n terningekast.

// Der findes ingen løsning til denne opgave