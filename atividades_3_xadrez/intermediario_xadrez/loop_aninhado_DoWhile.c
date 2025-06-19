#include <stdio.h>


int main(){

    // imprime taboada do 1 ao 10 ex:  1 x 1 = 1......

    int i = 1;

    do
    {
        int j = 1;

        do
        {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        } while (j <= 10);

        i++;
        printf("\n");
        
    } while (i <= 10);
    





    return 0;
}