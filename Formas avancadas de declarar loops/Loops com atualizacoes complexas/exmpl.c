#include <stdio.h>

int main () {
    
    //Operador ternario para teste
    
    for (int i = 0;
            i < 100;
            i += (i % 2 == 0) ? 1 : 2)
    {   // i = recebe , o resto da divisão entre i e 2, se for 0, recebe 1, se for 1, recebe 2
        printf("%d\n", i);
    }
     
     return 0;

}