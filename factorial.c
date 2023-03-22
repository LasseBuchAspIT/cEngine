#include <stdio.h>

int main() 
{

    printf(ToFactorialRecu(5));
      return 0;
}


long ToFactorialRecu(int number)
{
    unsigned long long fact = 1;
    if(number < 0 ){
        printf("cannot do factorial on negative number");
    }
    else{
        for(int i = 0; i <= number; i++){
            fact *= i;
        }
    }
    return &fact;
}

  