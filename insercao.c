#include "biblioteca.h"
#include "selecao.h"
/* -------------------------------------------------------------------------- */
/* ordena v[a..b] pelo m�todo da sele��o e devolve v */

int *insercao(int v[], unsigned int a, unsigned int b)
{
  if(a >= b)
    return v;
  *insercao(v, a, b-1);
  selecao(v,a,b);
  return v;
}
