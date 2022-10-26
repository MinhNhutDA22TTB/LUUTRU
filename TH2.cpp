#include <stdio.h>;
int A[100];
void nhapmang ( int A[100], int n);
int main()
{
	int n;
	printf ("nhap so phan tu cho mang la mot so nguyen :"); scanf("%d",&n);
	nhapmang(A,n);
}


void nhapmang (int A[100], int n)
{
	printf("\n\n Nhap gia tri cac phan tu cho mang A :");
	int i;
	for (i=0;i<n;i++)
	{
		printf("\n\n Nhap gia tri cho phan tu A[%d]=",i); scanf("%d", &A[i]);
	}
}


