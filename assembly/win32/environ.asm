.386
.model flat,stdcall
option casemap:none

include windows.inc 
include kernel32.inc 
includelib kernel32.lib 

include user32.inc 
includelib user32.lib 


.data

szBuffer db 1000 dup (?)
szPath db 'PATH',0

szJava db 'java',0

.code 

start:

invoke GetEnvironmentVariable,addr szPath,addr szBuffer,sizeof szBuffer

invoke MessageBox,NULL,addr szBuffer,addr szPath,MB_OK

invoke WinExec,addr szJava,NULL


invoke ExitProcess,NULL


end start 