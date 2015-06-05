#include<stdio.h>
#include <iostream>
int main(){
	int a[5],y=0,b=0,max=0;
	printf("5 tane sayi giriniz...... \n");
	for(int i=0;i<5;i++){
		printf("%d. sayi :",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<5;i++){
		if(max<a[i])
		max=a[i];
	}
	int dizi[max][5];
	for(int j=0;j<5;j++){		
		for(int k=max-1;k>=0;k--){
			if(k==max-1)
				b=k-a[j];
			if(k>b)
				dizi[k][j]=1;
			else
				dizi[k][j]=0;
		}	
	}
	system("CLS");
	printf("   -----------------------\n");
	for(int m=0;m<max;m++){
		printf("%2d | ",max-m);
		for(int k=0;k<5;k++){
			if(dizi[m][k]==1)
			printf("*** ");
			else
			printf("    ");
		}
		printf("|\n");
	}
	printf("   -----------------------\n    ");
	for(int i=0;i<5;i++)	printf("%3d ",a[i]);
}
