//Para ilustrar o conceito de recursividade, veja um exemplo simples de uma função recursiva em C que simula o comportamento de um loop. Considere o código a seguir, que usa recursividade para imprimir números de n até 1.

#include <stdio.h>
 
// Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) {
    if (n > 0) {
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1 // Ou seja se N fosse = 10 ele (iria imprimir 10 9 8 7 6 5 4 3 2 1) por que 10 e maior que 0 ai usa o if e chama a si mesma com 9 e assim por diante por que ta definido como (n - 1)
    }
}
 
int main() {
    int numero = 5; // Valor inicial
    printf("Contagem regressiva: "); 
    recursiveLoop(numero); // Chama a função recursiva com o valor inicial
    return 0;
}

