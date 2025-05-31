#include <stdio.h>

int main(){

   double numero_preciso = 3.141592653589793;
   long double numero_muito_preciso = 3.141592653589793238463;

   printf("Número precido (double): %.15f\n", numero_preciso);
   printf("Número muito preciso (long double) %.21Lf\n", numero_muito_preciso);



    return 0;
}