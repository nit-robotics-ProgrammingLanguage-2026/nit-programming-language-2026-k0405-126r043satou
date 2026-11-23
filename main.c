#include <stdio.h>

int main(void)
{
    double x;
    double r = 4.0;
    double pi = 3.141592;
    double a;

    scanf("%lf", &x);

    /* 半径は r/2。円周 pi*r に対する回転角を求める */
    a = x * 360.0 / (pi * r);

    printf("%f\n", a);
    return 0;
}
