#include<stdio.h>


int main(){
	int a;
	printf("dik ucgen cizilecektir\nKac satirlik dik ucgen cizilsin ?...");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
			
		for(int j=i;j<=a;j++){
		
			if(j!=a){
				printf(" ");	
			}
			if(j==a){
				for(int k=1;k<=i;k++)
				printf("*");
			}
		}
		printf("\n");
	}
	
	
}
