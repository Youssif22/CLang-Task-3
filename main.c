#include <stdio.h>
#include <stdlib.h>

int main() {

    float number;
    printf("Please enter a number: ");
    scanf("%f", &number);
    if(number >= 0 && number <= 25){
        printf("Interval [0,25]");
    }
    else if(number >= 25 && number < 50)
    {
        printf("Interval [25,50)");
    }
    else if(number >= 50 && number < 75)
    {
        printf("Interval [50,75)");
    }
    else if(number>=75 && number < 100)
    {
        printf("Interval [75,100)");
    }
    else{
        printf("Out of Intervals");
    }


    return 0;
}
