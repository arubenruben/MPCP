.text
.global CONTA_WORDS
.type CONTA_WORDS,"function"

CONTA_WORDS:

INIT:	MOV X9,#0
		MOV X11,#0

CICLO:
		LDRB W10,[X0,X11]
		CBZ W10,FIM
		ADDS X11,X11,#1
		CMP W10,#0x20
		B.NE CICLO
		ADDS X9,X9,#1

		B CICLO






FIM:	MOV X0,X9
		RET
