#include <stdlib.h>

typedef struct s_stack{
    char            value;
    struct s_stack  *next;
}                   t_stack;

void push(t_stack **head, char value)
{
    t_stack *node;

    node = malloc(sizeof(node));
    node->next = *head;
    node->value = value;
    *head = node;
}

char pop(t_stack **head)
{
    t_stack *out;
    char    res;

    out = *head;
    *head = (*head)->next;
    res = out->value;
    free(out);
    return (res);
}