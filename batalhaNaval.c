#include <stdio.h>
int main(){
//Criando o tabuleiro 10x10
int i,j;
printf("Tabuleiro batalha naval:\n");

int Tabuleiro [10][10]={0};
char Colunas[10]={'A','B','C','D','E','F','G','H','I','J'};
printf("  ");
for(int j=0; j<10; j++){
printf("%c ", Colunas[j]);}
printf("\n");

for(int i=0; i<10; i++){
printf("%2d ", i+1);

for(int j=1 ;j<10 ;j++){
printf("%d ", Tabuleiro[i][j]);}

printf("\n");}

return 0;}


