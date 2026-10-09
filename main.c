#include<stdio.h>

int main(){

    int n1, n2, n3, n4, maior;   

    printf("Digite 4 valores: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    maior = n1;    

    maior = (n2 > maior) ? n2 : maior;
    maior = (n3 > maior) ? n3 : maior;
    maior = (n4 > maior) ? n4 : maior;
    
    printf("O maior é %d.\n", maior);

    return 0;

}