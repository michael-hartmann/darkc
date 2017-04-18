#include <stdio.h>

double sum(size_t nmax)
{
    double sum = 0, buf[nmax];

    for(size_t i = 0; i < nmax; i++)
        buf[i] = 1./(1+i);

    for(size_t i = 0; i < nmax; i++)
        sum += buf[i];

    return sum;
}

int main(int argc, char *argv[])
{
    printf("%g\n", sum(100));
    printf("%g\n", sum(10000000));

    return 0;
}
