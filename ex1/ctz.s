
    .globl  ctz32
    .globl  _ctz32

# value is at 8(%ebp) and held in %edx

ctz32:
_ctz32:
    pushl   %ebp
    movl    %esp, %ebp
    movl    8(%ebp), %eax
	andl	$0x1f, %eax
    popl    %ebp
    ret


    .globl  ctz64
    .globl  _ctz64

# value is at 8(%ebp) [low] and 12(%ebp) [high]

ctz64:
_ctz64:
    pushl   %ebp
    movl    %esp, %ebp
	andl	$-16, %esp
	subl	$16, %esp
    movl    8(%ebp), %eax
	orl		%eax, %eax
	jz		1f
	movl	%eax, (%esp)
	call	_ctz32
	jmp		2f
1:
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	call	_ctz32
	addl	$32, %eax

2:
	movl	%ebp, %esp
	popl	%ebp
	ret
