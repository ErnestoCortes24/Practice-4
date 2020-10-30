/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int n2gray(int n){
    return n ^ (n >> 1);
}

void printbin(int n){
    if (!n) printf("0");
    while (n) {
        if (n & 1)
            printf("1");
        else
            printf("0");

        n >>= 1;
        }
}


int main()
{
    int in = 4;
    
    for (int i = 0; i < (1<<in); ++i){
        int ans = n2gray(i);
        printf("Dec: %d, Bin: ", i);
        printbin(i);
        printf(", Gray: ");
        printbin(ans);
        printf("\n");
    }
    
    return 0;
}
