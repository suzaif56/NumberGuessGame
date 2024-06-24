#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	system("color E0");
	
	srand(time(NULL));
	
	int randomNumber = rand() % 100 + 1;
	int i, guess;
	
	printf("The compter has generated a random number between 1 - 100\n");
	printf("You are given 10 guesses\n");
	printf("-------------------------\n");
	
	for(i=1;i<=10;i++){
		printf("\nGuess number %d: ", i);
		scanf("%d", &guess);
		if(guess==randomNumber){
			i = 10;
			printf("\nCongratulations! You win.");
		}
		else if(guess>randomNumber){
			printf("\nYour guess is larger than the generated number.\n");
		}
		else{
			printf("\nYour guess is smaller than the generated number.\n");
		}
	}
	
	return 0;
}
