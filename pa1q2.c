#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num, i = 0;
    srand(time(NULL));
   do{
        num = rand()%5+5;
        printf("\n%d\n", num);
    }while(++i<20);
    
}