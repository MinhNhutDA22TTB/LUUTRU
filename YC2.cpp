#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
	FILE *link;
	char name[60], read;
	printf("NHAPDUONGDAN :"); gets(name);
	if ((link=fopen(name,"r"))==NULL)
	{
	   printf("\n\nERROR  @@");
	   exit(1);
	}
	system("cls");
	while ((read=getc(link))!=EOF)
	{
		printf("%c",read);
	}
	
	fclose(link);
	return 0;
}

