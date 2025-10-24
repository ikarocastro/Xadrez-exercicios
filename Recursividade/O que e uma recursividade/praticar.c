#include <stdio.h>


void recursivo(int numero){
    if (numero > 0)     //Condição para parar a recursividade
    {
        printf("%d\n", numero);     //Imprime o valor atual de n
        recursivo(numero - 1);      //Chamada recursiva para imprimir os números de n até 1
    }
    
}

// Antes da gente usar a função dentro de main ela não e nada, a varivavei numero nao esta definida!
//precisamos definir ela dentro de main para poder usar ela.

int main() {

        int quantidade = 10; // Valor inicial e a quantidade de vezes que a recursividade vai ser executada e el vai rodar 11 vezes de 0 até 10

            printf("Contagem regressiva....\n"); 
         recursivo(quantidade); // Chama a função recursiva com o valor inicial, tem que ser do mesmo tipo da variavel quantidade ou seja (int)

    return 0;
}