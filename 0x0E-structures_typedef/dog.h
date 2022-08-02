#ifndef DOG_H
#define DOG_H
#include <stddef.h>
/**
 * struct dog - dog details
 * @name: First member
 * @age: Second member
 * @owner: Third memeber
 * Description: List all dogs details in one struct
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
