#include <stdio.h>

int main(void) {
  FILE *image_file;
  int i, j;
  int r, g, b;

  image_file = fopen("gradient-pattern.pnm", "wb");

  fputs("P6\n", image_file);
  fputs("500 500\n", image_file);
  fputs("255\n", image_file);

  for (i = 0; i < 500; i++)
    for (j = 0; j < 500; j++) {
      r = (i * 255) / 500;
      g = (j * 255) / 500;
      b = 0;
      fputc(r, image_file);
      fputc(g, image_file);
      fputc(b, image_file);
    }

  fclose(image_file);
  return 0;
}

// Opgaver i denne lektion  forrige -- Tastaturgenvej: 'p'        Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 4.4
// Generering af grafik-filer
// I denne opgave vil vi generere grafik filer med flotte mønstre. Vi vil benytte et meget simpelt fil-format, Portable Pixmap (PPM). Du kan se på Wikipedia artiklen Netpbm format, som giver et godt overblik over formatet. Der findes også en video der diskuterer formatet, og videoen lægger kort op til denne opgave.

// Her følger et velkommenteret C program, som genererer et 500 x 500 rødt rektangel:

// #include <stdio.h>

// int main(void) {

//   FILE *image_file;                               /* The file on which to write the image */
//   int i, j;

//   image_file = fopen("image-file-1.pnm", "wb");   /* Open a file for writing.             */

//   fputs("P6\n", image_file);                      /* Write the header, including the      */
//                                                   /* so-called magic number P6            */
//   fputs("500 500\n", image_file);                 /* Width: 500, Height: 500              */
//   fputs("255\n", image_file);                     /* 255 colors per byte.                 */

//   for(i = 0; i < 500; i++)              
//     for (j = 0; j < 500; j++){
//       fputc(255, image_file);                     /* Writing the red byte                 */
//       fputc(0, image_file);                       /* Write the green byte                 */ 
//       fputc(0, image_file);                       /* Write the blue byte                  */
//     }

//   fclose(image_file);                             /* Close the file.                      */
//   return 0;
// }
// Her er en variation af programmet, som genererer et lidt mere spændende resultat:

// #include <stdlib.h>
// #include <stdio.h>

// int main(void) {

//   FILE *image_file;
//   int i, j;
//   int r, g, b;

//   image_file = fopen("image-file-4.pnm", "wb"); 

//   fputs("P6\n", image_file); 
//   fputs("500 500\n", image_file);
//   fputs("255\n", image_file);

//   for(i = 0; i < 500; i++)
//     for (j = 0; j < 500; j++){
//       r = i % 256; g = j % 256; b = (i+j) % 256;
//       fputc(r, image_file);  fputc(g, image_file); fputc(b, image_file);
//     }

//   fclose(image_file);
//   return 0;
// }
// Begge programmer udskriver, via den ydre for-løkke, RGB bytes (red, green, blue) række for række.

// Den kreative udfordringen består i at lave flotte mønstre ved at variere programmerne ovenfor. I denne opgave er det dog en betingelse at de to for-løkker, som kontrollerer hhv. række og søjler i bitmønstret, bibeholdes. Du skal ikke forsøge at lave et stort array af RGB værdier, og ændre i dette. Senere i kurset vil vi udvikle varianter af programmet, som gør det meget mere fleksibelt at tegne forskellige geometriske figurer i en stor tabel (array) af pixels.

// Det er naturligvis vigtigt, at du kan se den grafik som genereres af dit program. Her er et antal muligheder, som jeg ved virker:

// Hvis du åbner en Portable Pixmax fil med Emacs, vises grafikken. Både PPM og PNM extension virker.
// GIMP (GNU Image Manipulation Program) kan præsentere billederne.
// Image Magick kan konvertere PPM og PNM filer til andre grafik formater, f.eks. GIF og JPG. I en Windows command prompt skrives: convert fil.pnm fil.jpg, efter at ImageMagick er installeret på din maskine.
// Der findes ingen løsning til denne opgave

