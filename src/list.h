#ifndef list_h
#define list_h

typedef struct Node
{
    void* data;
    struct Node *next;
    struct Node *previous;
} Node;

typedef struct List
{
    u32 size;
    struct Node *head;
    struct Node *tail;
} List;

List* list_create();
void list_add_value(List *list, void *value);
// Node* list_current(List *list);
void list_remove(List *list, Node *node);
void list_clear(List *list);
Node * node_create(void *value);

#endif
