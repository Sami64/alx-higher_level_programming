#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
* is_palindrome - checks if a singly linked list is a palindrome
* @head: pointer to the head of the list
* Return: 0 if it is not a palindrome, 1 if it is a palindrome
*/

int is_palindrome(listint_t **head)
{
listint_t *current = NULL;
int i = 0, j = 0, k = 0;
int *array = NULL;

if (!head || !*head)
return (1);

current = *head;
while (current)
{
current = current->next;
i++;
}

array = malloc(sizeof(int) * i);
if (!array)
return (0);

current = *head;
while (current)
{
array[j] = current->n;
current = current->next;
j++;
}

for (k = 0; k < i / 2; k++)
{
if (array[k] != array[i - k - 1])
{
free(array);
return (0);
}
}
free(array);
return (1);
}
