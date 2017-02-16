#include <stdio.h>
#include <math.h>
#define PI 3.1415927

int main(void)
{
    double length;
    double volume;

    while(scanf("%lf", &length) != EOF)
    {
        volume = 4.0 / 3 * pow(length, 3) * PI;
        printf("%.3lf\n", volume);
    }
    return 0;
}
