# Temperatur og lyssensor med Advarsel
Med en TMP36 temperatur føler og en photocell sensor er det muligt at gå ind og måle temperaturen og lysniveauet i et rum. I modellen herunder har jeg lavet et eksempel som giver en advarsel hvis lyset er for lavt i et arbejdsmiljø, ved lav belysning begynder lampen at lyse. Og hvis temperaturen overskrider 27 grader vil dioden blinke. Modellen er bygget op omkring en Arduino Uno.

# Opbygning
<img src="http://blog.mlsdesign.dk/images/Klima/indeklima_1.jpg" width="350"/>

Temperaturføleren er tilsluttet 3 volt samt Indgang A1 på Arduinoen. Photocellen er tilsluttet A0 med en modstand til jord, samt 5 volt strøm. Tilsidst er dioden tilsluttet udgang nr. 13 med en modstand til jord. Med dette set-up, kan koden herunder bruges til at give et resultat. Husk at sikre at i benytter de rigtige modstande samt vender temp. føleren korrekt i forhold til + og -.
