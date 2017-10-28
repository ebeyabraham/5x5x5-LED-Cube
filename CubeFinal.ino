//FOR ANODE
int clock_1 = 1; //IC Pin 11
int latch_1 = 2; //IC Pin 12
int data_1 = 3; //IC Pin 14
//FOR CATHODE
int clock_2 = 8; //IC Pin 11
int latch_2 = 9; //IC Pin 12
int data_2 = 10; //IC Pin 14

void setup() 
{
pinMode(latch_1, OUTPUT);
pinMode(clock_1, OUTPUT);
pinMode(data_1, OUTPUT);
pinMode(latch_2, OUTPUT);
pinMode(clock_2, OUTPUT);
pinMode(data_2, OUTPUT);
}

void RITU()                                                                        //RITU 2016 
{
byte shift_1[]=
{
B01010010, B10001110, B10000100, B01001100,
B01011111, B01001110, B10001110, B01001110
};

byte shift_2[]=
{
B00111001, B00010000, B00010000, B01001010,
B10010000, B00101001, B00010000, B00111001
};

byte shift_3[]=
{
B11101001, B11100010, B11110010, B00101001,
B11100100, B11100101, B01000011, B11100001
};

byte shift_4[]= 
{
B00000000, B00000000, B00000001, B00000001,
B00000000, B00000000, B00000000, B00000000
};

byte gnd[]=
{
B00000001, B00000010, B00000100, B00001000, B00010000, 
B00000001, B00000010, B00000100, B00001000, B00010000,
B00000001, B00000010, B00000100, B00001000, B00010000,
B00000001, B00000010, B00000100, B00001000, B00010000,
B00000001, B00000010, B00000100, B00001000, B00010000,
B00000001, B00000010, B00000100, B00001000, B00010000,
B00000001, B00000010, B00000100, B00001000, B00010000,
B00000001, B00000010, B00000100, B00001000, B00010000
};



int i=0;
int count=sizeof(gnd);
for(int j=0;j<3;)
{
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4[i/5]);
shiftOut(data_1, clock_1, MSBFIRST, shift_3[i/5]);
shiftOut(data_1, clock_1, MSBFIRST, shift_2[i/5]);
shiftOut(data_1, clock_1, MSBFIRST, shift_1[i/5]);
shiftOut(data_2, clock_2, MSBFIRST, gnd[i]);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delay(500);
i++;
if (i>=count)
{i=0;
j++;
}
}
}

void hollowCube()                                                           //HOLLOW CUBE
{
byte shift_4[][5]={{B00000000},
                 {B00000000,B00000000,B00000000},
                 {B00000001,B00000001,B00000001,B00000001,B00000001}
                 };
byte shift_3[][5]={{B00000000},
                  { B00000111,B00000101,B00000111 },
                  {B11111000,B00010000,B00010000,B00010000,B11111000}
                };
byte shift_2[][5]={{B00010000},
                  {B00101001,B0000001,B00101001},
                  {B11000110,B0000000,B0000000,B0000000,B11000110}
                };
byte shift_1[][5]={{B00000000},
                  {B11000000,B01000000,B11000000},
                  {B00111111,B00010001,B00010001,B00010001,B00111111}
                };

byte gnd[][5]={ {B00000100},
                {B00000010,B00000100,B00001000},
                {B00000001,B00000010,B00000100,B00001000,B00010000}
           };
           
for(int a=0; a<=10; a++)
{
for(int i=0;i<4;i++)
{
if(i==0)
{
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4[i][0]);
shiftOut(data_1, clock_1, MSBFIRST, shift_3[i][0]);
shiftOut(data_1, clock_1, MSBFIRST, shift_2[i][0]);
shiftOut(data_1, clock_1, MSBFIRST, shift_1[i][0]);
shiftOut(data_2, clock_2, MSBFIRST, gnd[i][0]);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delay(300);
}
else if(i==1)
{
  for(int k=0;k<50;k++)
  {
  for(int j=0;j<3;j++)
  {
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4[i][j]);
shiftOut(data_1, clock_1, MSBFIRST, shift_3[i][j]);
shiftOut(data_1, clock_1, MSBFIRST, shift_2[i][j]);
shiftOut(data_1, clock_1, MSBFIRST, shift_1[i][j]);
shiftOut(data_2, clock_2, MSBFIRST, gnd[i][j]);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delayMicroseconds(3000);
  }
  }
}
else if(i==2)
{
  for(int k=0;k<50;k++)
  {
  for(int j=0;j<5;j++)
  {
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4[i][j]);
shiftOut(data_1, clock_1, MSBFIRST, shift_3[i][j]);
shiftOut(data_1, clock_1, MSBFIRST, shift_2[i][j]);
shiftOut(data_1, clock_1, MSBFIRST, shift_1[i][j]);
shiftOut(data_2, clock_2, MSBFIRST, gnd[i][j]);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delayMicroseconds(3000);
  }
  }
}
}
}
}

