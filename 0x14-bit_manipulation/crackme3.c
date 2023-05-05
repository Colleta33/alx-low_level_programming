#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
	    printf("Usage: %s password", argv[0]);
	    return 1;
    }

    char *password = "Hol";
    if (strcmp(argv[1], password) == 0)
    {
        printf("Congratulations!");
        return 0;
    } else 
    {
        printf("Incorrect password");
        return 1;
    }
}
