#include <stdio.h>
void DIREITA (int n)
{
 if (n>0)
  {
   printf("direita  \n");
   DIREITA (n-1);
  }
}
void ESQUERDA (int m)
{
 if (m>0)
  {
   printf("esquerda  \n");
   ESQUERDA (m-1);
  }
}
void ACIMA (int k)
{
 if (k>0)
  {
   printf("acima  \n");
   ACIMA(k-1);
  }
}
int main()
{
    int peça;
    printf("Qual peça você quer movimentar?\n");
    printf(" torre: digite 1\n rainha: digite 2\n bispo: digite 3\n cavalo: digite 4\n");
    scanf("%d", &peça);
    switch(peça)
    {
      case 1:
       printf("*TORRE*\n");
       DIREITA(5);
      break;
      case 2:
       printf("*RAINHA*\n");
       ESQUERDA(8);
      break;
      case 3:
       printf("*BISPO*\n");
       for(int i=1; i<6; i++)
        {
         DIREITA(1);
         ACIMA(1);
        }
      break;
      case 4:
       printf("*CAVALO*\n");
       ACIMA(2);
       DIREITA(1);
      break;
      default:
      {
       printf("opção inválida");
      }
    }
}
