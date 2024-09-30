# Compiler
CC = gcc
GDB = gdb
ASM = nasm
LD = ld

# Disable ASLR and set flavor of gdb to intel
GDBFLAGS = -ex "set disable-randomization off" -ex "set disassembly-flavor intel"

# Compiler flags
CFLAGS = -Wall -Wextra -g -O0 -fno-stack-protector -no-pie -z execstack -Wno-format-security -Wno-implicit-function-declaration -Wno-unused-result -Wno-unused-parameter

# Targets
TARGETS = crackme pwnme shellcode

# Default target
all: $(TARGETS)

# Build crackme
crackme: crackme.c
	$(CC) $(CFLAGS) -o crackme crackme.c

# Build pwnme
pwnme: pwnme.c
	$(CC) $(CFLAGS) -o pwnme pwnme.c

shellcode: shellcode.asm
	$(ASM) -f elf64 -o shellcode.o shellcode.asm
	$(LD) -o shellcode shellcode.o

debug:
	$(GDB) $(GDBFLAGS) ./pwnme

# Clean up
clean:
	rm -f $(TARGETS)

.PHONY: all clean debug