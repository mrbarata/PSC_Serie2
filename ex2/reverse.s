
    .globl  _reverse
    .globl  reverse

# return the argument
reverse:
_reverse:
    movl    4(%esp), %eax
    ret



