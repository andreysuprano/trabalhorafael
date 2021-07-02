#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

int validaParImpar (int value);

int main()
{
    //variaveis para manipulacao do RA
    char string_ra[9];
    int inteiro_ra = 0;
    int parImpar = 0;
    
    printf("-------------- VALIDADOR DE RA --------------\n");
    printf("Informe o seu RA:");
    
    //leitura do valor
    scanf("%s", string_ra);
    
    //printa o valor em string
    printf("RA em string: %s", string_ra);
    
    //funcao que converte em inteiro
    inteiro_ra = atoi(string_ra);
    
    //printa em inteiro
    printf("\nRA em Inteiro: %d", inteiro_ra);
    
    //chamada funcao que valida se o numro e par ou impar
    parImpar = validaParImpar(inteiro_ra);
    
    //printa se e par ou impar
    if(parImpar == 1){
        printf("\nRA PAR");
    }else{
        printf("\nRA IMPAR");
    }
    
    return 0;
}

//calculo de imparPar pelo resto da divisao por 2
int validaParImpar (int value)
{
    int divisao = value%2;
    
    if(divisao == 0){
        return 1;
    }else{
        return 0;
    }
}

