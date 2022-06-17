#include <stdio.h>
#include <math.h>

#define LIMITE 30

int main(){
    float peso, altura, imc;

    printf("\n qual seu peso e altura?");
    scanf("%f%f", &peso, &altura);

    imc = peso/(altura*altura);
    
    printf("\n Seu imc é %1f", imc);
    if(imc <= LIMITE) printf("\n você não está obeso!");
    else              printf("\n Você está obeso");
}