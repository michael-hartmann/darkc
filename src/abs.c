#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x = atoi(argv[1]);

    printf("%d, %d\n", x, abs(x));

    return 0;
}
