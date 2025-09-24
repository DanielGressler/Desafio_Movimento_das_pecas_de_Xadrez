#include <stdio.h>

int main (){
   

printf("torre se move!\n");
printf("\n");
    
for(int T = 1; T <= 5; T++){
        printf("direita\n");
    }printf("\n");


printf("bispo se move!\n");

int T;
T = 5;
    
while(T > 0){
        printf("cima e direita\n");
        T--;
}

printf("\n");

printf("rainha se move!\n");
    
int L = 1;
    
do{
        printf("esquerda\n");
        L++;
    } while (L < 9);


printf("\n");

printf("cavalo se move\n");
printf("\n");

for (int t = 2; t > 0; t--){
    int c = 2;
    while(c>0){
        printf("baixo\n");
        c--;
    }printf("esquerda\n");
    printf("\n");

}



return 0;
}