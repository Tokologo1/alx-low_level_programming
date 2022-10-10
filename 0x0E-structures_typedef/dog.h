#ifndef dog_h
#define dog_h
/**
 * struct dog - list dates about pet
 * @name: pet name
 * @age: pet age
 * @owner: pet ownername
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
