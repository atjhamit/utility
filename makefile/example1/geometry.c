#include <stdio.h>
#include <math.h>

double get_double(const char* message, double min, double max);

int main()
{
    double x = get_double("enter the value of x : ", -100, 100);
    double y = get_double("enter the value of y : ", -100, 100);

    double distance = sqrt(pow(x,2) + pow(y,2));
    printf("Distance is %lf units\n", distance);

    return 0;
}
