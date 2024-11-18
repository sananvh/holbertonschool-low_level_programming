#ifndef DOG_H
#define DOG_H

#include "main.h"

/**
 * struct dog - A new type describing a dog
 * @name: The name of the dog (a string)
 * @age: The age of the dog (a float)
 * @owner: The owner of the dog (a string)
 *
 * Description: Defines a dog with a name, age, and owner
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

#endif /* DOG_H */
