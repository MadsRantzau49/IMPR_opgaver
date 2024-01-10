#include <stdio.h>
#include <stdlib.h>

// Sammenligningsfunktion til qsort for doubles
int compareDoubles(const void *a, const void *b) {
    // Cast de generiske pointere til double pointere og sammenlign værdierne
    return (*(double *)a > *(double *)b) - (*(double *)a < *(double *)b);
}

int main() {
    // Alloker plads til 100 doubles
    double *array = (double *)malloc(100 * sizeof(double));

    // Tjek om allokeringen var succesfuld
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Indskriv tilfældige tal i arrayet
    for (int i = 0; i < 100; i++) {
        array[i] = rand() % 1000 / 10.0; // Tilfældige tal mellem 0 og 100
    }

    // Udskriv de oprindelige tal
    printf("Original array:\n");
    for (int i = 0; i < 100; i++) {
        printf("%.2lf ", array[i]);
    }
    printf("\n");

    // Sorter arrayet med qsort
    qsort(array, 100, sizeof(double), compareDoubles);

    // Udskriv de sorteret tal
    printf("Sorted array:\n");
    for (int i = 0; i < 100; i++) {
        printf("%.2lf ", array[i]);
    }
    printf("\n");

    // Dealloker det allokerede lager
    free(array);

    return 0;
}


// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'  næste -- Tastaturgenvej: 'n'  Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 9.5
// Dynamisk allokering og qsort
// Brug malloc til at allokere plads til 100 doubles. Check at allokeringen blev gennemført, og dealloker dit lager når du er færdig med at bruge det.

// Opfat det allokerede lager som et array af 100 doubles, og indskriv 100 tilfældige tal i dit array. Udskriv dem på skærmen.

// Brug nu qsort til at sortere dine tal. Udskriv dem igen, så du kan se at dit array rent faktisk er blevet sorteret.

// Løsningen til denne opgave er pt. ikke frigivet