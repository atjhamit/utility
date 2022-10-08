#include <stdio.h>
#include <math.h>
#include "double_lib.h"

int main()
{
    double x = get_double("enter the value of x : ", -100, 100);
    double y = get_double("enter the value of y : ", -100, 100);

    double distance = sqrt(pow(x,2) + pow(y,2));
    printf("Distance is %lf unit(s)\n", distance);

    return 0;
}
