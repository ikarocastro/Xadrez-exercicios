#include <stdio.h>
 
int main() {
    int i = 1;      // variável de incremento 
   
    while (i <= 5) {    //Condição
        printf("%d\n", i);  //Saída 
        i++; //Incremento
    }
   
    return 0;
}

//Aqui, a variável i é inicializada com o valor 1. O loop while verifica a condição i <= 5. Enquanto essa condição for verdadeira, o loop continuará sendo executado. Dentro do loop, o valor de i é impresso e, em seguida, incrementado em 1. Quando i se torna 6, a condição i <= 5 se torna falsa, e o loop termina.