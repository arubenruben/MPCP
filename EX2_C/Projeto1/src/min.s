.text
.global MAX_V
.type MAX_V,"function"

MAX_V:

INICIO: MOV W9,#-999 //X9 VAI SERVIR DE REGISTO TEMPORARIO

CICLO:	CBZ X1,FIM

		SUBS X1,X1,#1

        LDRSH  W11,[X0],#2

        CMP W11,W9
        B.LT CICLO

        MOV X9,X11

		B CICLO

FIM: 	MOV X0,X9
		RET


