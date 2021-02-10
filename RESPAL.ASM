; Restoring the pallete

cr	equ	0dh
lf	equ	0ah


org 100h
jmp     Begin
Msg     db      'Your pallete should be restored now',cr,lf,'Written by Dmitry Gerasimuk',cr,lf,'$'
Begin:

MOV AH, 12h
MOV BL, 31h
MOV AL, 00h
INT 10h

MOV AH, 00h
MOV AL, 03h
INT 10h

     mov AX, 1007h              ; Get register for color}
     Mov BL,7 
     Int 10h
     Xor BL, BL
     XChg BH, BL               ;  {Put register in BL}
     Mov AX, 1010h             ;  {Set RGB for individual color}
     Mov DH, 200
     Mov CH, 0
     Mov CL, 11
     Int 10h

mov dx, Msg
        mov ah,9
        int 21h

        mov ax, 4c00h
        int 21h
