; лллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл?

;                 Build this with the "Project" menu using
;                       "Console Assemble and Link"

; лллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл?

    .486                                    ; create 32 bit code
    .model flat, stdcall                    ; 32 bit memory model
    option casemap :none                    ; case sensitive
 
    include d:\masm32\include\windows.inc     ; always first
    include d:\masm32\macros\macros.asm       ; MASM support macros

  ; -----------------------------------------------------------------
  ; include files that have MASM format prototypes for function calls
  ; -----------------------------------------------------------------
    include d:\masm32\include\masm32.inc
    include d:\masm32\include\gdi32.inc
    include d:\masm32\include\user32.inc
    include d:\masm32\include\kernel32.inc

  ; ------------------------------------------------
  ; Library files that have definitions for function
  ; exports and tested reliable prebuilt code.
  ; ------------------------------------------------
    includelib d:\masm32\lib\masm32.lib
    includelib d:\masm32\lib\gdi32.lib
    includelib d:\masm32\lib\user32.lib
    includelib d:\masm32\lib\kernel32.lib

    .code                       ; Tell MASM where the code starts

; лллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл?

start:                          ; The CODE entry point to the program

    print chr$("Hey, this actually works.",13,10)
    exit

; лллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл?

end start                       ; Tell MASM where the program ends
