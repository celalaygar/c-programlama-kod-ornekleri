#include<stdio.h>
#include<string.h>
void binaryyaz(int x)
{
	int m=0x8000;
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
	int number;
	printf("sayi giriniz : ");
	scanf("%d",&number); 
	binaryyaz(number);
	int maske=0x8000;
	printf("\nBu sayi ile maskelenecek...\n");
	binaryyaz(maske);
	printf("\n");
	for(int i=0;i<16;i++){
		if(number&maske){
			printf("En degersiz biti :");
			printf("%d",maske);
			break;
		}		
		maske=maske>>1;
	}
}
