#include<stdio.h>
#include<conio.h>
typedef unsigned int node;
 
 
void binaryyaz(node x)
{
	node m=0x8000;
	for (int i = 0; i<16; i++)
	{
		if (x & m)
			printf("1");
		else
			printf("0");
	m = m >> 1;
	}
}
int main(){
	node number;
	printf("\n sayi giriniz : ");
	scanf("%d",&number); 
	binaryyaz(number);
}
