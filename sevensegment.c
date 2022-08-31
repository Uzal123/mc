#include <LPC21xx.h>
unsigned int delay, count=0, Switchcount=0;
/*common cathode seven segment data for 0 to F*/
unsigned int Disp[16]={0x003F0000, 0x00060000, 0x005B0000, 0x004F0000,
0x00660000,0x006D0000, 0x007D0000, 0x00070000, 0x007F0000, 0x006F0000,
0x00770000,0x007C0000, 0x00390000, 0x005E0000, 0x00790000, 0x00710000 };
int main (void)
{
PINSEL1 = 0x00000000;
IO0DIR = 0x10FF0000;
while(1)
{
//Display values on Seven Segment
IO0SET = 0x10000000;
IO0CLR = 0x00FF0000;
IO0SET = Disp[Switchcount]; // display the values 0 to F one after the other
for(delay=0;delay<=300000;delay++);
Switchcount++;
if(Switchcount == 16) // after F go back to 0
{
Switchcount = 0;
}
}
}