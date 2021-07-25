#include <stdio.h>

double add(double a, double b)
{
    return a + b;
}
int main()
{
    double result = add(0.1, 0.7);
    printf("%f", result);

    return 0;
}
