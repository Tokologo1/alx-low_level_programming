#ifndef main_h
#define main_h
/**
 * struct dog - list dates about pet
 * @name: pet name
 * @age: pet age
 * @owner: pet ownername
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog - remove strucut with typedef
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char owner);
void free_dog(dog_t *d);
#endif
