.text
.global POS1msb
.type POS1msb,"function"


POS1msb:


INIT:	MOV X9,#63 // VETOR DE BYTES
		RBIT X10,X0 // VETOR DE DOUBLES
			
CICLO:	
		CBZ X10, FIM_ZERO
		
		ANDS X11,X10,#1
	
		CBNZ X11, FIM_OK
		
		SUBS X9,X9,#1
		
		LSR X10,X10,#1
		
		B CICLO



FIM_OK:	MOV X0,X9
		RET
		
FIM_ZERO: 
			MOV X0,#-1
			RET