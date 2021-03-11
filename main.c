#include <stdio.h>
#include <stdlib.h>

int main()
{
  float nota1, nota2;
  float media;
  setlocale("LC_All","Portuguese");
  
  printf("Digite nota1: ");
  scanf("%f",&nota1);

  printf("Digite nota2: ");
  scanf("%f",&nota2);

  media=(nota1=nota2)/2; 
  
  printf("A média do aluno é: .2%f. Bons estudos!! \n\n\n",media);


  return 0;
}