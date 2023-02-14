#ifndef __LIST_SELECT_H__
#define __LIST_SELECT_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;		    // dato
    struct Node *next;	// link
} Node;

// Crea una nuova lista composta dai dati contenuti nella lista 
// puntata da data_head che si trovano nelle posizioni fornite
// tramite la lista puntata dal pos_head 
struct Node* list_select(struct Node *data_head, struct Node *pos_head);

#endif // __LIST_SELECT_H__