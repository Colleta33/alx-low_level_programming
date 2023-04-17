#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <errno.h>

/**
*main - Entry point
*@argc: argument count
*@argv: argument vector
*
*Return: arguments integer
*/
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr elf_header;

if (argc != 2)
{
	fprintf(stderr, "Usage: %d\n", argv[0]);
		exit(98);

}
fd = open(argv[1], O_RDONLY);
	if (fd == -1)
{
	fprintf(stderr, "Error: %d\n", perror(int));
	exit(98);
}

if (lseek(fd, 0, SEEK_SET) == -1)
{
	fprintf(stderr, "Error: %d\n", perror(int));
	close(fd);
	exit(98);
}

if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
{
	fprintf(stderr, "Error: %d\n", perror(int));
	close(fd);
	exit(98);
}

if (elf_header.e_ident[EI_MAG0] !=
		ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] !=
		ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] !=
		ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] !=
		ELFMAG3)
{
	fprintf(stderr, "Error: Not an ELF file\n");
	close(fd);
	exit(98);
}

printf(" Magic: ");

for (int i = 0; i < EI_NIDENT; i++)
{
	printf("02x", elf_header.e_ident[i]);
}
printf("\n");

printf("  Class: ");
switch
(elf_header.e_ident[EI_CLASS])
{
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
		printf("<unknown: %d>\n", elf_header.e_ident[EI_CLASS]);
		break;
}

printf(" Data:  ");
switch
	(elf_header.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %d>\n", elf_header.e_ident[EI_DATA]);
			break;
	}

printf(" Version: %d\n", elf_header.e_ident[EI_VERSION]);

printf(" OS/ABI:      ");
switch
	(elf_header.e_ident[EI_OSABI]);
	{
		case ELFOSABI_SYSV:
			printf("UNIX-System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n ");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
