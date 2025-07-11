#include <stdio.h>

int main(){
    int a = 10, b, x = 5;

    for(int c = 1;c <= a; c++)
    {
        if(c <= 5)
        {
        for(b = 1;b <= c;b++)
        {
            printf(" ");
        }    
        }else
        {
        for(b = 1;b < x; b++)
        {
            printf(" ");
        }
        x--;
        }

        printf("#");
        printf("\n");
    }
}
