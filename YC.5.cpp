#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int max(int *a, int n, int  m)
{
	int x=*a;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if(x<*(a+i*m+j))  x=*(a+i*m+j);
		}
	}
	return  x;
}
int min(int *a, int n, int  m)
{
	int x=*a;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if(x>*(a+i*m+j))  x=*(a+i*m+j);
		}
	}
	return  x;
}
int main()
{
	int *a,m,n,tong=0;
	a=(int*)malloc(100*sizeof(int));
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
		printf("Nhap so dong :"); scanf("%d",&n);
		printf("Nhap so cot :"); scanf("%d",&m);
		system("cls");
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				printf("\nphan tu [%d][%d]=",i,j);scanf("%d",a+i*m+j);
			}
		}
		fprintf(link,"so dong la %d, so cot  la %d\n",n,m);
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				fprintf(link,"%d  ",*(a+i*m+j));
				tong=tong+*(a+i*m+j);
			}
			fprintf(link,"\n");
		}
		fprintf(link,"\n\nGia tri lon nhat la %d, nho nhat la %d,tong cac phan tu bang %d",max(a,n,m),min(a,n,m),tong);
		fclose(link);
	}
	
}
