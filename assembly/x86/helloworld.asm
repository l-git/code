stack	segment stack	
	db 100 dup(?)
stack ends
	
data segment
	szHello db	'11Hello,world','$'
data ends;

code segment
	assume cs:code,ds:data,ss:stack
start:
	
	mov ax,data
	mov ds,ax
	
	mov ah,9
	mov dx,offset szHello
	int 21h
	
	;mov ah,4ch
	;int 21h
	


code ends
	end start