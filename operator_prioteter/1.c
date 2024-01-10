#include <stdio.h>

int main(void) {

  int a = 1, b = 2, c = 3;
  double x = 1.0;

  int res1, res2, res3, res4;

  res1 = (a > b) && (c < x);
  res2 = (a < (!b)) || (!!a);
  res3 = (a + b) < ((!c) + c);
  res4 = (a - x) || ((b * c) && (b / a));

  printf("res1 = %d, res2 = %d, res3 = %d,  res4 = %d \n", 
         res1, res2, res3, res4);

  return 0;
}
/*
Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
Opgave 3.2
Operator prioriteter i logiske udtryk
Denne opgaver giver dig træning i at anvende operator prioritering i logiske udtryk. Det er ikke nødvendigt at beregne værdierne af udtrykkene. Lad blot computeren foretage de faktiske beregninger.

Se på følgende C program:

#include <stdio.h>

int main(void){

  int a = 1, b = 2, c = 3;
  double x = 1.0;

  int res1, res2, res3, res4;

  res1 = a > b && c < x;
  res2 = a < ! b || ! ! a;
  res3 = a + b < ! c + c;
  res4 = a - x || b * c && b / a;

  printf("res1 = %d, res2 = %d, res3 = %d,  res4 = %d \n", 
	 res1, res2, res3, res4);

  return 0;
}
Sæt parenteres i de fire sammensatte, logiske udtryk, hvis værdier assignes til variablene res1, ..., res4. Ved at sætte parenteser bliver det klart, hvorledes de sammensatte udtryk beregnes. Vær sikker på at du anvender operator prioriteringerne i C, for at sætte parenteserne korrekt.

Check at overstående program, og dit modificerede program, er ækvivalente (giver det samme output når værdierne af res1, ..., res4 udskrives).

Løsningen til denne opgave er pt. ikke frigivet
*/