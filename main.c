#include<stdio.h>

int main() {

    unsigned int a;

    unsigned int result;
    
    unsigned int mult;
    
    printf("Declara a: ");
    scanf("%d", &a);
    
     printf("Declara el corrimiento: ");
    scanf("%d", &mult);

    result = a << mult;

    printf("Resultado: %d \n" , result);

}