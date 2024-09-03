// Created by Angélica on 29/08/2024.
#ifndef ARVORE_H
#define ARVORE_H
typedef struct item {
    int chave; //vou declarar apenas esse p facilitar na explanação e entendedimento
}TItem;
typedef struct celula {
    TItem item;
    struct celula *pai;
    struct celula *esq;
    struct celula *dir;   //cada nó recebe 3 ponteiros
}TCelula;

typedef struct arvore {
    TCelula *raiz;
    int tamanho;
}TArvore;

void Central(TCelula x);
void PreOrdem(TCelula *x);
void PosOrdem(TCelula *x);
TCelula* Pesquisar(TCelula *x, TItem Item);
TCelula* Minimo(TCelula *x);
TCelula* Maximo(TCelula *x);
TCelula* Sucessor(TCelula *x);
#endif //ARVORE_H
