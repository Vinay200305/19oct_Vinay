#include<stdio.h>
int main(){
	int n[5],i,max=0;
	printf("Enter Five number :");
	for(i=0;i<=4;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<=4;i++){
        if(n[i]>max){
            max=n[i];
		}
    }
    printf("\nMax number : %d",max);
	return 0;
}
