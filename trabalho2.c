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
    

    scanf("%s", string_ra);
    inteiro_ra = atoi(string_ra);

    printf("RA DIGITADO: %s \n", string_ra);
    
    int vetorDeNomes = 0;
    
    for(i = 0; i < 9; i++){
        vetorDeNomes = vetorDeNomes + string_ra[i];
    }
    
    char nome[vetorDeNomes];
    
    printf("INFORME SEU NOME");
    scanf("%s", nome);
    
    char telefone[8];    
    printf("INFORME SEU TELEFONE (SEM DDD)");
    scanf("%s", telefone);
    
    int telefone_int= atoi(telefone);
    int boolTelefone = validaTelefone(telefone_int);
    
    while (boolTelefone == 0)
    {
        printf("Telefone Invalido informe novamente:"); 
        scanf("%s", telefone);
        telefone_int= atoi(telefone);
        boolTelefone = validaTelefone(telefone_int);
    }  
    

    
    return 0;
}

int validaTelefone(int telefone){
    if(telefone > 900000000 && telefone < 999999999 ){
        return 1;
    }else{
        return 0;
    }
}
