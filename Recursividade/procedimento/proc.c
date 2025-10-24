// O que é procedimento?

//um bloco de código que realiza uma tarefa específica e que pode ser chamado em outras partes do programa para executar o mesmo código mais de uma vez.

//Uteis para organizar e simplicar programas!



                    //======= EXEMPLO DE PROCEDIMENTO  ========

#include <stdio.h>
 
// Definição de procedimento para imprimir uma mensagem
void imprimirMensagem() {               //Chamamos nosso procedimento de void pois ele não te tipo de retorno
    printf("Olá, mundo!\n");    // aqui procedimento imprime uma mensagem
}
 
int main() {            // Aqui está nossa função principal
    // Chamada do procedimento
    imprimirMensagem();  //nesse caso chamamos nosso procedimento para imprimir uma mensagem no console     
    return 0;
}

// Se colocarmos nosso procedimento dentro de um loop while, ele será executado repetidamente.