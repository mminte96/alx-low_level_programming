#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
 * srtuct dog - Define a new type struct
 * @name: type of stuct
 * @age: type float
 * @owner: another char
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - prototype
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
