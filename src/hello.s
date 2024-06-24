.globl main
.section .note.GNU-stack
.section .data
format_string:
    .ascii "%s\n\0"
hello_string:
    .ascii "Hello GAS!\0"
.section .text
main:
    // No local variables - no stack frame needed
    // Write the first string
    movq stdout, %rdi
    movq $format_string, %rsi
    movq $hello_string, %rdx
    movq $0, %rax
    call fprintf
    // Return
    movq $0, %rax
    ret

// command: gcc hello.s -static -o hello && ./hello
