#include <stdio.h>
#include <string.h>
int main()
{
	char kucukharf[]=("abcdefghijklmnoprqstuvyzwx");
	char buyukharf[]=("ABCDEFGHIJKLMNOPRQSTUVYZWX");
	printf("İngiliz alfabesini kullanarak bir ifade yaziniz..\n");
	char ifade[255];
	gets(ifade);
	int c; 
	c=strlen(ifade);
	int say=0;
	/*büyük harf girilirse bu harfleri 
	önce kücük harfe cevırelım...*/
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(ifade[i]==buyukharf[j])
			ifade[i]=kucukharf[j];
		}
	}
	/* daha sonra kac tane harf olduguna bakalım...*/
	for(int i=0;i<26;i++)
	{
		int say=0;
		for(int j=0;j<c;j++)
		{
			if(ifade[j]==kucukharf[i])
			say++;
		}
		if(say!=0)
		printf("%d tane %c harfi var..\n",say,kucukharf[i]);
	}
}
