#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
void print_error(const char *msg) {
fprintf(stderr, "%s\n", msg);
exit(98);
}
int main(int argc, char *argv[]) {
if (argc != 2) {
print_error("Usage: elf_header elf_filename");
}
int fd = open(argv[1], O_RDONLY);
if (fd == -1) {
print_error("Failed to open file");
}
Elf64_Ehdr ehdr;
if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) {
print_error("Failed to read ELF header");
}
if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
print_error("Not an ELF file");
}
printf("ELF Header:\n");
printf(" Magic: ");
for (int i = 0; i < SELFMAG; i++) {
printf("%02x ", ehdr.e_ident[i]);
}
printf("\n");
printf(" Class: ");
switch (ehdr.e_ident[EI_CLASS]) {
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", ehdr.e_ident[EI_CLASS]);
break;
}
printf(" Data: ");
switch (ehdr.e_ident[EI_DATA]) {
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", ehdr.e_ident[EI_DATA]);
break;
}
printf(" Version: %d\n", ehdr.e_ident[EI_VERSION]);
printf(" OS/ABI: ");
switch (ehdr.e_ident[EI_OSABI]) {
case ELFOSABI_NONE:
printf("UNIX System V ABI\n");
break;
case ELFOSABI_SYSV:
printf("Alias for UNIX System V ABI\n");
break;
case ELFOSABI_HPUX:
printf("HP-UX ABI\n");
break;
case ELFOSABI_NETBSD:
printf("NetBSD ABI\n");
break;
case ELFOSABI_LINUX:
printf("Linux ABI\n");
break;
case ELFOSABI_SOLARIS:
printf("Solaris ABI\n");
break;
case ELFOSABI_AIX:
printf("AIX ABI\n");
break;
case ELFOSABI_IRIX:
printf("IRIX ABI\n");
break;
case ELFOSABI_FREEBSD:
printf("FreeBSD ABI\n");
break;
case ELFOSABI_TRU64
