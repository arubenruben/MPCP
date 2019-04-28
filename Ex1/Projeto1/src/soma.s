.text
.global SOMA_V
.type SOMA_V,"function"

SOMA_V:

INICIO: MOV X9,#0 //X9 VAI SERVIR DE REGISTO TEMPORARIO
		MOV X10,#0
		MOV X12,#0

CICLO:	CBZ X1,FIM

		SUBS X1,X1,#1

		LDRSW  X11,[X0],#4

		ADDS X10,X10,X11


		B CICLO

FIM: 	MOV X0,X10
		RET


