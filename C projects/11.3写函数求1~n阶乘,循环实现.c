#include<stdio.h>
int fac(int n){
	int fact=n;
	if(n>0){
	
		for(int i=n-1;i>0;i--){
			fact=fact*i;
			
		}
		return fact;
	}else if(n=0){
	
		return 1;
	}
}
int main(){
	int n;
	printf("please enter a number\n");
	scanf("%d",&n);
	printf("okay! I will help you calculate the factorial of %d \n",n);
	
	printf("%d",fac(n));
	return 0;
	
}