#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int c;
    char *pch;

    if ( argc < 3 ) {
        fprintf(stderr, "Usage: %s SET1 SET2\n", argv[0]);
        exit(-1);
    }

    while ((c = getchar()) != EOF) {
        pch = strchr(argv[1], c);
        if ( pch != NULL ) {
            c = argv[2][(int)(pch-argv[1])];
        }
        putchar(c);
    }

}