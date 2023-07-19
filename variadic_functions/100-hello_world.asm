section .data
message db 'Hello, World', 10
len equ $ - message

section .text
global _start

_start:
; File descriptor for stdout
mov rax, 1
; File descriptor (stdout)
mov rdi, 1
; Pointer to the message
mov rsi, message
; Length of the message
mov rdx, len
; System call
syscall
; Exit the program
mov rax, 60 ; System call number for exit
xor rdi, rdi ; Exit status 0
syscall

