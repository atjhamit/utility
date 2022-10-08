#include <stdio.h>

double get_double(const char* message, const double min, const double max)
{
    double input;
    do
    {
        printf("%s\n", message);
        scanf("%lf", &input);
        if(input < min)
            printf("The value must be at least %lf\n", min);
        if(input > max)
            printf("The value must be at max %lf\n", max);
    } while(input < min || input > max);

    return input;
}
