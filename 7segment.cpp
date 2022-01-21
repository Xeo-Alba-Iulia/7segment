void setup() {

  int unitatiDreaptaJos = 9, unitatiJos = 8, unitatiMijloc = 7,
    unitatiStangaJos = 6, unitatiDreaptaSus = 5,
    unitatiSus = 4, unitatiSusStanga = 3;
    

  //  Serial.begin(9600);
  pinMode(unitatiDreaptaJos, OUTPUT);
  pinMode(unitatiJos, OUTPUT);
  pinMode(unitatiMijloc, OUTPUT);
  pinMode(unitatiStangaJos, OUTPUT);
  pinMode(unitatiDreaptaSus, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop() {
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);

}    
