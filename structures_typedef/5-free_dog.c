#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to the dog to free
 *
 * Description: This function frees the memory allocated for the name
 *              and owner strings, as well as the dog structure itself.
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
