#include "insercao.h"
#include "particiona.h"


/* -------------------------------------------------------------------------- */
/* ordena v[a..b] usando o algoritmo QuickSort com inser��o e devolve v       */

int *quicksort_insercao(int v[], int a, int b, unsigned int m) 
{
  int x;
  if( a > b)
    return v;
  x = particiona(v, a, b, v[b]);
  if(x-1-a <= m)
    insercao(v, a, x-1);
  else
    quicksort(v, a, x-1);
  if(b-x+1 > m)
    insercao(v, x+1, b);
  else
    quicksort(v, x+1, b);  
  return v;
}
