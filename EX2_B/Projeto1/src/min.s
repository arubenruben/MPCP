.text
.global MIN_V
.type MIN_V,"function"

MIN_V:

INICIO: MOV X9,#999 //X9 VAI SERVIR DE REGISTO TEMPORARIO

CICLO:	CBZ X1,FIM

		SUBS X1,X1,#1

        LDR  X11,[X0],#8

        CMP X11,X9
        B.GT CICLO

        MOV X9,X11

		B CICLO

FIM: 	MOV X0,X9
		RET


