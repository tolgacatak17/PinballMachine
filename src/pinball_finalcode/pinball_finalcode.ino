#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int A_trig = 3; int disA; int corridorA = 0;
int A_echo = 2;
int B_trig = 9; int disB; int corridorB = 0;
int B_echo = 8;
int C_trig = 10; int disC; int corridorC = 0;
int C_echo = 11;
int D_trig = 12; int disD; int corridorD = 0;
int D_echo = 13;
int SS_trig = 4; int disSS; int SS_Selonoid = 51;
int SS_echo = 5;
int distance;
long duration;
int last_input = 0;

int SlingSL = A0; 
int SlingLN; 
int SlingLO;

int SlingSR = A1; 
int SlingRN; 
int SlingRO;

int Bumperpiezo = A2; 
int BumperN; 
int BumperO; 

int BumperSelonoid = 53;
int OOPA = A3; 
int OOPAN; 
int OOPO;


int starttime = 0; 
int time_new = 0;
int Score = 0; 
int HighestScore = 0;
int life = 0;
int Start = 0;

int Green = 47; int GREENRAN = random(256); int randRGB = random(3);
int Red = 49; int REDRAN = random(256);
int Blue = 7; int BLUERAN = random(256);

byte heart[] = {
    B01010,
    B11111,
    B11111,
    B01110,
    B00100,
    B00000,
    B00000,
    B00000
};

void setup() {
    delay(1000);
    lcd.begin();
    lcd.createChar(0, heart);

    pinMode(A_trig, OUTPUT);
    pinMode(A_echo, INPUT);
    pinMode(B_trig, OUTPUT);
    pinMode(B_echo, INPUT);
    pinMode(C_trig, OUTPUT);
    pinMode(C_echo, INPUT);
    pinMode(D_trig, OUTPUT);
    pinMode(D_echo, INPUT);
    pinMode(SS_trig, OUTPUT);
    pinMode(SS_echo, INPUT);
    
    pinMode(SS_Selonoid, OUTPUT);
    pinMode(BumperSelonoid, OUTPUT);
    digitalWrite(SS_Selonoid, LOW);
    digitalWrite(BumperSelonoid, LOW);

    Serial.begin(9600);
}

