#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void f(bool b) {
    if(b)
        printf("true\n");
    else
        printf("false\n");
}

int main(void)
{
    bool *p = (bool *)malloc(sizeof(bool));

    f(*p);
    f(!*p);

    return 0;
}
