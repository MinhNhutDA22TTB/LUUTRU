#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int m=3;
	FILE *link;
	char name[60];
	printf("NHAP  DUONG DAN  :"); gets(name);
	if ((link=fopen(name,"wt"))==NULL)
	{
	    printf("\n\nERROR\n\n");
	    exit(0);
	}
	else
	{
		fprintf(link,"so dong  & cot la %d\n",m);
		for (int i=0;i<m;i++)
		{
			for (int j=0;j<m;j++)
			{
				fprintf(link,"%3d",a[i][j]);
			}
			fprintf(link,"\n");
		}
		fclose(link);
	}
}
