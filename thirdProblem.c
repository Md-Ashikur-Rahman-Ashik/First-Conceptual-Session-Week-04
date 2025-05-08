#include <stdio.h>

float phi_value()
{
    float value = 3.1416;
    return value;
}

int main()
{
    float phiValue = phi_value();

    printf("%.4f", phiValue);

    return 0;
}