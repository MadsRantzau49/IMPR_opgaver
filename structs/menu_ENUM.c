#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Enumeration typer for forret, hovedret og dessert
enum Forret { GUACAMOLE, TARTELETTER, LAKSERULLE, GRÆSKARSUPPE };
enum Hovedret { GYLDENKÅL, HAKKEBØF, GULLASH, FORLOREN_HARE };
enum Dessert { PANDEKAGER_MED_IS, GULERODSKAGE, CHOKOLADEMOUSSE, CITRONFROMAGE };

// Funktion til at generere et tilfældigt tal inden for et givet interval
int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Funktion til at udskrive en forret
void printForret(enum Forret forret) {
    switch (forret) {
        case GUACAMOLE:
            printf("Forret: Guacamole\n");
            break;
        case TARTELETTER:
            printf("Forret: Tarteletter\n");
            break;
        case LAKSERULLE:
            printf("Forret: Lakserulle\n");
            break;
        case GRÆSKARSUPPE:
            printf("Forret: Græskarsuppe\n");
            break;
    }
}

// Funktion til at udskrive en hovedret
void printHovedret(enum Hovedret hovedret) {
    switch (hovedret) {
        case GYLDENKÅL:
            printf("Hovedret: Gyldenkål\n");
            break;
        case HAKKEBØF:
            printf("Hovedret: Hakkebøf\n");
            break;
        case GULLASH:
            printf("Hovedret: Gullash\n");
            break;
        case FORLOREN_HARE:
            printf("Hovedret: Forloren hare\n");
            break;
    }
}

// Funktion til at udskrive en dessert
void printDessert(enum Dessert dessert) {
    switch (dessert) {
        case PANDEKAGER_MED_IS:
            printf("Dessert: Pandekager med is\n");
            break;
        case GULERODSKAGE:
            printf("Dessert: Gulerodskage\n");
            break;
        case CHOKOLADEMOUSSE:
            printf("Dessert: Chokolademousse\n");
            break;
        case CITRONFROMAGE:
            printf("Dessert: Citronfromage\n");
            break;
    }
}

// Funktion til at generere et måltid
void maaltid() {
    enum Forret valgtForret = getRandomNumber(GUACAMOLE, GRÆSKARSUPPE);
    enum Hovedret valgtHovedret = getRandomNumber(GYLDENKÅL, FORLOREN_HARE);
    enum Dessert valgtDessert = getRandomNumber(PANDEKAGER_MED_IS, CITRONFROMAGE);

    printForret(valgtForret);
    printHovedret(valgtHovedret);
    printDessert(valgtDessert);

    printf("\n");
}

int main() {
    // Initialiserer random seed baseret på nuværende tid
    srand((unsigned int)time(NULL));

    // Genererer og udskriver 25 måltider
    for (int i = 0; i < 25; i++) {
        maaltid();
    }

    return 0;
}


// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 8.1
// En tilfældig menu
// Definer tre forskellige enumeration typer for hhv. forret, hovedret og dessert.

// Enumeration typen forret skal indholde værdier for guacamole, tarteletter, lakserulle og græskarsuppe.

// Enumeration typen hovedret skal indholde værdier for gyldenkål, hakkebøf, gullash og forloren hare.

// Enumeration typen dessert skal indholde værdier for pandekager med is, gulerodskage, choklademousse, og citronfromage.

// Undgå dog danske bogstaver i dit C program. Det giver kun besvær!

// Skriv en funktion maaltid, som vælger og udskriver én tilfældig ret i hver af de tre kategorier. Læs om "tilfældige tal" i C her.

// Kald funktionen maaltid 25 gange i main, med det formål at få genereret et menukort af 25 kombinationer af forret, hovedret og dessert.

// Overvej om der skal defineres flere små funktioner, som nedbryder det samlede problem i delproblemer.

// Denne opgave er inspireret af en tilsvarende opgave i bogen 'C by Dissection'. Benyttet med tilladelse fra forlaget.

// Løsningen til denne opgave er pt. ikke frigivet