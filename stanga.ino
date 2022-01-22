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

void stopDisplay()
{
    // turn all off first
    for (int i = 3; i <= 10; i++)
        if(i!=7)
            digitalWrite(i, LOW);

    digitalWrite(zeciSus, LOW);
    digitalWrite(zeciDreaptaJos, LOW);
    digitalWrite(zeciDreaptaSus, LOW);
    digitalWrite(zeciStangaJos, LOW);
    digitalWrite(zeciStangaSus, LOW);
    digitalWrite(zeciJos, LOW);
    digitalWrite(zeciMijloc, LOW);
}

void display(int nr)
{
    stopDisplay();

    switch (nr % 10)
    {
    case 0:
        for (int i = 3; i <= 9; i++)
            if (i != unitatiMijloc)
                digitalWrite(i, HIGH);

    case 1:
        digitalWrite(unitatiDreaptaJos, HIGH);
        digitalWrite(unitatiDreaptaSus, HIGH);
        break;

    case 2:
        digitalWrite(unitatiSus, HIGH);
        digitalWrite(unitatiDreaptaSus, HIGH);
        digitalWrite(unitatiMijloc, HIGH);
        digitalWrite(unitatiStangaJos, HIGH);
        digitalWrite(unitatiJos, HIGH);
        break;

    case 3:
        digitalWrite(unitatiSus, HIGH);
        digitalWrite(unitatiDreaptaSus, HIGH);
        digitalWrite(unitatiMijloc, HIGH);
        digitalWrite(unitatiDreaptaJos, HIGH);
        digitalWrite(unitatiJos, HIGH);
        break;

    case 4:
        digitalWrite(unitatiStangaSus, HIGH);
        digitalWrite(unitatiDreaptaSus, HIGH);
        digitalWrite(unitatiMijloc, HIGH);
        digitalWrite(unitatiDreaptaJos, HIGH);
        break;

    case 5:
        digitalWrite(unitatiSus, HIGH);
        digitalWrite(unitatiStangaSus, HIGH);
        digitalWrite(unitatiMijloc, HIGH);
        digitalWrite(unitatiDreaptaJos, HIGH);
        digitalWrite(unitatiJos, HIGH);
        break;

    case 6:
        digitalWrite(unitatiSus, HIGH);
        digitalWrite(unitatiStangaSus, HIGH);
        digitalWrite(unitatiMijloc, HIGH);
        digitalWrite(unitatiStangaJos, HIGH);
        digitalWrite(unitatiJos, HIGH);
        digitalWrite(unitatiDreaptaJos, HIGH);
        break;

    case 7:
        digitalWrite(unitatiSus, HIGH);
        digitalWrite(unitatiDreaptaSus, HIGH);
        digitalWrite(unitatiDreaptaJos, HIGH);
        break;

    case 8:
        for (int i = 3; i <= 10; i++)
            digitalWrite(i, HIGH);
        break;
    case 9:
        for (int i = 3; i <= 10; i++)
            if (i != unitatiStangaJos)
                digitalWrite(i, HIGH);
        break;

    default:
        for (int i = 3; i <= 10; i++)
            if(i!=7)
                digitalWrite(i, LOW);
    }

    switch (nr / 10)
    {
    case 1:
        digitalWrite(zeciDreaptaJos, HIGH);
        digitalWrite(zeciDreaptaSus, HIGH);
        break;
    case 2:
        digitalWrite(zeciSus, HIGH);
        digitalWrite(zeciDreaptaSus, HIGH);
        digitalWrite(zeciMijloc, HIGH);
        digitalWrite(zeciStangaJos, HIGH);
        digitalWrite(zeciJos, HIGH);
        break;

    case 3:
        digitalWrite(zeciSus, HIGH);
        digitalWrite(zeciDreaptaSus, HIGH);
        digitalWrite(zeciMijloc, HIGH);
        digitalWrite(zeciDreaptaJos, HIGH);
        digitalWrite(zeciJos, HIGH);
        break;

    case 4:
        digitalWrite(zeciStangaSus, HIGH);
        digitalWrite(zeciDreaptaSus, HIGH);
        digitalWrite(zeciMijloc, HIGH);
        digitalWrite(zeciDreaptaJos, HIGH);
        break;

    case 5:
        digitalWrite(zeciSus, HIGH);
        digitalWrite(zeciStangaSus, HIGH);
        digitalWrite(zeciMijloc, HIGH);
        digitalWrite(zeciDreaptaJos, HIGH);
        digitalWrite(zeciJos, HIGH);
        break;

    case 6:
        digitalWrite(zeciSus, HIGH);
        digitalWrite(zeciStangaSus, HIGH);
        digitalWrite(zeciMijloc, HIGH);
        digitalWrite(zeciStangaJos, HIGH);
        digitalWrite(zeciJos, HIGH);
        digitalWrite(zeciDreaptaJos, HIGH);
        break;

    case 7:
        digitalWrite(zeciSus, HIGH);
        digitalWrite(zeciDreaptaSus, HIGH);
        digitalWrite(zeciDreaptaJos, HIGH);
        break;

    case 8:
        digitalWrite(zeciSus, HIGH);
        digitalWrite(zeciDreaptaJos, HIGH);
        digitalWrite(zeciDreaptaSus, HIGH);
        digitalWrite(zeciStangaJos, HIGH);
        digitalWrite(zeciStangaSus, HIGH);
        digitalWrite(zeciMijloc, HIGH);
        digitalWrite(zeciJos, HIGH);
        break;

    case 9:
        digitalWrite(zeciSus, HIGH);
        digitalWrite(zeciStangaSus, HIGH);
        digitalWrite(zeciDreaptaJos, HIGH);
        digitalWrite(zeciDreaptaSus, HIGH);
        digitalWrite(zeciMijloc, HIGH);
        digitalWrite(zeciStangaSus, HIGH);
        digitalWrite(zeciJos, HIGH);
        break;

    default:
        digitalWrite(zeciSus, LOW);
        digitalWrite(zeciDreaptaJos, LOW);
        digitalWrite(zeciDreaptaSus, LOW);
        digitalWrite(zeciStangaJos, LOW);
        digitalWrite(zeciStangaJos, LOW);
        digitalWrite(zeciJos, LOW);
        digitalWrite(zeciMijloc, LOW);
        break;
    }
}

void loop()
{
    stopDisplay();
    for(int i=1; i<=99; i++)
      display(i);
}