#include<stdio.h>
int main(){
	
	int b,j,a[8];
	for(int m=0;m<8;m++){
		printf("%d . sayi : ",m+1); scanf("%d",&a[m]);
	}
	for(int i=1;i<8;i++){
		b=a[i];
		j=i;
		while(j>0 && b<a[j-1])
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=b;
	}
	for(int k=0;k<8;k++){
		printf(" %d ",a[k]);
	}
	
}
