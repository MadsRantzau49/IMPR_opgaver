#include <stdio.h>
#include <string.h>

// Funktion til at oversætte et engelsk navneord fra ental til flertal
void pluralizeNoun(char *noun) {
    int length = strlen(noun);

    // Hvis navneordet ender på 'y', fjern 'y' og tilføj 'ies'
    if (length > 0 && noun[length - 1] == 'y') {
        noun[length - 1] = 'i';
        strcat(noun, "es");
    }
    // Hvis navneordet ender på 's', 'ch' eller 'sh', tilføj 'es'
    else if (length > 1 && (noun[length - 1] == 's' || (noun[length - 1] == 'h' && (noun[length - 2] == 'c' || noun[length - 2] == 's')))) {
        strcat(noun, "es");
    }
    // Ellers tilføj 's'
    else {
        strcat(noun, "s");
    }
}

int main() {
    // Array af engelske navneord i ental
    char nouns[][20] = {"chair", "dairy", "boss", "circus", "fly", "dog", "church", "clue", "dish"};

    // Antallet af navneord i arrayet
    int numNouns = sizeof(nouns) / sizeof(nouns[0]);

    // Oversæt og udskriv både ental og flertal
    for (int i = 0; i < numNouns; i++) {
        printf("%-10s -> ", nouns[i]);
        pluralizeNoun(nouns[i]);
        printf("%s\n", nouns[i]);
    }

    return 0;
}


// Opgaver i denne lektion        næste -- Tastaturgenvej: 'n'  Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 10.3
// Flertals navneord
// Skriv et program som oversætter udvalgte engelske navneord fra ental til flertal. Følgende regler skal overholdes:

// Hvis et navneord ender i et "y" fjernes "y" og der tilføjes "ies".
// Hvis et navneord ender i et "s", "ch" eller "sh" tilføjes et "es".
// I alle andre tilfælde tilføjes et "s" til navneordet.
// Udskriv hvert navneord i både ental og flertal.

// Som altid skal du designe en funktion med et passende navn, og med parametre (input og evt. output). Og som altid laver vi top-down programmering ved trinvis forfinelse. Ønsker du at bruge returværdien af funktionen til noget?

// Afprøv dit program på følgende engelske navneord:

// chair dairy boss circus fly dog church clue dish
// Alloker plads til disse i en passende array af tekststrenge.

// Denne opgave svarer til opgave 5 side 532 i 6. udgave af lærebogen

// Hints: Måske er funktionen strrchr fra string.h nyttig i denne opgave. Den søger efter et tegn fra bagenden af strengen. Husk også at du blot kan tilgå tegn i en tekststreng med array subscripting operatoren: str[i]. Du kan teste om et tegn i din streng svarer til et bestemt tegn: str[i] == 'y'.

// Løsningen til denne opgave er pt. ikke frigivet