#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new struct dog
 * @name: Pointer to a string representing the dog's name
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    int len1, len2;

    len1 = _strlen(name);
    len2 = _strlen(owner);

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    new_dog->name = malloc(sizeof(char) * (len1 + 1));
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    new_dog->owner = malloc(sizeof(char) * (len2 + 1));
    if (new_dog->owner == NULL)
    {
        free(new_dog);
        free(new_dog->name);
        return (NULL);
    }

    _strcpy(new_dog->name, name);
    _strcpy(new_dog->owner, owner);
    new_dog->age = age;

    return (new_dog);
}
