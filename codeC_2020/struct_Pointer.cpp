#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct person{
	char *name;
	int age;
	int weight;
	int height;
};

struct person *person_create(char *name, int age, int weight, int height)
{
	struct person *who =(struct person *) malloc(sizeof(struct person));
	assert(who !=NULL);
	who ->name =strdup(name);
	who ->age =age;
	who ->weight =weight;
	who ->height =height;
	return who;	
}

void person_destroy(struct person *who)
{
	assert(who!=NULL);
	free(who->name);
	free(who);
}

void person_print(struct person *who)
{
	printf("Name is %s.\n",who->name );
	printf("age is %d.\n",who->age );
	printf("height is %d.\n",who->height );
	printf("weight is %d.\n",who->weight );
	printf("----------\n");
}

int main(int argc, char *argv[])
{
	//make two people structure
	struct person *black =person_create("black",18,69,96);
	struct person *white =person_create("white",18,96,69);

	// print them out and where they are in memory
	printf("black is at memory location %p:\n",black );
	person_print(black);
	
	// change date black
	black->name ="hello black";
	person_print(black);

	printf("white is at memory location %p:\n",white );
	person_print(white);
	
	// destroy them both so we clean up
	person_destroy(black);
	person_destroy(white);
	return 0;
}