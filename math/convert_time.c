#include <stdio.h>

int main(void) {
    int seconds;
    
    // Input antal sekunder
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    int hours, minutes, remainingSeconds;

    // Beregn timer, minutter og resterende sekunder
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remainingSeconds = seconds % 60;

    // Udgiv korrekt format baseret på antal timer, minutter og sekunder
    printf("%d seconds corresponds to ", seconds);

    // Check for timer
    if (hours > 0) {
        printf("%d hour%s", hours, (hours > 1) ? "s" : "");
        if (minutes > 0 || remainingSeconds > 0) {
            printf(", ");
        }
    }

    // Check for minutter
    if (minutes > 0) {
        printf("%d minute%s", minutes, (minutes > 1) ? "s" : "");
        if (remainingSeconds > 0) {
            printf(" and ");
        }
    }

    // Check for sekunder
    if (remainingSeconds > 0 || (hours == 0 && minutes == 0)) {
        printf("%d second%s", remainingSeconds, (remainingSeconds > 1) ? "s" : "");
    }

    printf("\n");

    return 0;
}

/*
Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
Opgave 3.4
Timer, minutter og sekunder - igen
Denne opgave er en fortsættelse af en tidligere opgave, hvor vi konverterede hele sekunder til uger, dage, timer, minutter og sekunder efter sædvanlige principper. I denne opgave begrænser vi os til timer, minutter og sekunder (vi dropper altså interessen for uger og dage).

Målet med opgaven er at træne dig i at bruge af if-else kæder, if'er i sekvens og betingede udtryk (med ?: operatoren). Målet er endvidere at opdele et lidt større program i mindre og markerede dele inden for main.

Det er sjusket og utilfredsstillende når det oprindelige program giver output som dette:

75 sekunder svarer til 0 timer, 1 minutter og 15 sekunder
3700 sekunder svarer til 1 timer, 1 minutter og 40 sekunder
55 sekunder svarer til 0 timer, 0 minutter og 55 sekunder
3661 sekunder svarer til 1 timer, 1 minutter og 1 sekunder
Vi ønsker at blive fri for '0 timer' og '0 minutter'. Endvidere ønsker vi korrekt angivelse af ental og flertal. Derfor foretrækker vi et program der giver følgende output:

75 sekunder svarer til 1 minut og 15 sekunder
3700 sekunder svarer til 1 time, 1 minut og 40 sekunder
55 sekunder svarer til 55 sekunder
3661 sekunder svarer til 1 time, 1 minut og 1 sekund
Skriv en ny version af programmet, som opfylder disse krav.

Overvej ombyggelig brugen af if-else kæder kontra sekvenser af if kontra betingede udtryk med brug af den ternære operator ?:

Løsningen til denne opgave er pt. ikke frigivet
*/