section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    sub rsp, 8     ; Align stack

    push rdi       ; Save callee-saved registers
    push rsi
    push rdx
    push rcx
    push r8
    push r9
    push r10
    push r11

    lea rdi, [hello]    ; Load address of hello string
    lea rsi, [format]   ; Load address of format string
    xor rax, rax        ; Clear rax register
    call printf        ; Call printf function

    lea rdi, [newline]  ; Load address of newline string
    xor rax, rax        ; Clear rax register
    call printf        ; Call printf function

    pop r11        ; Restore callee-saved registers
    pop r10
    pop r9
    pop r8
    pop rcx
    pop rdx
    pop rsi
    pop rdi

    add rsp, 8     ; Restore stack alignment
    xor eax, eax   ; Return 0 from main
    ret
