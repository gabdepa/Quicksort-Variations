#include "biblioteca.h"
#include "particiona.h"

/* -------------------------------------------------------------------------- */
/* devolve a mediana de a, b e c                                              */

static int mediana(int a, int b, int c)
{
  int v[3] = {a, b, c};
  selecao(v, 0, 2);
  return v[1];
}

/* -------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */
/* ordena v[a..b]  usando o algoritmo  "QuickSort com mediana de  3" e
   devolve v                                                                  */

int *quicksort_mediana(int v[], int a, int b)
{
  int rand_v1, rand_v2, rand_v3, m, median, i1, i2, i3;
  if( a > b)
    return v;
  i1 = sorteia(a,b);
  rand_v1 = v[i1];
  i2 = sorteia(a,b);
  rand_v2 = v[i2];
  i3 = sorteia(a,b);
  rand_v3 = v[i3];
  median = mediana(rand_v1, rand_v2, rand_v3);
  if( compara(median, rand_v1) == 0 )
    troca(v, b, i1);
  else if( compara(median, rand_v2) == 0) 
    troca(v, b, i2);
  else
    troca(v, b, i3);
  m = particiona(v, a, b, v[b]);
  *quicksort_mediana(v,a,m-1);
  *quicksort_mediana(v,m+1,b);
  return v;
}



