#include "list.h"

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
list_t *listNew(type_t t)
{
        list_t *l = malloc(sizeof(list_t));
        l->type = t; // l->type es equivalente a (*l).type
        l->size = 0;
        l->first = NULL;
        l->last = NULL;
        return l;
}
void listAddFirst(list_t *l, void *data)
{
        node_t *n = malloc(sizeof(node_t));
        switch (l->type)
        {
        case TypeFAT32:
                n->data = (void *) copy_fat32((fat32_t *) data);
                break;
        case TypeEXT4:
                n->data = (void *) copy_ext4((ext4_t *) data);
                break;
        case TypeNTFS:
                n->data = (void *) copy_ntfs((ntfs_t *) data);
                break;
        }
        n->next = l->first;
        n->previous = NULL;
        l->first = n;
        l->size++;
        if (l->size < 2) {l->last = l->first;}
}
void listAddLast(list_t *l, void *data)
{
        node_t *n = malloc(sizeof(node_t));
        switch (l->type)
        {
        case TypeFAT32:
                n->data = (void *) copy_fat32((fat32_t *) data);
                break;
        case TypeEXT4:
                n->data = (void *) copy_ext4((ext4_t *) data);
                break;
        case TypeNTFS:
                n->data = (void *) copy_ntfs((ntfs_t *) data);
                break;
        }
        n->next = NULL;
        n->previous = l->last;
        if (l->last) {
                l->last->next = n;
        } else {
                l->first = n; // Si la lista estaba vacía, este es el primer nodo
        }
        l->last = n;
        l->size++;
}

// se asume: i < l->size
void *listGet(list_t *l, uint8_t i)
{
        node_t *n = l->first;
        for (uint8_t j = 0; j < i; j++)
                n = n->next;
        return n->data;
}
// se asume: i < l->size
void *listRemove(list_t *l, uint8_t i)
{
        node_t *tmp = NULL;
        void *data = NULL;
        if (i == 0)
        {
                data = l->first->data;
                tmp = l->first;
                l->first = l->first->next;
        }
        else
        {
                node_t *n = l->first;
                for (uint8_t j = 0; j < i - 1; j++)
                        n = n->next;
                data = n->next->data;
                tmp = n->next;
                n->next = n->next->next;
        }
        free(tmp);
        l->size--;
        return data;
}
void listDelete(list_t *l)
{
        node_t *n = l->first;
        while (n)
        {
                node_t *tmp = n;
                n = n->next;
                switch (l->type)
                {
                case TypeFAT32:
                        rm_fat32((fat32_t *)tmp->data);
                        break;
                case TypeEXT4:
                        rm_ext4((ext4_t *)tmp->data);
                        break;
                case TypeNTFS:
                        rm_ntfs((ntfs_t *)tmp->data);
                        break;
                }
                free(tmp);
        }
        free(l);
}
void intercambiar(list_t *l, uint8_t i, uint8_t j){
        if (l->size < 2 || i == j){ return; }
        uint8_t first = MIN(i, j);
        uint8_t second = MAX(i, j);
        void *datai = listGet(l, i);
        void *dataj = listGet(l, j);

        node_t *n = l->first;
        for (uint8_t k = 0; k < i; k++){
                n = n->next;
        }
        n->data = dataj;

        for (uint8_t k = i; k < j; k++){
                n = n->next;
        }
        n->data = datai;
}