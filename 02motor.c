#include<lpc214x.h>
unsigned int j=0;
int main()
{
IO0DIR= 0X00000900;
IO0SET= 0X00000100; //P0.8 should always high.
while(1)
{
//clock_wise
IO0CLR = 0x00000900; //stop motor and also turn off relay
for(j=0;j<10000;j++); //small delay to allow motor to turn off
IO0SET = 0X00000900; //Selecting the P0.11 line for clockwise and turn on motor
for(j=0;j<400000;j++); //delay
//anti_clock_wise
IO0CLR = 0X00000900; //stop motor and also turn off relay
for(j=0;j<10000;j++); //small delay to allow motor to turn off
IO0SET = 0X00000100; //not selecting the P0.11 line for Anti clockwise
for(j=0;j<400000;j++); //delay
} //End of while(1)
}