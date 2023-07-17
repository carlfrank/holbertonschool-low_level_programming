#ifndef dog_h
#define dog_h

/**
 * struct dog -Define a new type struct dog with the following elements:
 * @name: char1
 * @age: float
 * @owner: char2
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
