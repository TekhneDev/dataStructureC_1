// nome: usaFila.c 
        
#include <stdio.h>

#include "Fila.h"

int main (void) 
{
  Fila* f;
  f = fila_cria ();

  fila_insere (f, 20.1);
  fila_insere (f, 33.3);
  fila_insere (f, 21.7);
  fila_insere (f, 14.5);
  
  printf("Elemento 1: %f\n", fila_retira (f)); 
  printf("Elemento 2: %f\n", fila_retira (f));  

  fila_libera (f);
  
  return 0;
}