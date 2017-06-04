/*Layer Stacking*/
//FOR ANODE
int clock_1 = 1; //IC Pin 11
int latch_1 = 2; //IC Pin 12
int data_1 = 3; //IC Pin 14
//FOR CATHODE
int clock_2 = 8; //IC Pin 11
int latch_2 = 9; //IC Pin 12
int data_2 = 10; //IC Pin 14


byte gnd[]={
B10000, B01000, B00100, B00010, B00001, B10001, B01001, B00101, B00011, B10011, B01011, B00111, B10111, B01111, B11111,
B01111, B10111, B00111, B010111, B10011, B00011,B00101, B01001, B10001, B00001, B00010, B00100, B01000, B10000, B00000
};

int count = sizeof(gnd) / 2;

void setup() {
pinMode(latch_1, OUTPUT);
pinMode(clock_1, OUTPUT);
pinMode(data_1, OUTPUT);
pinMode(latch_2, OUTPUT);
pinMode(clock_2, OUTPUT);
pinMode(data_2, OUTPUT);
}

int i=0;

void loop() {
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, B1);
shiftOut(data_1, clock_1, MSBFIRST, B11111111);
shiftOut(data_1, clock_1, MSBFIRST, B11111111);
shiftOut(data_1, clock_1, MSBFIRST, B11111111);
shiftOut(data_2, clock_2, MSBFIRST, gnd[i]);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delay(500);
i++;
if (i>=count)
i=0;
}
