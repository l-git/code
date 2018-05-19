.386

.model flat,stdcall
option casemap:none

include windows.inc 
include kernel32.inc 
includelib kernel32.lib

include user32.inc 
includelib user32.lib 


.data

szFilename db 'environ.exe'

.code


start:

invoke DeleteFile,offset szFilename

invoke ExitProcess,NULL

end start