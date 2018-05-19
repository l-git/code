.386
.model flat,stdcall
option casemap:none

include windows.inc 
include kernel32.inc 
include user32.inc 

includelib kernel32.lib
includelib user32.lib 

.data

s1 db 'hello world',0



.data?
;d datastructure <>

.const


.code

TestProc proc 
	local @loc1:dword,@loc2:word
	local @loc3:byte
	mov eax,@loc1
	mov ax,@loc2
	mov al,@loc3
	
	invoke MessageBox,NULL,offset s1,offset s1,MB_OK
	ret
TestProc endp




start:

invoke TestProc


invoke MessageBox,NULL,offset s1,offset s1,MB_YESNOCANCEL
		.if eax>0
			invoke MessageBox,NULL,eax,eax,MB_OK
		.endif
		
		
		
mov eax,3 
.while eax>0
	invoke MessageBox,NULL,offset s1,offset s1,MB_OK
	dec eax
.endw
		
		
invoke ExitProcess,NULL 

	


end start