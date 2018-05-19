.386

.model flat,stdcall
option casemap:none

include windows.inc 
include kernel32.inc 
includelib kernel32.lib

include user32.inc 
includelib user32.lib 


.data

szFilename db 'dir'

lpBuffer db 100 dup (?)




.code


start:

invoke GetTempPath,sizeof lpBuffer,offset lpBuffer

invoke MessageBox,NULL,offset lpBuffer,offset lpBuffer,MB_OK


invoke CreateDirectory,offset szFilename,NULL

invoke ExitProcess,NULL

end start