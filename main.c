#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    FILE *Makefile;
    fscanf(stdin,"%d%d", &x, &y);
    fprintf(stdout,"%d%d", x, y);

    return 0;
}
