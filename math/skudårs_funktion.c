#include <stdio.h>

int isLeapYear(int year) {
    return (year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0));
}

int main(void) {
    printf("Leap years between 1900 and 2100:\n");
    for (int year = 1900; year <= 2100; year++) {
        if (isLeapYear(year)) {
            printf("%d\n", year);
        }
    }

    return 0;
}


// Opgaver i denne lektion        næste -- Tastaturgenvej: 'n'  Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 5.5
// Skudårsfunktionen
// Vi har tidligere i denne lektion mødt skudårsfunktionen

// int isLeapYear(int year){
//   int res;
//   if (year % 400 == 0)
//     res = 1;
//   else if (year % 100 == 0)
//     res = 0;
//   else if (year % 4 == 0)
//     res = 1;
//   else res = 0;
//   return res;
// }
// Programmer en ny skudårsfunktion med brug af && og ||, og uden brug af if-else og uden brug af betingede udtryk.

// Kald begge skudårsfunktioner for alle årstal mellem år 1900 og år 2100. Giver de to funktioner samme resultat på alle årstal?

// Løsningen til denne opgave er pt. ikke frigivet