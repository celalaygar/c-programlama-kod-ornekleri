#include<stdio.h>
 
int main(){
	
	int sayi[3];
	int b=0,a=1;
	
	while(a!=0)
	{
		scanf("%d",&a);
		sayi[b]=a;
		b++;
	}
	printf("girilen sayılar : ");
	for(int i=0;i<b;i++)
	printf(" %d",sayi[i]);
	
	return 0;
}
