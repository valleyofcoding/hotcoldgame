#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	
	int number, guess,count=1;
	srand(time(NULL));
	number= rand()%99+1;
	printf("Enter a number between 1-99:");
	scanf("%d", &guess);
	while(number!=guess){	
		if(guess<100&&guess>0){	
			if(number>guess){
			printf("\nEnter a larger number:");
	        }
		    else if(number<guess){
			printf("\nEnter a lower number:");
	 	    }
		}
		else{
			printf("\nYou didn't enter the number between 1-99...");
		}
		count++;
		scanf("%d",&guess);
	}
	printf("\nYou found the number in the %dth guess.",count);	
}
