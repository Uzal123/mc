
 AREA Program,CODE,READONLY
ENTRY
 LDR R0,MEMORY;
 LDR R1,[R0];
 MOV R4,#32;
ROTATE RORS R1,#1;
 BCS ONES;
 ADD R3,R3,#1;
 B NEXT;
ONES ADD R2,R2,#1;
NEXT ADD R4,R4,#-1;
 CMP R4,#0;
 BNE ROTATE;
 ADD R0,R0,#04;
 STRB R2,[R0];
 ADD R0,R0,#1;
 STRB R3,[R0];
HERE B HERE
MEMORY DCD 0X40000000;
 END