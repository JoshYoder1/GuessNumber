#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
	char name[20];
	int correct;
	int guess;
	int KeepGoing = 0;
	srand(time(NULL));

	printf("What is your name? ");
	scanf("%s", name);
	printf("Hello, %s!\n", name);

	correct = (rand() % 100)+1;
	printf("The number is: %d \n",correct);
	
	while(KeepGoing == 0){
		printf("Guess a number: ");
		scanf("%d", guess);
		printf("You guessed %d \n", guess);
		KeepGoing = 1;
	}

	return 0;
}