void loop() {
    while((millis() - starttime) < 10000) {
        Ultrasonic(SS_trig, SS_echo);
        disSS = distance;
        Ultrasonic(D_trig, D_echo);
        disD = distance;
        Ultrasonic(C_trig, C_echo);
        disC = distance;
        Ultrasonic(B_trig, B_echo);
        disB = distance;
        Ultrasonic(A_trig, A_echo);
        disA = distance;
        SlingLN = analogRead(SlingSL);
        SlingRN = analogRead(SlingSR);
        BumperN = analogRead(Bumperpiezo);
        OOPAN = analogRead(OOPA);

        SlingLO = SlingLN;
        SlingRO = SlingRN;
        BumperO = BumperN;
        OOPANO = OOPAN;
        LCDwaittime()
        time_new = millis()
    }

    if((millis() % time_new) >= 10000) { // Change color every 10 seconds.
        time_new = millis();
        GREENRAN = random(256);
        REDRAN = random(256);
        BLUERAN = random(256);
    }
    LCDdisplay(life, Score, HighestScore);
    LEDs_NOGAME(GREENRAN, REDRAN, BLUERAN);

    Ultrasonic(SS_trig, SS_echo);
    disSS = distance;
    Ultrasonic(D_trig, D_echo);
    disD = distance;
    Ultrasonic(C_trig, C_echo);
    disC = distance;
    Ultrasonic(B_trig, B_echo);
    disB = distance;
    Ultrasonic(A_trig, A_echo);
    disA = distance;
    SlingLN = analogRead(SlingSL);
    SlingRN = analogRead(SlingSR);
    BumperN = analogRead(Bumperpiezo);
    OOPAN = analogRead(OOPA);

    if(disA > 10 || disA < 5) {
        Start = 1;
        while(disA > 10 || disA < 5) {
            Ultrasonic(A_trig, A_echo);
            disA = distance;
        }
    }

    if(disB > 10 || disB < 5) {
        Start = 1;
        while(disB > 10 || disB < 5) {
            Ultrasonic(B_trig, B_echo);
            disB = distance;
        }
    }
    
    if(disC > 12 || disC < 7) {
        Start = 1;
        while(disC > 12 || disC < 7) {
            Ultrasonic(C_trig, C_echo);
            disC = distance;
        }
    }
    
    if(disD > 12 || disD < 7) {
        Start = 1;
        while(disD > 12 || disD < 7) {
            Ultrasonic(D_trig, D_echo);
            disD = distance;
        }
    }
    
    SlingLO = SlingLN;
    SlingRO = SlingRN;
    BumperO = BumperN;
    OOPOA = OOPAN;
    
    if(Start == 1) {
        life = 3;
        Score = 0;
    }

    while(life != 0) {
        LCDdisplay(life, Score, HighestScore); // LCD display
        LEDs_INGAME(randRGB); // LEDs
        Ultrasonic(SS_trig, SS_echo);
        disSS = distance;
        Ultrasonic(D_trig, D_echo);
        disD = distance;
        Ultrasonic(C_trig, C_echo);
        disC = distance;
        Ultrasonic(B_trig, B_echo);
        disB = distance;
        Ultrasonic(A_trig, A_echo);
        disA = distance;
        SlingLN = analogRead(SlingSL);
        SlingRN = analogRead(SlingSR);
        BumperN = analogRead(Bumperpiezo);
        OOPAN = analogRead(OOPA);

        if(disA > 10 || disA < 5) {
            Score += 20;
            last_input = 2;
            corridorA++;
            while(disA > 10 || disA < 5) {
                Ultrasonic(A_trig, A_echo);
                disA = distance;
            }
        }
      
        if(disB > 10 || disB < 5) {
            Score += 20;
            last_input = 3;
            corridorB++;
            while(disB > 10 || disB < 5) {
                Ultrasonic(B_trig, B_echo);
                disB = distance;
            }
        }
      
        if(disC > 12 || disC < 7) {
            Score += 20;
            last_input = 4;
            corridorC++;
            while(disC > 12 || disC < 7) {
                Ultrasonic(C_trig, C_echo);
                disC = distance;
            }
        }
      
        if((disD > 12 || disD < 7) && last_input != 1) {
            Score += 20;
            last_input = 1;
            corridorD++;
            while(disD > 12 || disD < 7) {
                Ultrasonic(D_trig, D_echo);
                disD = distance;
            }
        }
      
        if(disSS > 10 || disSS < 5) {
            Score += 100;
            last_input = 5;
            delay(1500);
            digitalWrite(SS_Selonoid, LOW);
            delay(500);
            digitalWrite(SS_Selonoid, HIGH);
            delay(500);
            while(disSS > 10 || disSS < 5) {
                Ultrasonic(SS_trig, SS_echo);
                disSS = distance;
            }
        }
      
        if(abs(BumperN - BumperO) > 15) {
            Score += 30;
            last_input = 6;
            digitalWrite(SS_Selonoid, LOW);
            delay(500);
            digitalWrite(SS_Selonoid, HIGH);
            delay(500);
            while(abs(BumperN - BumperO) > 15) {
                BumperO = BumperN;
                BumperN = analogRead(Bumperpiezo);
            }
        }
      
        if(abs(SlingLN - SlingLO) > 15) {
            Score += 30;
            last_input = 7;
            while(abs(SlingLN - SlingLO) > 15) {
                SlingLO = SlingLN;
                SlingLN = analogRead(SlingSL);
            }
        }
      
        if(abs(SlingRN - SlingRO) > 15) {
            Score += 30;
            last_input = 8;
            while(abs(SlingRN - SlingRO) > 15) {
                SlingRO = SlingRN;
                SlingRN = analogRead(SlingSR);
            }
        }
      
        if(abs(OOPAN - OOPOA) > 600) {
            life--;
            while(abs(OOPAN - OOPOA) > 600) {
                OOPOA = OOPAN;
                OOPAN = analogRead(OOPA);
            }
        }
      
        if(corridorA && corridorB && corridorC) {
            Score += 100;
            corridorA = 0;
            corridorB = 0;
            corridorC = 0;
        }
      
        if(corridorD == 4) {
            Score += 100;
            corridorD = 0;
        }
      
        SlingLO = SlingLN;
        SlingRO = SlingRN;
        BumperO = BumperN;
        OOPOA = OOPAN;
      
        if((millis() % time_new) > 120000) { // Change colors every two minutes in game.
            time_new = millis();
            randRGB++;
            if(randRGB == 3) {
                randRGB = 0;
            }
        }
      
        if(life == 0) {
            Start = 0;
            if(Score > HighestScore) {
                LCDdisplay_newhighscore();
                delay(3000);
                Score = 0;
            }
              
            else {
                LCDgame_over(Score);
                delay(3000);
                Score = 0;
            }
        }
    }
}

