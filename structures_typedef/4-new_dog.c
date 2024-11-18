#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog (dog_t), or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_copy, *owner_copy;

    /* Allocate memory for the new dog structure */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* Allocate and copy name */
    name_copy = malloc(strlen(name) + 1);
    if (name_copy == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    strcpy(name_copy, name);

    /* Allocate and copy owner */
    owner_copy = malloc(strlen(owner) + 1);
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(new_dog);
        return (NULL);
    }
    strcpy(owner_copy, owner);

    /* Assign values to the new dog */
    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return (new_dog);
}