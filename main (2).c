#include<stdio.h>

int main() {

    unsigned int a;

    unsigned int result;
    
    unsigned int div;
    
    printf("Declara a: ");
    scanf("%d", &a);
    
     printf("Declara el corrimiento: ");
    scanf("%d", & div);

    result = a >> div;

    printf("Resultado: %d \n" , result);

}