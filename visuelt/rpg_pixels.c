#include <stdio.h>

unsigned int make_pixel(int red, int green, int blue) {
    // Antager at red, green og blue er mellem 0 og 255
    return (red << 16) | (green << 8) | blue;
}

int get_red(unsigned int p) {
    return (p >> 16) & 0xFF;
}

int get_green(unsigned int p) {
    return (p >> 8) & 0xFF;
}

int get_blue(unsigned int p) {
    return p & 0xFF;
}

int main(void) {
    // Test eksempler
    unsigned int pixel = make_pixel(255, 128, 64);

    printf("Red: %d\n", get_red(pixel));
    printf("Green: %d\n", get_green(pixel));
    printf("Blue: %d\n", get_blue(pixel));

    return 0;
}



// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 5.4
// RGB Pixels
// I en tidligere opgave har vi arbejdet med PPM grafik, hvor vi med tre kald af fputc skrev én pixel bestående af tre bytes (rød, grøn, blå) på en fil. Denne opgave forbereder vores fremtidige programmering af PPM grafik med en eksplict og relativ kompakt repræsentation af farverne i én pixel.

// I denne opgave vil vi repræsentere en pixel i en unsigned int, som antages at fylde 4 bytes, på følgende måde:

// Den mest betydende byte er i realiteten ubrugt - reserveret til fremtidige behov (til f.eks. at skelne mellem forskellige måder at repræsentere farver på). Vi vælger dog at skrive bitmønstret 00000001 i dette felt.
// De efterfølgende tre bytes er hhv. den røde, grønne, og blå komponent (hver positive heltal mellem 0 og 255). Den blå komponent bliver således den mindst-betydende byte.
// Skriv en funktion

//   unsigned int make_pixel(int red, int green, int blue);
// som indsætter tre heltal (som hver forudsættes at være mellem 0 og 255) i en unsigned int, og returnerer den resulterende pixels (som en unsigned int).

// Skriv endvidere tre funktioner, som udtrækker hhv. den røde grønne og blå komponent af en pixel:

//   int get_red(unsigned int p);
//   int get_green(unsigned int p);
//   int get_blue(unsigned int p);
// Det skal naturligvis være således at

// get_red(make_pixel(r, g, b)) = r
// get_green(make_pixel(r, g, b)) = g
// get_blue(make_pixel(r, g, b)) = b
// Check at dette er tilfældet gennem en række eksempler (såkaldte test - eller 'unit tests').

// Organiser de fire funktioner ovenfor i filen pixels.c, og lav en tilsvarende header fil pixels.h. Vær sikker på at du kan oversætte (compilere) filen pixels.c separat.

// Det er attraktivt - men ikke strengt nødvendigt - at anvende de bitvise operatorer (eksempelvis <<, >> og &). Disse er beskrevet i appendix C, side C-3 i lærebogen (7. udgave). Du kan også overveje at se videoen De Bitvise Operatorer.

// Løsningen til denne opgave er pt. ikke frigivet