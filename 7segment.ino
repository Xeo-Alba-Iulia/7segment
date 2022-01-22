int unitatiDreaptaJos = 9, unitatiJos = 8, unitatiMijloc = 7,
  unitatiStangaJos = 6, unitatiDreaptaSus = 5,
  unitatiSus = 4, unitatiSusStanga = 3;

int zeciStangaJos = 2;
byte zeciMijloc = A5, zeciSus = A4, zeciJos = A3, 
  zeciJosDreapta = A2, zeciSusStanga = A1, zeciSusDreapta = A0;



void setup() {
  //  Serial.begin(9600);
  pinMode(unitatiDreaptaJos, OUTPUT);
  pinMode(unitatiJos, OUTPUT);
  pinMode(unitatiMijloc, OUTPUT);
  pinMode(unitatiStangaJos, OUTPUT);
  pinMode(unitatiDreaptaSus, OUTPUT);
  pinMode(unitatiSus, OUTPUT);
  pinMode(unitatiSusStanga, OUTPUT);

  
  pinMode(zeciStangaJos, OUTPUT);
  pinMode(zeciMijloc, OUTPUT);
  pinMode(zeciSus, OUTPUT);
  pinMode(zeciJos, OUTPUT);
  pinMode(zeciJosDreapta, OUTPUT);
  pinMode(zeciSusStanga, OUTPUT);
  pinMode(zeciSusDreapta, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(A5, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A0, HIGH);
  

}    
