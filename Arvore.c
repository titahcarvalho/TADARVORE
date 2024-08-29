// Created by Angélica on 29/08/2024.
#include "Arvore.h"
#include "string.h"
#include "stdio.h"

void Central(TCelula *x) {
 if(x != NULL) {
  Central(x->esq);
  printf("%d", x->item.chave);
  Central(x->dir);
 }
}
void PreOrdem(TCelula *x) {
 if(x != NULL) {
  printf("%d", x->item.chave);
  PreOrdem(x->esq);
  PreOrdem(x->dir);
 }
}
void PosOrdem(TCelula *x) {
 if(x != NULL) {
  PosOrdem(x->esq);
  PosOrdem(x->dir);
  printf("%d", x->item.chave);
 }
}
TCelula *Pesquisar(TCelula *x, TItem Item) {
 if((x == NULL) || (x->item.chave == Item.chave))
  return x;
 if(Item.chave > x->item.chave)
  return Pesquisar(x->esq,Item);
 else if(Item.chave < x->item.chave)
   return Pesquisar(x->dir,Item);
}