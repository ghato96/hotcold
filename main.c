#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void menu() {
	printf("welcome to hot or cold \n" );
	printf("1.begin the game!\n");
	printf("0 end the game!\n");
	scanf("%d, &choice");
	}

int main() {
	int choosenumber;
	int player1;
	int player2;
	int attemps=0;
	int choice; 
	srand(time(NULL));
	choosenumber=rand () %100 + 1;
	menu(  );
	printf("the computer hides a number from, 1 to 100 and the game starts!\n");
	do{
		printf("player1 give me your prediction!\n");
		scanf("%d", &player1);
		printf("player2 give me your prediction!\n");
		scanf("%d", &player2);
		attemps++;
		if (player1==choosenumber || player2==choosenumber ) {
			printf("congrats! the number is %d and win after %d attemps\n",choosenumber ,attemps);
			}else {
				printf("you lose keep going to find it!\n");
				
			}
		}
	
	while ("player1 != choosenumber && player2 != choosenumber");
	
	
	return 0;
}
