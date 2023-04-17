#include <stdlib.h>
#include "dog.h"
/* by nora jeout */
/**
 *_strdup - make a copy string
 *@s: the struct
 *Return: the copy of the string
 */
char *_strdup(char *s)
{
	int i;
	char *new;

	if (!s)
		return (NULL);
	for (i = 0; s[i]; i++)
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	for (i = 0; s[i]; i++)
	{
		new[i] = s[i];
	}
	new[i] = '\0';
	return (new);
}
/**
 *new_dog - new dog type
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the dog's onwer
 *Return: a new dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = (dog_t *)malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name = _strdup(name);
	if (!new->name)
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	new->owner = _strdup(owner);
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	return (new);

}
