#include <stdio.h>
int table(int n);
int main(){
	int a;
	printf("Enter the number you want table of: ");
	scanf("%d",&a);
//	printf("%d",table(a));
	table(a);
	
	
	
	
	return 0;
}
int table(int n){
	 for(int i =1;i<=10;i++){
		printf("%d * %d = %d\n",n,i,n*i);
	}
	
	
	
	
}
