#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	for(i=1;i<=100;i++){
		if(i%3==0){
			printf("Fizz ",i);
		}
		else if(i%5==0){
			printf("Buzz ",i);
		}
		else if(i%3==0 && i%5==0){
			printf("%d ",i);
		}
		else printf("%d ",i);
		
	}
	return 0;
}
