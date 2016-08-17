#define AI1 4 //any pin
#define AI2 5 //must be PWM capable pin
#define BI1 8 //any pin
#define BI2 6 //must be PWM capable pin

void setup() 
{
pinMode(AI1, OUTPUT);
pinMode(AI2, OUTPUT);
pinMode(BI1, OUTPUT);
pinMode(BI2, OUTPUT);
}

void loop() 
{
M1(0, 25);
M2(0, 25);
delay(10000);
//M1(0, 0);
//M2(0, 0);
//delay(10000);
M1(1, 25);
M2(1, 25);
delay(10000);
//M1(1, 0);
//M2(1, 0);
//delay(10000);
}

void M1(boolean dir1, byte spd1)
{
analogWrite(AI2, spd1);
digitalWrite(AI1, dir1);
}

void M2(boolean dir2, byte spd2)
{
analogWrite(BI2, spd2);
digitalWrite(BI1, dir2);
}



