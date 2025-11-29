#include <stdio.h>
int main(){
//Criando o tabuleiro 10x10
int i,j;
printf("Tabuleiro batalha naval:\n");

int Tabuleiro [10][10]={0};
char Colunas[10]={'A','B','C','D','E','F','G','H','I','J'};

//Cone
int Linha,Coluna;
int LinhaBase =9;
int LinhaSuperior =7;
int ColunaCentral =3;
int Cone =2;
int LarguraAtual;
int ColunaInicial;
int ColunaFinal; 

for(Linha=LinhaSuperior;Linha<=LinhaBase;Linha++){

LarguraAtual=Linha-LinhaSuperior;
ColunaInicial=ColunaCentral-LarguraAtual;
ColunaFinal=ColunaCentral+LarguraAtual;

for(Coluna=ColunaInicial;Coluna<=ColunaFinal;Coluna++){
if(Coluna>=0 && Coluna<10){
Tabuleiro[Linha][Coluna]=Cone;}}}

//Impressão do cone
printf("\n***Cone***\n");
printf("   ");
for(Coluna=0;Coluna<10;Coluna++){
printf("%c ", Colunas[Coluna]);}
printf("\n");

for(Linha=0;Linha<10;Linha++){
printf("%2d ",Linha+1);

for(Coluna=0;Coluna<10;Coluna++){
printf("%d ",Tabuleiro[Linha][Coluna]);}
printf("\n");}

//Octaedro
int octaedro=4;
int LinhaCentral=3;
int Colunacentral=7;
int Colunahorizontal=7;

for(i=0;i<10;i++){
for(j=0;j<10;j++){

int DistanciaVertical;
if(i>LinhaCentral){
DistanciaVertical=i-LinhaCentral;}
if(i<=LinhaCentral){
DistanciaVertical=LinhaCentral-i;}

int DistanciaHorizontal;
if(j>Colunacentral){
DistanciaHorizontal=j-Colunacentral;}
if(j<=Colunacentral){
DistanciaHorizontal=Colunacentral-j;}

if(DistanciaVertical+DistanciaHorizontal<=2){
Tabuleiro[i][j]=octaedro;}}}

//octaedro impressão
printf("\n***Octaedro***\n");
printf("   ");
for(j=0;j<10;j++){
printf("%c ", Colunas[j]);}
printf("\n");

for(i=0;i<10;i++){
printf("%2d ", i+1);
for(j=0;j<10;j++){
printf("%d ",Tabuleiro[i][j]);}
printf("\n");}


//Posição do navio diagonal
for(i=7;i<=9;i++){
j=i;Tabuleiro[i][j]=3;}

//Diagonal secundaria
for(i=1;i<=3;i++){
j=4-i;Tabuleiro[i][j]=3;}

//Posição do navio horizontal
for(j=3;j<=5;j++){
Tabuleiro[6][j]=3;}

//Posição do Navio na vertical
for(i=5;i<=7;i++){
Tabuleiro[i][9]=3;}

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


