#include <stdio.h>
#include <stdlib.h>


typedef struct SINHVIEN
{
	char ID[10];
	char name[20];
	float point;
}sv;

void IN(sv *a, int n);
void nhap(sv *x);
void *malloc(size_t size);
void free(void *block);

int main()
{
	int n;
	printf("NHAP SO LUONG SINH VIEN : "); scanf("%d",&n);
	system("cls");
	char path[50];
	sv*a=(sv*)malloc(sizeof(sv)*n);
	IN(a,n);
	printf("\nNhap Link : ");  fflush(stdin);  gets(path);
	FILE *link=fopen(path,"wb");
	system("cls");
	if (link==NULL)  printf("\nERROR");
	else
	{
		for (int i=0;i<n;i++) 
	    {
		    fwrite(a+i,sizeof(sv),n,link);
		    fwrite("\n",2,n,link);
	    }
		fclose(link);
	}
	free(a);
}


void nhap(sv *x)
{
	 fflush(stdin);
	 printf("\nNhap MSSV : "); gets(x->ID);
	 fflush(stdin);
	 printf("\nNhap ho va ten : "); gets(x->name);
	 fflush(stdin);
	 printf("\nNhap diem tong ket : "); scanf("%f",&x->point);
	 while (x->point >10 || x->point<0)
	 {
	 	   printf("\nNhap sai. Nhap lai diem tong ket : "); scanf("%f",&x->point);
	 }
}

void IN(sv *a, int n)
{
	 for (int i=0;i<n;i++) 
	 {
	 	  printf("NHAP SINH VIEN THU %d :\n",i+1);
	 	  nhap(a+i);
	 	  system("cls");
	 }
}








