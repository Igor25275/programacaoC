#include <stdio.h>


int main(){

    // imprime taboada do 1 ao 10 ex:  1 x 1 = 1......
    int i = 1;

    while (i <= 10)
    {
        int j = 1;
        while (j <= 10)
        {
            printf("%d x %d = %d\n", i, j, i * j);
            // incrementa +1 ao j
            j++;
        }
        
        // incremente +1 ao i
        i++;
        printf("\n");
    }
    
    





    return 0;
}