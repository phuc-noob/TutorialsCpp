#include <stdio.h>
#include <string.h>

int main(int argc ,char *argv[])
{
	// create two arrays we care about
	int ages[] ={78, 55, 89, 69, 100,1000};
	char *names[] = {"harry","trump","stack","loe","rob","tiger"};
	
	// safely get the size of ages
	int count =sizeof(ages)/sizeof(int);

	// first way using indexing
	// int this case using %s for printf string(name)
	printf("----------1\n");
	for(int i=0; i<count ;i++){
		printf("%s has %d years old.\n",names[i],ages[i]);
	}

	printf("----------2\n");
	// set up the pointers to the started of arrays
	int *started_age =ages;			// let get the first address of ages ->started_age
	char **started_name =names;		// let get the first address of names ->started_name

	// the second way using pointer
	for(int i=0; i<count; i++){
		printf("%s has %d years old.\n",*(started_name+i),*(started_age+i));
	}
	printf("-----------3\n");

	// the third way ,pointer just an array
	for(int i=0; i<count; i++){
		printf("%s has %d years old.\n",started_name[i],started_age[i]);
	}
	printf("------------4\n");

	// the fourth way ,stupid way with pointer
	for(started_age =ages, started_name =names;(started_age-ages) <count; started_age++,started_name++){
		printf("%s has %d years old.\n",*started_name,*started_age);
	}
	return 0;
}