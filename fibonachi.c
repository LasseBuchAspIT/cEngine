#include <stdio.h>

long FibIter(int number)
{  
    long current = 1;
    long last = 0;
    long temp;
    for (int i = 1; i < number; i++)
    {
        printf("number: %d    ", current);
        temp = current;
        current += last;
        last = temp;
    }

    return current;
}

int main(){


    printf("the nth fib is %d", FibIter(8));
    return 0;
}
