#include <stdio.h>

void recursivo(int numero){
    if (numero > 0)     //Condição para parar a recursividade
    {
        printf("%d\n", numero);     //Imprime o valor atual de n
        recursivo(numero - 1);      //Chamada recursiva para imprimir os números de n até 1
    }
    // se invertermos colocando o printf depois da chamada recursiva, a contagem sera crescente
}

int main() {
        int quantidade = 10; // Valor inicial e a quantidade de vezes que a recursividade vai ser execut

            printf("Contagem regressiva....\n"); 
         recursivo(quantidade); // Chama a função recursiva com o valor inicial, tem que ser do mesmo tipo da variavel quantidade ou seja (int)
    return 0;
}