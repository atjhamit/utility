#include <stdio.h>
#include "double_lib.h"

int main()
{
    double meal_amount  = get_double("Enter the bill amount :\t", 0, 1000); // 1000 units max
    double tip_percent  = get_double("Enter the tip percentage :\t", 0, 100); // 100 % tip as max

    double tip          = meal_amount * tip_percent / 100;
    double total_amount = meal_amount + tip;

    printf("Tip :\t%lf\n",      tip);
    printf("Total :\t%lf\n",    total_amount);

    return 0;
}