void Ultrasonic(int Trigpin, int Echopin) {
    digitalWrite(Trigpin, LOW);
    delayMicroseconds(2);
    digitalWrite(Trigpin, HIGH);
    delayMicroseconds(10);
    digitalWrite(Trigpin, LOW);
    duration = pulseIn(Echopin, HIGH);
    distance = 0.034 * duration / 2;
}

void LCDdisplay(int life, int Score, int HighestScore) {
    if(life == 3) {
        lcd.setCursor(4, 0);
        lcd.write((byte)0);
        lcd.print(" ");
        lcd.write((byte)0);
        lcd.print(" ");
        lcd.write((byte)0);
        lcd.print(" ");
        lcd.setCursor(0, 1);
        lcd.print("Score:");
        lcd.print(Score);
    } 
      
    else if(life == 2) {
        lcd.setCursor(6, 0);
        lcd.write((byte)0);
        lcd.print(" ");
        lcd.write((byte)0);
        lcd.print(" ");
        lcd.setCursor(0, 1);
        lcd.print("Score:");
        lcd.print(Score);
    } 
      
    else if(life == 1) {
        lcd.setCursor(7, 0);
        lcd.write((byte)0);
        lcd.print(" ");
        lcd.setCursor(0, 1);
        lcd.print("Score:");
        lcd.print(Score);
    } 
      
    else {
        lcd.setCursor(1, 0);
        lcd.print("HS:");
        lcd.print(HighestScore);
        lcd.setCursor(1, 1);
        lcd.print("Pull to Start.");
    }
}

void LCDwaittime() {
    lcd.setCursor(5, 0);
    lcd.print("Wait...");
}

void LCDdisplay_newhighscore() {
    lcd.setCursor(0, 0);
    lcd.print("Congratulations!");
    lcd.setCursor(1, 1);
    lcd.print("New High Score");
}

void LCDgame_over(int Score) {
    lcd.setCursor(3, 0);
    lcd.print(" Game Over");
    lcd.setCursor(0, 1);
    lcd.print("Score:");
    lcd.print(Score);
}

void LEDs_NOGAME(int GREEN, int RED, int BLUE) {
    analogWrite(Green, GREEN);
    analogWrite(Red, RED);
    analogWrite(Blue, BLUE);
}

void LEDs_INGAME(int var) {
    switch (var) {
        case 0:
            analogWrite(Green, 255);
            analogWrite(Red, 0);
            analogWrite(Blue, 0);
            break;
        case 1:
            analogWrite(Green, 0);
            analogWrite(Red, 255);
            analogWrite(Blue, 0);
            break;
        case 2:
            analogWrite(Green, 0);
            analogWrite(Red, 0);
            analogWrite(Blue, 255);
            break;
    }
}