void lblDiagonally()                                                //LINE BY LINE DIAGONAL LIT UP
{
byte shift_4[]={B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001};
byte shift_3[]={B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001000,B00001100,B00001110,B00001111,B00001111,B00001111,B00001111,B00011111,B00111111,B01111111,B11111111};
byte shift_2[]={B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,B00000011,B00000011,B00000011,B00000011,B00000111,B00001111,B00011111,B00111111,B01111111,B01111111,B01111111,B01111111,B01111111,B01111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111};
byte shift_1[]={B00000001,B00000011,B00000111,B00001111,B00011111,B00011111,B00011111,B10011111,B11011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111};

byte gnd[]={
B00000001,
B00000011,
B00000111,
B00001111,
B00011111,
};
for(int j=0;j<=10;j++)
{
for(int i=0;i<135;i++)
{
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4[i/5]);
shiftOut(data_1, clock_1, MSBFIRST, shift_3[i/5]);
shiftOut(data_1, clock_1, MSBFIRST, shift_2[i/5]);
shiftOut(data_1, clock_1, MSBFIRST, shift_1[i/5]);
shiftOut(data_2, clock_2, MSBFIRST, gnd[i/27]);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delay(10);
}
}
}

void H_Layers()                                                         //HORIZONTAL LAYERS 
{
byte shift_4=B11111111;
byte shift_3=B11111111;
byte shift_2=B11111111;
byte shift_1=B11111111;

byte gnd[]={
B00000001,
B00000010,
B00000100,
B00001000,
B00010000,
B00000000
};

int i=0;
int count=sizeof(gnd);
for(int j=0;j<5;)
{
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4);
shiftOut(data_1, clock_1, MSBFIRST, shift_3);
shiftOut(data_1, clock_1, MSBFIRST, shift_2);
shiftOut(data_1, clock_1, MSBFIRST, shift_1);
shiftOut(data_2, clock_2, MSBFIRST, gnd[i]);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delay(300);
i++;
if (i>=count)
{i=0;
j++;
}
}
}
void diagonal()                                                                   //DIAGONAL LAYERS
{
byte shift_1[]=
{
B00000001, B00100010, B01000100, B10001000, B00010000,
B00000000, B00000000, B00000000, B00000000
};

byte shift_2[]=
{
B00000000, B00000000, B00000100, B10001000, B00010001,
B00100010, B01000000, B00000000, B00000000
};

byte shift_3[]=
{
B00000000, B00000000, B00000000, B00000000, B00010001,
B00100010, B01000100, B10001000, B00000000
};

byte shift_4[]=
{
B0, B0, B0, B0, B0,
B0, B0, B0, B1
};

byte gnd= B00011111;

int i=0;

for(int j=0;j<15;) 
{
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_3[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_2[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_1[i]);
shiftOut(data_2, clock_2, MSBFIRST, gnd);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delay(100);
i++;
if (i>=9)
{i=0;
j++;
}
}
}

void s_cube()                                                               //SOLID CUBE
{
byte shift_1[]=
{
B00000000, B11000000, B11111111
};

byte shift_2[]=
{
B00010000, B00111001, B11111111
};

byte shift_3[]=
{
B00000000,B00000111, B11111111
};

byte shift_4[]=
{
B00000000, B00000000, B11111111
};

byte gnd[]={ B00000100, B00001110, B00011111
};

int i=0;

for(int j=0;j<10;) 
{
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_3[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_2[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_1[i]);
shiftOut(data_2, clock_2, MSBFIRST, gnd[i]);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delay(500);
i++;
if (i>=3)
{i=0;
j++;}
}
}

void rotatingPlane()                                                                            //ROTATING PLANE
{
byte shift_4[][5]={{B00000001},
                 {B00000000,B00000000,B00000000,B00000000,B00000001},
                 {B00000000},
                 {B00000001,B00000000,B00000000,B00000000,B00000000}
                };
byte shift_3[][5]={{B11111111},
                  {B00010000,B00100001,B01000010,B10000100,B00001000},
                  {B01000010},
                  {B00001000,B10000100,B01000010,B00100001,B00010000}
                };
byte shift_2[][5]={{B11111111},
                  {B10000100,B00001000,B00010000,B00100001,B01000010},
                  {B00010000},
                  {B01000010,B00100001,B00010000,B00001000,B10000100}
                };
byte shift_1[][5]={{B11111111},
                  {B00100001,B01000010,B10000100,B00001000,B00010000},
                  {B10000100},
                  {B00010000,B00001000,B10000100,B01000010,B00100001}
                };

byte gnd[][5]={ {B00000100},
                  {B00000001,B00000010,B00000100,B00001000,B00010000},
                  {B00011111},
                  {B00000001,B00000010,B00000100,B00001000,B00010000}
                };

for(int a=0; a<10;a++)               
{
for(int i=0;i<4;i++)
{
if(i==0||i==2)
{
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4[i][0]);
shiftOut(data_1, clock_1, MSBFIRST, shift_3[i][0]);
shiftOut(data_1, clock_1, MSBFIRST, shift_2[i][0]);
shiftOut(data_1, clock_1, MSBFIRST, shift_1[i][0]);
shiftOut(data_2, clock_2, MSBFIRST, gnd[i][0]);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delay(300);
}
else
{
  for(int k=0;k<10;k++)
  {
  for(int j=0;j<5;j++)
  {
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4[i][j]);
shiftOut(data_1, clock_1, MSBFIRST, shift_3[i][j]);
shiftOut(data_1, clock_1, MSBFIRST, shift_2[i][j]);
shiftOut(data_1, clock_1, MSBFIRST, shift_1[i][j]);
shiftOut(data_2, clock_2, MSBFIRST, gnd[i][j]);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delayMicroseconds(3000);
  }
  }
}
}
}
}


