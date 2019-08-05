/* recebe uma frase de no máximo 40 caracteres e conta quantas vogais tem na frase.
caso tenha mais que 40 caracteres, da uma mensagem de erro e volta a pedir a frase.
no final verifica se o usuário deseja verificar novamente. */
//Including comments here test
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

main()
{
      char frase[40],resp;
      int totvog, totfrase,x;
      do
      {
          totfrase=50;
          while(totfrase>40)
          {
                 printf("\nDigite uma frase de no maximo 40 caracteres : ");
                 gets(frase);
                 totfrase=strlen(frase);
                 if(totfrase>40)
                                printf("\nFrase invalida....possui mais de 40 caracteres...digite novamente");
          }
          totvog=0;
          for(x=0;x<=40;x++)
          {
                            if(frase[x]=='a' || frase[x]=='A')
                                             totvog=totvog+1;
                            if(frase[x]=='e' || frase[x]=='E')
                                             totvog=totvog+1;
                            if(frase[x]=='i' || frase[x]=='I')
                                             totvog=totvog+1;
                            if(frase[x]=='o' || frase[x]=='O')
                                             totvog=totvog+1;
                            if(frase[x]=='u' || frase[x]=='U')
                                             totvog=totvog+1;
          }
          printf("\n\nA frase <%s> tem %d vogais.",frase,totvog);
          printf("\n\nDeseja verificar novamente ??? [S/N] => ");
          scanf("%c",&resp);
          gets(frase);
      }
      while(resp=='s' || resp=='S');
}
