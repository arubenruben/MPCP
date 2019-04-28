.text
.global INTRV_V
.type INTRV_V,"function"

INTRV_V:

INICIO: MOV W9,#0 //X9 VAI SERVIR DE REGISTO TEMPORARIO

CICLO:	CBZ X3,FIM

		SUBS X3,X3,#1

        LDRSW  X11,[X0],#4

        CMP X11,X1
        B.LT CICLO
		CMP X11,X2
		B.GT CICLO

        ADDS X9,X9,#1

		B CICLO

FIM: 	MOV X0,X9
		RET