void spiral()                                                         //SPIRAL LIT UP
{
byte shift_1[]=
{
B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B10000000,
B11000000, B11100000, B11100000, B11100000,
B11100000, B11100000, B11100000, B11100000,
B11100000, B11100000, B11100000, B11100000,
B11110000, B11111000, B11111100, B11111110,
B11111111
};
byte shift_2[]=
{
B00010000, B00011000, B00011000, B00011000,
B00011000, B00111000, B00111001, B00111001,
B00111001, B00111001, B00111101, B10111101,
B10111101, B10111101, B10111101, B10111101,
B10111101, B10111101, B11111101, B11111111, 
B11111111, B11111111, B11111111, B11111111,
B11111111
};

byte shift_3[]=
{
B00000000, B00000000, B00000001, B00000011,
B00000111, B00000111, B00000111, B00000111, 
B00000111, B00000111, B00000111, B00000111, 
B00010111, B00110111, B01110111, B11110111,
B11110111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, 
B11111111
};
byte shift_4[]=
{
B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000,
B00000001, B00000001, B00000001, B00000001,
B00000001, B00000001, B00000001, B00000001,
B00000001 
};
byte gnd= B00011111;

int i=0;
for(int j=0;j<10;)
{
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_3[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_2[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_1[i]);
shiftOut(data_2, clock_2, MSBFIRST, gnd);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delay(100);
i++;
if (i>=25)
{i=0;
j++;}
}
}

void rotatingSidePlane()                                                      //ROTATING SIDE PLANE
{
byte shift_4[]={B00000000,B00000001,B00000001,B00000000};
byte shift_3[]={B00000000,B00001000,B11110000,B00010000};
byte shift_2[]={B00000000,B01000010,B00000000,B10000100};
byte shift_1[]={B00011111,B00010000,B00000000,B00100001};

byte gnd=B00011111;
int i=0;
for(int j=0; j<=10;)
{
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_3[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_2[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_1[i]);
shiftOut(data_2, clock_2, MSBFIRST, gnd);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delay(100);
i++;
if (i==5)
{i=0;
j++;}
} 
}

void diagonalLitUp()                                                              //DIAGONAL LIT UP 
{
byte shift_1[]=
{
B00000001, B00100011, B01100111, B11101111, B11111111,
B10111111, B11111111, B11111111, B11111111
};

byte shift_2[]=
{
B00000000, B00000000, B00000100, B10001100, B10011101,
B10111111, B11111111, B11111111, B11111111
};

byte shift_3[]=
{
B00000000, B00000000, B00000000, B00000000, B00010001,
B00110011, B01110111, B11111111, B11111111
};

byte shift_4[]=
{
B0, B0, B0, B0, B0,
B0, B0, B0, B1
};

byte gnd= B00011111;
int i=0;
for(int j=0; j<10;)
{
digitalWrite(latch_1, LOW);
digitalWrite(latch_2, LOW);
shiftOut(data_1, clock_1, MSBFIRST, shift_4[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_3[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_2[i]);
shiftOut(data_1, clock_1, MSBFIRST, shift_1[i]);
shiftOut(data_2, clock_2, MSBFIRST, gnd);
digitalWrite(latch_1, HIGH);
digitalWrite(latch_2, HIGH);
delay(100);
i++;
if (i>=9)
{i=0;
j++;}
}
}

void stack()
{
byte gnd[]={
B10000,
B01000, 
B00100, 
B00010, 
B00001, 
B10001, 
B01001, 
B00101,
B00011,
B10011, 
B01011, 
B00111, 
B10111, 
B01111, 
B11111,
B00000,
B00001, 
B00010, 
B00100, 
B01000, 
B10000, 
B10001,
B10010,
B10100,
B11000,
B11001,
B11010,
B11100,
B11101,
B11110,
B11111
};


int count = sizeof(gnd);
int i=0;

for(int j=0;j<5;) {
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
{i=0;
j++;}
}
}

void loop()
{
RITU();
H_Layers();
diagonal();
s_cube();
rotatingPlane();
stack();
lblDiagonally();
hollowCube();
spiral();
rotatingSidePlane();
diagonalLitUp();
}