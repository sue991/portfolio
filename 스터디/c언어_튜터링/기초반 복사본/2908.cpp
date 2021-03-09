#include <stdio.h>

int reverse(int x){
	//only change function reverse.
}

int main(){
	int A,B;
	scanf("%d%d",&A,&B);
	if(reverse(A)>reverse(B)){
		printf("%d",reverse(A));
	}
	else{
		printf("%d",reverse(B));
	}
}
