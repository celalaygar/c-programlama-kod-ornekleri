#include <stdio.h>
#include <stdlib.h>
 
FILE *dosya; /* dosya göstericisi */
 
	
int main()
{
	dosya=fopen("datasize.txt","w");
	int a[5],boyut,i;
	a[0]=sizeof(char);
	a[1]=sizeof(short int);
	a[2]=sizeof(int);
	a[3]=sizeof(double);
	a[4]=sizeof(float);
	
	for(i=0;i<5;i++){
		fprintf(dosya,"%3d",a[i]);
	}	
	fclose(dosya);
	puts("Bilgiler kaydedildi.\a");
	int no1,no2,no3,no4,no5;
	dosya=fopen("datasize.txt","r");
	
	fscanf(dosya,"%3d%3d%3d%3d%3d",&no1,&no2,&no3,&no4,&no5);
	printf("char      : %d\nshort int : %d\nint       : %d\ndouble    : %d\nfloat     : %d\n",no1,no2,no3,no4,no5);
 
	fclose(dosya);
	
	
	
	return 0;
}
