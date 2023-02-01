#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int max(int *a, int n)
{
	int x=*a;
	for (int i=0;i<n;i++)
	{
		if(*a+i>x) x=*a+i;
	}
	return  x;
}
int min(int *a, int n)
{
	int x=*a;
	for (int i=0;i<n;i++)
	{
		if(*a+i<x) x=*a+i;
	}
	return  x;
}
int main()
{
	int *a,n,tong=0;
	a=(int*)malloc(100*sizeof(int));
	int m=3;
	FILE *link;
	char name[60];
	printf("NHAP  DUONG DAN  :"); gets(name);
	system("cls");
	if ((link=fopen(name,"wt"))==NULL)
	{
	    printf("\n\nERROR\n\n");
	    exit(0);
	}
	else
	{
		printf("Nhap so phan tu :"); scanf("%d",&n);
		for (int i=0;i<n;i++)
		{
			printf("\n phan tu %d  = ",i+1); scanf("%d",a+i);
		}
		fprintf(link,"so phan tu la %d\n",n);
		for (int i=0;i<n;i++)
		{
			fprintf(link,"%d  ",*a+i);
			tong=tong+*a+i;
		}
		fprintf(link,"\n\nGia tri lon nhat la %d, nho nhat la %d,tong cac phan tu bang %d",max(a,n),min(a,n),tong);
		fclose(link);
	}
}
