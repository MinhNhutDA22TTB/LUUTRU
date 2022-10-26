#include <stdio.h>;
int A[100];
void nhapmang ( int A[100], int n);
void xuatmang ( int A[100], int n);
void max (int A[100],int n);
void tich (int A[100],int n);
void dsnt(int A[100],int n);
int main()

{
	int n;
	printf ("Nhap so phan tu cho mang la mot so nguyen :"); scanf("%d",&n);
	nhapmang(A,n);
	xuatmang(A,n);
	max(A,n);
	tich(A,n);
	dsnt(A,n);
}


void nhapmang (int A[100], int n)//nhap mang
{
	printf("\n\nNhap gia tri cac phan tu cho mang A :");
	int i;
	for (i=0;i<n;i++)
	{
		printf("\n\nNhap gia tri cho phan tu A[%d]=",i); scanf("%d", &A[i]);
	}
}

void xuatmang ( int A[100], int n)//xuat mang
{
	printf("\n\nXuat gia tri cac phan tu cho mang A :");
	int i;
	for (i=0;i<n;i++)
	{
		printf("\n\nGia tri cua phan tu A[%d]=%d",i,A[i]);
	}

}


void max(int A[100], int n)// tim gia tri lon nhat
{
	int i,j,gtln=0;
	for(i=0;i<n;i++)
	{
		if (gtln <= A[i]) gtln = A[i];
		if (gtln <= A[i]) j=i;
	}
	printf("\n\nGia tri lon nhat trong mang la gia tri %d cua phan tu A[%d]",gtln,j);
}

void tich (int A[100],int n)// tinh tich cua mang
{
    int i,tich=1;
	for (i=0;i<n;i++)
	{
		tich=tich*A[i];
	}
	printf("\n\nTich cac phan tu trong mang =%d",tich);
}

void dsnt(int A[100],int n)
{
	int i,dem=0;
	int tong=0;
	int dem1=0;
	for(i=0;i<n;i++)
	{
		for(int j=2;j<A[i];j++)
		{
			if (A[i]%j==0) dem++;
		}
		if (dem==0) dem1++;
	}
	printf("\n\nCo %d phan tu la so nguyen to trong mang A",dem1);
}

























