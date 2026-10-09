#include<stdio.h>

int main(){

    int n1, n2, n3, maior;   

    printf("Digite 3 valores: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    maior = n1;    

    if(n1 >= n2 && n1 >= n3){
        maior = n1;
        printf("O maior é %d.\n", n1);
    }else if(n2 >= n3 && n2 >= n1){
        maior = n2;
        printf("O maior é %d.\n", n2);
    }else if(n3 >= n1 && n3 >= n2){
        maior = n3;
        printf("O maior é %d.\n", n3);
    }else{
        printf("Valor inválido.\n");
    }

    return 0;

}