section .text
global hsvmhr
hsvmhr:
	push	ebp  ;start
	mov	ebp, esp
.L5:
	mov	eax, [ebp+8]
	mov	eax, [eax]
	mov	edx, [ebp+12]
	mov	edx, [edx]
	movzx eax, al
	movzx edx, dl
	sub	eax, edx ;eax=eax-edx
	je	.L2 ;if  the new eax=o(same as eax=edx) go to L2 
	jmp	.L3 ;go to L3
.L2:
	test dl, dl ;if dl != 0 
	jne	.L4 ;
	xor	eax, eax ; to delet the eax reg value
	jmp	.L3 ;go to L3
.L4:
	add	DWORD [ebp+8], 1
	add	DWORD [ebp+12], 1
	jmp	.L5
.L3:
	pop	ebp ;end
	ret
