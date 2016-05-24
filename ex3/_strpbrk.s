
    .global __strpbrk
    .global _strpbrk

    .text

__strpbrk:
_strpbrk:

	movl	4(%esp), %eax
	ret

