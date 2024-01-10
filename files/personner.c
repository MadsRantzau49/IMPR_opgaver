#include <stdio.h>
#include <stdlib.h>  
#include <string.h>

#define MAX_PERSONS 11
#define MAX_NAME_LGT 50

typedef struct{
    char fornavn[MAX_NAME_LGT];
    char efternavn[MAX_NAME_LGT];
    char vejnavn[MAX_NAME_LGT];
    int vejnummer;
    int postnummer;
    char bynavn[MAX_NAME_LGT];
}Person;


Person read_person(FILE *file);
void print_person(Person person);
int compare(const void* a, const void* b);


int main(void)
{
    Person sorted_person_list[MAX_PERSONS];

    FILE *file = fopen("C:/Users/madsr/OneDrive/Documents/UNI/impr/lecture/lecture_12/lecture-12-MadsRantzau49/src/personer.txt","r");
    if (file == NULL){
        printf("FAILURE");
    }
    for (int i = 0; i < MAX_PERSONS; i++){
    Person person = read_person(file);
    sorted_person_list[i] = person;
    }
    fclose(file);

    qsort(sorted_person_list, MAX_PERSONS, sizeof(Person), compare);  

    for (int j = 0; j < MAX_PERSONS; j++){
    print_person(sorted_person_list[j]);
    }

    // consider implementing the functions in a library
    // and add tests to check that yours function works correctly
}

int compare(const void* a, const void* b)  
{  
    Person *p1 = (Person*)a;
    Person *p2 = (Person*)b;
    return strcmp(p1->efternavn, p2->efternavn);  
}
Person read_person(FILE *file){
    Person p;
    fscanf(file, "%s %s %[a-zA-Z ] %d, %d %[a-zA-Z].", p.fornavn,p.efternavn,p.vejnavn, &p.vejnummer, &p.postnummer, p.bynavn);
    return p;
}

void print_person(Person person){
    FILE* file = fopen("output.txt","a");
    fprintf(file,"%s %s %s %d %d %s\n", person.fornavn,person.efternavn,person.vejnavn, person.vejnummer, person.postnummer,person.bynavn);
}
// Lars Jensen, Engtoften 23, 7182 Bredsten.
