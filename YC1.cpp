#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	FILE *link;
	char name[100], ch;
	printf("NHAP DUONG DAN :"); gets(name);
	if ((link=fopen(name,"w"))==NULL)
	{
		printf("\n\nERROR !");
		exit(1);
	}
	while ((ch=getche()) !='\r') putc(ch,link);
	fclose(link);
	return 0;
}

























































