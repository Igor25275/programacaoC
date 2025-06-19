#include <stdio.h>


int main(){

    // imprime taboada do 1 ao 10 ex:  1 x 1 = 1......
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        
        printf("\n");
    }
    





    return 0;
}