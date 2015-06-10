#include<stdio.h>
int main(){
	
	int b,a[8];
	for(int m=0;m<8;m++){
		printf("%d . sayi : ",m+1); scanf("%d",&a[m]);
	}
	for(int i=0;i<7;i++){
		for(int j=i+1;j<8;j++){
			if(a[i]>a[j]){
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
		
	}
	for(int k=0;k<8;k++){
		printf(" %d ",a[k]);
	}
	
}
