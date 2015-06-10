#include<stdio.h>
int main(){
	
	int b,a[8];
	for(int m=0;m<8;m++){
		printf("%d . sayi : ",m+1); scanf("%d",&a[m]);
	}
	for(int i=0;i<7;i++){
		for(int j=0;j<7-1-i;j++){
			if(a[j]<a[j+1]){
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
		
	}
	for(int k=0;k<8;k++){
		printf(" %d ",a[k]);
	}
	
}
