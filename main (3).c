/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int idades, cont, soma;
  double media;

  printf ("Digite as idades:\n");
  scanf ("%d", &idades);

  soma = 0;
  cont = 0;
  while (idades >= 0)
    {
      soma = soma + idades;
      cont = cont + 1;
      scanf ("%d", &idades);

    }

  if (cont == 0)
    {
      printf ("impossivel calcular");
    }
  else
    {
      media = (double) soma / cont;
      printf ("MEDIA = %.2lf\n", media);
    }


  return 0;
}
