#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - structure to store dog info
*
* @name: name of dog
* @age: age of dog
* @owner: owne of dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
