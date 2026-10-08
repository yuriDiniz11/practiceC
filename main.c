#include<stdio.h>

int main(){

    float a, b, c;
    //criação do vetor com os nomes das variaveis
    char nomes[] = {'a', 'b', 'c'};

    for(int i = 0; i <= 2; i++){
        printf("Digite um valor para %c: ", nomes[i]);
    
    if(i == 0){
        scanf("%f", &a);
    }else if(i == 1){
        scanf("%f", &b);
    }else if (i == 2){
        scanf("%f", &c);
    }
}

    return 0;

}