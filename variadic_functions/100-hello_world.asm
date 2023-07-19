section .data
    hello db "Hello, World", 10 ; 10 is the ASCII code for newline

section .text
    global _start

_start:
    ; File descriptor for stdout
    mov rdi, 1
    ; Pointer to the string
    mov rsi, hello
    ; Length of the string
    mov rdx, 13
    ; System call number for write
    mov rax, 1
    ; Invoke the system call
    syscall

    ; Exit the program
    mov rax, 60 ; System call number for exit
    xor rdi, rdi ; Exit status 0
    syscall
