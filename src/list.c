#include <stdlib.h>
#include <string.h>
#include "list.h"

list *make_list() {
    list *l = malloc(sizeof(list));
    l->size = 0;
    l->front = 0;
    l->back = 0;
    return l;
}

void *list_pop(list *l) {
    if (!l->back) return 0;
    node *b = l->back;
    void *val = b->val;
    l->back = b->prev;
    if (l->back) l->back->next = 0;
    free(b);
    --l->size;

    return val;
}

void list_insert(list *l, void *val) {
    node *new = malloc(sizeof(node));
    new->val = val;
    new->next = 0;

    if (!l->back) {
        l->front = new;
        new->prev = 0;
    } else {
        l->back->next = new;
        new->prev = l->back;
    }
    l->back = new;
    ++l->size;
}

void free_node(node *n) {
    node *next;
    while (n) {
        next = n->next;
        free(n);
        n = next;
    }
}

void free_list(list *l) {
    free_node(l->front);
    free(l);
}

void free_list_contents(list *l) {
    node *n = l->front;
    while (n) {
        free(n->val);
        n = n->next;
    }
}

/**
 * list转数组
 * @param l 列表
 * @return 数组指针
 */
void **list_to_array(list *l) {

    void **a = calloc(l->size, sizeof(void *));  //分配l->size个sizeof(void *)类型的数组内存

    int count = 0;

    node *n = l->front;

    while (n) {

        a[count++] = n->val;

        n = n->next;

    }

    return a;

}
