#include <stdio.h>

int ToFactorialIter(int number)
{
    int fact = 1;
    if(number < 0 ){
        printf("cannot do factorial on negative number");
    }
    else{
        for(int i = 1; i <= number; i++){
            fact *= i;
        }
    }
    return fact;
}

  
int main() 
{
    printf("int: %d", ToFactorialIter(5));
    return 0;
}

