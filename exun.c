#include <stdio.h>

main(){
   int numero1 = 10;
   double numero2;
   float numero3;

   printf("digite o numero 2: \n");
   scanf("%lf ", & numero2);

   printf("Digite o numero3 \n");
   scanf("%f ", & numero3);

   printf("O numero 1:%d \n", numero1);
   printf("O numero 2: %lf \n",numero2);
   printf("O numero 3: %f \n", numero3);
    return 0;
}