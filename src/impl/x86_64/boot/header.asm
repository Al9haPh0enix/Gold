section .multiboot_header
header_start:
    ; The Multiboot specification is an open standard describing how a boot loader can load an x86 operating system kernel.
    ; magic number to use multiboot2
    dd 0xe85250d6

    ; architecture
    ; Protected mode allows system software to use features such as virtual memory, paging and safe multi-tasking designed to increase an operating system's control over application software.
    dd 0 ; protected mode i386

    ; header length
    dd header_end - header_start

    ;checksum
    dd 0x100000000 - (0xe85250d6 + 0 + (header_end - header_start))

    ; end tag
    dw 0
    dw 0
    dd 8
header_end:

