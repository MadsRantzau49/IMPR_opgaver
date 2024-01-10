#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definition af bogen struktur
typedef struct {
    char title[100];
    int year;
    int university_text_book;
} book;

// Sammenligningsfunktion for qsort baseret på bogtitel
int compare_books_by_title(const void *a, const void *b) {
    return strcmp(((book *)a)->title, ((book *)b)->title);
}

// Sammenligningsfunktion for qsort baseret på bogtype og udgivelsesår
int compare_books_by_kind_and_year(const void *a, const void *b) {
    const book *bookA = (const book *)a;
    const book *bookB = (const book *)b;

    // Først sorteres efter bogtype (skønlitterær kommer før lærebog)
    if (bookA->university_text_book != bookB->university_text_book) {
        return bookA->university_text_book - bookB->university_text_book;
    }

    // Hvis det er samme bogtype, sorteres efter udgivelsesår
    return bookA->year - bookB->year;
}

// Funktion til at udskrive en bog
void print_book(book b) {
    printf("Title: %s\n", b.title);
    printf("Year: %d\n", b.year);
    printf("University text book: %s\n\n", b.university_text_book ? "yes" : "no");
}

// Funktion til at sortere bøger efter titel
void sort_books_by_title(book shelf[], int last) {
    qsort(shelf, last + 1, sizeof(book), compare_books_by_title);
}

// Funktion til at sortere bøger efter type og udgivelsesår
void sort_books_by_kind_and_year(book shelf[], int last) {
    qsort(shelf, last + 1, sizeof(book), compare_books_by_kind_and_year);
}

int main() {
    // Initialisering af en samling bøger
    book shelf[] = {
        {"Pelle Erobreren", 1910, 0},
        {"Ditte Menneskebarn", 1917, 0},
        {"The C Programming Language", 1988, 1},
        {"C by Dissection", 2001, 1},
        {"Problem Solving and Program Design in C", 2010, 1}
    };

    int last_book_index = sizeof(shelf) / sizeof(shelf[0]) - 1;

    // Uden sortering
    printf("Books before sorting:\n");
    for (int i = 0; i <= last_book_index; i++) {
        print_book(shelf[i]);
    }

    // Sortering efter titel
    sort_books_by_title(shelf, last_book_index);
    printf("Books sorted by title:\n");
    for (int i = 0; i <= last_book_index; i++) {
        print_book(shelf[i]);
    }

    // Sortering efter type og udgivelsesår
    sort_books_by_kind_and_year(shelf, last_book_index);
    printf("Books sorted by kind and year:\n");
    for (int i = 0; i <= last_book_index; i++) {
        print_book(shelf[i]);
    }

    return 0;
}


// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 12.2
// Sortering af et array af bøger
// Programmer en funktion, sort_books_by_title, som kan kaldes på variablen shelf fra programmet på den tilhørende slide. Tag udgangspunkt i dette program. Overfør også indekset af den sidste bog som en parameter til sort_books_by_title, således at sorteringsfunktionen ved hvor mange bøger, der skal sorteres:

//   void sort_books_by_title(book shelf[], int last){
//     qsort(shelf, last+1, ..., ...);
//   }
// Som antydet af funktionsnavnet, skal funktionen ordne bøgerne således at titlerne kommer i alfabetisk orden. Efter sorteringen er den første bog således 'C by Dissection', og den sidste bog er 'The C Programming Language'. Sorteringen skal foregå ved at bytte om på bøgerne i arrayet (ikke ved at danne en ny, sorteret kopi af arrayet).

// Ved løsningen af denne opgave skal du anvende funktionen qsort fra stdlib.h, som tidligere har været beskrevet i dette undervisningsmateriale.

// Programmer dernæst en funktion sort_books_by_kind_and_year. Denne funktion skal primært sortere bøgerne således at alle skønliterære bøger kommer før lærebøgerne (university text books). Inden for begge disse grupper skal funktionen sekundært sortere bøgerne efter udgivelsesår. Relativt til eksemplet på den tilknytede side i undervisningsmaterialet skal det give følgende ordning på bøgerne:

// Title: Pelle Erobreren
// Year: 1910
// University text book: no

// Title: Ditte Menneskebarn
// Year: 1917
// University text book: no

// Title: The C Programming Language
// Year: 1988
// University text book: yes

// Title: C by Disssection
// Year: 2001
// University text book: yes

// Title: Problem Solving and Program Design in C
// Year: 2010
// University text book: yes
// Afprøv begge sorterings-funktionerne på de fem bøger i variablen shelf.

// Løsningen til denne opgave er pt. ikke frigivet