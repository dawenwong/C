/*
Write a program that asks the user to enter the number of miles traveled and the number of gallons of 
gasoline consumed.It should then calculate and display the miles-per-gallon value,showing one place
to the right of the decimal.Next,using the fact that one gallon is about 3.785 liters and one mile
is about 1.609 kilometers,it should convert the mile-per-gallon value to a liters-per-100km value.,
the usual European way expressing fuel consumption,and display the result,showing one place to 
the right of the decimal.Note that the U.S. scheme measures the distance traveled per amount of fuel
(higher is better),whereas the European scheme measures the amount of fuel per distance(lower is better).
Use symbolic constants (using canst or #define) for the two conversion factors.
*/
#include<stdio.h>
#define ONE_GALLONS_TO_LITER 3.78
#define ONE_MILE_TO_KM 1.609
int main(int argc, char const *argv[])
{
    const double MILES = 3.78;
    double mileages;
    double gasoline;

    printf("Enter the mileage and the amount of gasoline consumed.\n");
    scanf("%lf %lf",&mileages,&gasoline);
    printf("Consumed one gallon of gasoline can drive %.1lf miles\n",mileages/gasoline);
    printf("Translate in Km/L: %.1lf\n",(ONE_MILE_TO_KM*mileages)/(ONE_GALLONS_TO_LITER*gasoline));
    return 0;
}
