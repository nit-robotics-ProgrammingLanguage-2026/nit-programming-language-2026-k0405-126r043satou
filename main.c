#include <stdio.h>

int main(void) {
    double x;
    double r = 4.0;
    double pi = 3.141592;
    double a;

    scanf("%lf", &x);

    /* 半径は r/2。距離 x に必要な回転角度を度で求める */
    a = x * 360.0 / (pi * r);

    printf("%f\n", a);
    return 0;
    return 0;
}
