#include <stdio.h>
#include "myfunc.h"

int main()
{
    double a,b,c;
    printf("enter a\n");
    if (scanf("%lf",&a) != 1) return 0;
    printf("enter b\n");
    if (scanf("%lf",&b) != 1) return 0;
    printf("enter c\n");
    if (scanf("%lf",&c) != 1) return 0;
    myfunc(a,b,c);
    return 0;
}

