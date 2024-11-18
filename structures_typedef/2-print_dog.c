#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct dog to print
 *
 * Description: This function prints the name, age, and owner of the dog.
 *              If any element is NULL, it prints (nil) instead.
 *              If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    /* Print name, checking for NULL */
    if (d->name == NULL)
        printf("Name: (nil)\n");
    else
        printf("Name: %s\n", d->name);

    /* Print age */
    printf("Age: %.6f\n", d->age);

    /* Print owner, checking for NULL */
    if (d->owner == NULL)
        printf("Owner: (nil)\n");
    else
        printf("Owner: %s\n", d->owner);
}
