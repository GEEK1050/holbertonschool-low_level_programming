global main

section .text

	program
main:
		mov rax, 1
		mov rdi, 1
		mov rsi, txt
		mov rdx, length
		syscall

		mov rax, 60
		mov rdi, 0
		syscall

section .rodata

	txt: db "Hello, Holberton", 10
	length: equ $ - txt
