	.386
	.model flat,stdcall
	option casemap:none

include windows.inc
include user32.inc 
includelib user32.lib 
include kernel32.inc 
includelib kernel32.lib 

.data
	szCaption db 'age box',0
	szText db 'helloffff world ',0 
	szBuffer db 200 dup (?)
	szVarName db 'PATH',0
.code

start:

invoke GetEnvironmentVariable,offset szVarName,offset szBuffer,sizeof szBuffer

invoke MessageBox,NULL,offset szBuffer,offset szBuffer,MB_OK
	;mov ebx,3
	;.while ebx>0
	;	invoke MessageBox,HWND_DESKTOP,offset szText,offset szCaption,MB_OK
	;	dec ebx
	;.endw

	invoke MessageBox,HWND_DESKTOP,offset szText,offset szCaption,MB_OKCANCEL
	invoke ExitProcess,NULL
	end start