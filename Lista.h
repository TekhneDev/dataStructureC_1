/* TAD lista de inteiros */
/* nome: Lista.h         */
 
typedef struct noLista NoLista;
 
NoLista* lst_cria (void);
void     lst_libera (NoLista* lst);
 
NoLista* lst_insere (NoLista* lst, int v);
NoLista* lst_retira (NoLista* lst, int v);
 
int      lst_vazia (NoLista* lst);
NoLista* lst_busca (NoLista* lst, int v);
int      lst_recupera (NoLista* noh);
void     lst_imprime (NoLista* lst);