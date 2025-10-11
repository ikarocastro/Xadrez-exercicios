#include <stdio.h>
 
int main() {
    int i = 1;  //Variavel de incremento
   
    do {    //Entrada (1x pelo menos)
        printf("%d\n", i);  //saída
        i++;    //incremento
    } while (i <= 5);   //condição
   
    return 0;
}