#include<stdio.h>
int sum(int n){
    int m=0;
    for(int i=1;i<n+1;i++){
        
        m+=i;

    }
    return m;
}
int main(){
    printf("please enter a number\n");
    int n;
    scanf("%d",&n);
    printf("the sum is %d",sum(n));
    return 0;

}
