#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head = NULL;

    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);

    printf("Original List:\n");
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 5);
    printf("After deleting node at index 5:\n");
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    printf("After deleting first node:\n");
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    printf("After deleting first node again:\n");
    print_dlistint(head);
    printf("-----------------\n");

    printf("After freeing the list:\n");
    free_dlistint(head);

    return (EXIT_SUCCESS);
}
