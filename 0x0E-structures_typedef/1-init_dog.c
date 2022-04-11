#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: no return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
README.md if (d)
README.md {
README.md README.md d->name = name;
README.md README.md d->age = age;
README.md README.md d->owner = owner;
README.md }
}
