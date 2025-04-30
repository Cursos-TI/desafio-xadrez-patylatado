{
    int peça;
    printf("Qual peça você quer movimentar?\n");
    printf(" torre: digite 1\n rainha: digite 2\n bispo: digite 3\n cavalo: digite 4\n");
    scanf("%d", &peça);
    switch(peça)
    {
      case 1:
       int i = 1;
       while (i<=5)
       {
         printf("FRENTE\n");
         i++;
       }
       break;
      case 2:
       i = 1;
       do
       {
         printf("ESQUERDA\n");
         i++;
        }
        while (i<=8);
        break;
      case 3:
       for (i=1; i<6; i++)
        {
         printf("FRENTE, DIREITA\n");
        }
        break;
      case 4:
       i = 1;
       while (i<=2)
       {
         printf("CIMA\n");
         i++;
       }
       printf("DIREITA");
       break;
     default:
      {
       printf("opção inválida");
      }
    }
}
