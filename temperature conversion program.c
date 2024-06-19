#include<stdio.h>
#include<ctype.h>

int main(){

    char unit;
    float temp;

    printf("is the temperature in (C) or (F)?: \n ");
    scanf("%c",&unit);

    unit = toupper(unit); //toupper makes ur lower case chars upper

    if(unit == 'C'){
        printf("Enter ur temp in celcius: \n");
        scanf("%f",&temp);
        temp = (temp*9/5)+32;
        printf("the temperature in fahrenheit is: %0.1f",temp);
    }
    else if(unit == 'F'){
        printf("Enter ur temp in fahrenheit: \n");
        scanf("%f",&temp);
        temp = ((temp-32)+5)/9;
        printf("the temperature in celcius is: %0.1f",temp);
    }
    else{printf("%c is not a valid unit of measurement\n",unit);}

    return 0;

}