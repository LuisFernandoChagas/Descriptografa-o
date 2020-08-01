// código para decifrar a linguagem do P

#include <stdio.h>
#include <stdlib.h>
#define N 1024
#define Z 3

int main(){
    char c[Z] = "pP";
    char linguadoP[N];
    int i, j, k;

    printf("\ndigite a frase na linguegem do p\n\n");
    gets(linguadoP);

    for(i = 0; i < N; i++){ // comando de repetição onde o i representa a posição da letra p
        for(k=0; k < Z-1; k++){ // comando de repetição em que será selecionado se as letras serão comparadas com "P"||"p"
            if(linguadoP[i] == c[k]){ // a letra da frase principal será comparada com "pP"
                j = i;
                while(j < N){ //comando de repetição em que todas as letras à direita do "i" serão passadas para a esquerda
                    linguadoP[j] = linguadoP[j+1];
                    j++;
                }
            }
        }
    }

    printf("\n");

    puts(linguadoP);

    printf("\n");

    system("pause");

    return 0;
}