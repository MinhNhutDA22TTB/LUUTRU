#include <stdio.h>


int main()
{
	char a[100];
	gets(a);
	int m=3;
	FILE *fb;
	char path[50];
	printf("\nNHAP DUONG DAN :");
	fflush(stdin);
	gets(path);
	fb=fopen(path,"wt");
	if (fb==NULL)
	{
	   printf("\nERROR");
	}
	else
	{
	   for (int i=0;i<m;i++)
	   {
	   	   	   fprintf(fb,"%s  ",a);
	   }
	   fclose(fb);
	}
}
