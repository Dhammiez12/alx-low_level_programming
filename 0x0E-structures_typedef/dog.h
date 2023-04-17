#ifndef HEADER_FILE
#define HEADER_FILE dog.h

/**
 * struct dog - A program that defines
 * a new struct dog with name, age, owner
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
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
