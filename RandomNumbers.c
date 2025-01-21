#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
	char name[20];
	int correct;
	int guess;
	srand(time(NULL));

	printf("What is your name? ");
	scanf("%s", name);
	printf("Hello, %s!\n", name);

	correct = (rand() % 100)+1;
	printf("The number is: %d \n",correct);
	
//	while

	return 0;
}
