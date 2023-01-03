#include <stdio.h>
#include <math.h>

int main()
{
    float principle, time, rate, CI;

    printf("Enter principle (amount) , rate and time:");
    scanf("%f%f%f", &principle , &rate , &time);

    CI = principle * (pow((1 + rate / 100), time));

    printf("Compound Interest = %f", CI);

    return 0;
}
