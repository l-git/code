.386
.model flat, stdcall
option casemap :none
include windows.inc
include kernel32.inc
include masm32.inc
includelib kernel32.lib
includelib masm32.lib
.data
 HelloWorld db "Hello World!",0dh,0ah,0
 n db 31h
.code
start:
 invoke StdOut, addr HelloWorld
 invoke StdOut, addr n
 invoke ExitProcess, 0
end start 