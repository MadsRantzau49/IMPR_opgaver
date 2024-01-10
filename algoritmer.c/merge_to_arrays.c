#include <stdio.h>
#include <stdlib.h>

// Funktion til at flette to sorterede arrays
void merge_arrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Sammenlign elementerne i begge arrays og indsæt dem i det flettede array
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Indsæt eventuelle resterende elementer fra det første array
    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    // Indsæt eventuelle resterende elementer fra det andet array
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int size1, size2;

    // Indlæs størrelsen af de to arrays
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2];

    // Indlæs elementerne i det første array
    printf("Enter the elements of the first array in sorted order:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Indlæs elementerne i det andet array
    printf("Enter the elements of the second array in sorted order:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Alloker plads til det flettede array
    int merged[size1 + size2];

    // Kald funktionen til at flette arrays
    merge_arrays(arr1, size1, arr2, size2, merged);

    // Udskriv det flettede array
    printf("Merged array after merging two sorted arrays:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}


// Opgave 9.10
// Fletning af to sorterede arrays
// Dette er opgave 11 side 471-472 i Problem Solving and Program Design in C, eighth global edition. Denne opgave er taget med her for at have en pladsholder til en løsning.

// Løsningen til denne opgave er pt. ikke frigivet