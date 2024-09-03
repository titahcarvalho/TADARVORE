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
TCelula* Pesquisar(TCelula *x, TItem Item) {
  if((x == NULL) || (x->item.chave == Item.chave))// o X == NULL significa caso a chave a pesquisar não exista dentro da árvore
   return x;
  if(Item.chave < x->item.chave) //se o item que eu quero pesquisar é menor que o que está dentro do nó
   return Pesquisar(x->esq,Item);
  else if(Item.chave > x->item.chave)
    return Pesquisar(x->dir,Item);
 }
TCelula* Minimo(TCelula *x) {
  if( x == NULL)
     return NULL;
  while(x->esq != NULL) {
     x = x->esq;
  }
  return x;
}
TCelula* Maximo(TCelula *x) {
  if( x == NULL)
   return NULL;
  while(x->dir != NULL) {
   x = x->dir;
 }
 return x;
}
TCelula* Sucessor(TCelula *x) {
 if(x==NULL)
    return NULL;
 if(x->dir != NULL)
    return Minimo(x->dir);
 TCelula *y = x->pai; //vamos ter que subir p a raiz, chamando pelo pai
 while(y != NULL && x==y->dir) {
  x = y;
  y = y->pai;
 }
 return y;
}