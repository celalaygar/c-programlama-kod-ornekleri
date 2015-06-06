#include <stdio.h>
#include <conio.h>
int main(void){
	int c=0, a = 0;
	char harf;
	char metin[255];
	printf("Yazmaya baslayin : \n");
	while (c != 0x61){
		c = getch();
		printf("*");
		harf = c;
		if (c != 0x61){
			metin[a] = harf;
			a++;
		}
	}
	printf("\na harfine basildi.");
	printf("\na harfi basilana kadar girilen katar: %s", metin);
	getch();
	return 0;
}
