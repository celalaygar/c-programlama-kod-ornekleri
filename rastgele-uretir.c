#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
int main() { 
	int *sayi,n; 
	printf("1-100 arasinda rastgele kac tane sayi girilsin....:   "); 
	scanf("%d",&n); 
	sayi=(int *)malloc(n*sizeof(int)); 
	srand(time(NULL)); 
	for(int i=0;i<n;i++) { 
		sayi[i]=rand()%100;
	} 
	for(int i=0;i<n;i++){
	printf("\n%d",*sayi);
	sayi++; 
	} 
	return 0; 
}
