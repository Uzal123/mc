	AREA SUM, CODE, READONLY
ENTRY
	LDR R0, NUM;
	MOV R1, R0;
	MOV R2, #1;
	CMP R1, #0;
	BEQ STORE;
	MOV R2, R1;
NEXT ADD R1, R1, #-1;
	CMP R1, #0;
	BEQ STORE
	MUL R3, R1, R2;
	MOV R2, R3;
	B NEXT

STORE LDR R0, RES;
	STR R2, [R0];
	
	
B1 B B1
NUM DCW 3
RES DCD 0x40000000
	END