int unitatiDreaptaJos = 9, unitatiJos = 8, unitatiMijloc = 10,
    unitatiStangaJos = 6, unitatiDreaptaSus = 5,
    unitatiSus = 4, unitatiStangaSus = 3;

int zeciStangaJos = 2, zeciStangaSus = 13;
byte zeciMijloc = A5, zeciSus = A3, zeciJos = A1,
     zeciDreaptaJos = A2, zeciDreaptaSus = A0;

void setup()
{
  pinMode(unitatiDreaptaJos, OUTPUT);
  pinMode(unitatiJos, OUTPUT);
  pinMode(unitatiMijloc, OUTPUT);
  pinMode(unitatiStangaJos, OUTPUT);
  pinMode(unitatiDreaptaSus, OUTPUT);
  pinMode(unitatiSus, OUTPUT);
  pinMode(unitatiStangaSus, OUTPUT);

  pinMode(zeciStangaJos, OUTPUT);
  pinMode(zeciMijloc, OUTPUT);
  pinMode(zeciSus, OUTPUT);
  pinMode(zeciJos, OUTPUT);
  pinMode(zeciDreaptaJos, OUTPUT);
  pinMode(zeciStangaSus, OUTPUT);
  pinMode(zeciDreaptaSus, OUTPUT);
}

void debug()
{
  digitalWrite(unitatiDreaptaJos, HIGH);
  delay(500);
  digitalWrite(unitatiDreaptaJos, LOW);
  delay(1000);
  digitalWrite(unitatiDreaptaSus, HIGH);
  delay(500);
  digitalWrite(unitatiDreaptaSus, LOW);
  delay(1000);
  digitalWrite(unitatiSus, HIGH);
  delay(500);
  digitalWrite(unitatiSus, LOW);
  delay(1000);
  digitalWrite(unitatiStangaSus, HIGH);
  delay(500);
  digitalWrite(unitatiStangaSus, LOW);
  delay(1000);
  digitalWrite(unitatiStangaJos, HIGH);
  delay(500);
  digitalWrite(unitatiStangaJos, LOW);
  delay(1000);
  digitalWrite(unitatiJos, HIGH);
  delay(500);
  digitalWrite(unitatiJos, LOW);
  delay(1000);
  digitalWrite(unitatiMijloc, HIGH);
  delay(500);
  digitalWrite(unitatiMijloc, LOW);
  delay(1000);

  digitalWrite(zeciDreaptaJos, HIGH);
  delay(500);
  digitalWrite(zeciDreaptaJos, LOW);
  delay(1000);
  digitalWrite(zeciDreaptaSus, HIGH);
  delay(500);
  digitalWrite(zeciDreaptaSus, LOW);
  delay(1000);
  digitalWrite(zeciSus, HIGH);
  delay(500);
  digitalWrite(zeciSus, LOW);
  delay(1000);
  digitalWrite(zeciStangaSus, HIGH);
  delay(500);
  digitalWrite(zeciStangaSus, LOW);
  delay(1000);
  digitalWrite(zeciStangaJos, HIGH);
  delay(500);
  digitalWrite(zeciStangaJos, LOW);
  delay(1000);
  digitalWrite(zeciJos, HIGH);
  delay(500);
  digitalWrite(zeciJos, LOW);
  delay(1000);
  digitalWrite(zeciMijloc, HIGH);
  delay(500);
  digitalWrite(zeciMijloc, LOW);
  delay(1000);
}

void loop()
{
  debug();
}