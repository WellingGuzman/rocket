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

List* CreateList();

void AddNodeToList(List *list, Node *node);
void AddValueToList(List *list, void *value);
// Node* list_current(List *list);
void RemoveItemFromList(List *list, Node *node);
void ClearList(List *list);
Node* CreateListNode(void *value);

#endif
