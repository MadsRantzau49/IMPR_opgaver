
// Opgaver i denne lektion              Gå til slide, hvor denne opgave er tilknyttet -- Tastaturgenvej: 'u'  
// Opgave 8.2
// Tegning af geometriske primitiver - PPM grafik
// I denne opgave vil vi - trin for trin - tilføje nye nyttige funktioner, som arbejder på PPM billeder. De første er forholdsvis simple. De senere er lidt mere udfordrende. I denne opgave er billedet tilgængelig i en passende datastruktur, som vi dog ikke har behov for at gå i dybden med på nuværende tidspunkt.

// Der findes en video som giver et oplæg til denne opgave. Der findes også en video der introducerer det billedformat som vi arbejder med. Det er kun de første 9 minutter af denne video der er relevant for dette kursus.

// Arbejdet vil basere sig på nogle allerede programmerede funktioner, som kan aflæse og sætte én pixel i et PPM billede. Du kan også tænke på en pixel som en farve.

// Der findes en zip-fil, som indeholder alt det nødvendige for at komme igang. README filen giver anvisninger på hvordan du kan compilere programmerne.

// Nogle af jer har måske allerede lavet lidt forarbejde, nemlig funktioner som arbejder med RGB pixels. Hvis dette ikke er filfældet indholder zip filen min version af pixel funktionerne.

// Det anbefales først at læse ppm.h og det simple eksempel på anvendelse af nogle af funktionerne fra ppm.h. Denne anvendelse genererer dette billede.

// Programmer nu følgende:

// En funktion der tegner en vandret linie med en bestemt farve i et ppm billede.
// En funktion der tegner en lodret linie med en bestemt farve.
// Lav varianter af ovenstående som også tilbyder tegning af vandrette/lodrette linier med en bestemt tykkelse.
// Lav evt. varianter af ovenstående som tilbyder tegning af vandrette/lodrette stiplede linier.
// En funktion der tegner en ikke-udfyldt rektangel (parallel med akserne) med en bestemt farve.
// En funktion der tegner en udfyldt rektangel (parallel med akserne) med en bestemt farve.
// En funktion der tegner en vilkårlig linie med en bestemt farve. Eksperimenter med denne funktion - og find selv frem til udfordringen!
// En funktion der tegner en cirkel med en bestemt radius, og med en bestemt farve - ikke-udfyldt, dernæst udfyldt.
// Arbejdet kan fortsættes med endnu flere primitiver, i forskellige retninger. Tegning af stiplede linier er en mulighed. Eller indnu mere ambitiøst (for de særligt inkarnerede) indsættelse af tegn (fra en bestemt font) i et ppm billede.

// Det er naturligvis vigtigt, at du kan se den grafik som genereres af dit program. Her er et antal muligheder, som jeg ved virker:

// Hvis du åbner en Portable Pixmax fil med Emacs, vises grafikken. Både PPM og PNM extension virker.
// GIMP (GNU Image Manipulation Program) kan præsentere billederne.
// Image Magick kan konvertere PPM og PNM filer til andre grafik formater, f.eks. GIF og JPG. I en Windows command prompt skrives: convert fil.pnm fil.jpg, efter at ImageMagick er installeret på din maskine.
// Der findes ingen løsning til denne opgave