#include "list.h"

List*
list_create()
{
    List *list = malloc(sizeof(List));

    if (list != NULL) {
        list->size = 0;
        list->head = NULL;
        list->tail = NULL;
    }

    return list;
}

void
list_add(List *list, Node *node)
{
    if (list->size == 0) {
        node->next = NULL;
        list->head = list->tail = node;
    } else {
        Node *tail = list->tail;
        tail->next = node;
        node->next = NULL;
        list->tail = node;
    }

    list->size++;
}

Node*
node_create(void *value)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;

    return node;
}

void
list_add_value(List *list, void *value)
{
    list_add(list, node_create(value));
}

void
list_clear(List *list)
{
    list->head = list->tail = NULL;
    list->size = 0;
}

void
list_remove(List *list, Node *node)
{
    Node *head = list->head;

    if (list->size == 0)
        return;

    if (head == node && list->size == 1) {
        list->head = list->tail = NULL;
        list->size = 0;
        free(node->data);

        return;
    }

    while (head != NULL) {
        if (head == node) {
            Node *next = head->next;

            if (next != NULL) {
                head->next = next->next;
            } else {
                head->next = NULL;
            }

            free(node->data);
            list->size--;
            break;
        }

        head = head->next;
    }
}
