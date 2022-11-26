#include <stdio.h>
#include <stdlib.h>

void nhap		(int *a, int n);
void xuat		(int *a, int n);
void max		(int *a, int n);
void min		(int *a, int n);
int  check 		(int x);
void snt		(int *a, int n);
void timx		(int *a, int n);
void swap  		(int *x, int *y);
void sx 		(int *a, int n);
void tongdcc	(int *a, int n);
void chan 		(int *a, int n);
void avb  		(int *A, int *B, int *C, int M, int N);

void *calloc	(size_t nitems,size_t size);

int main()//1.Ham main de goi & thuc thi cac ham con
{
	int n,M,N;
	int *a,*b,*A,*B,*C;
	a=(int*)calloc(256,sizeof(int));
	b=(int*)calloc(256,sizeof(int));
	A=(int*)calloc(256,sizeof(int));
	B=(int*)calloc(256,sizeof(int));
	C=(int*)calloc(256,sizeof(int));
	printf("Nhap n la so dong & cot cho ma tran U : n="); scanf("%d",&n);
	nhap(a,n);//2.Nhap ma tran U
	xuat(a,n);//3.Xuat ma tran U
	max(a,n);//4.1.Tim GTLN trong ma tran U
	min(a,n);//4.2.Tim GTNN trong ma tran U
	snt(a,n);//5.Dem cac gia tri la so nguyen to va tinh tong chung trong ma tran U
	timx(a,n);///6.Tim su ton tai cua gia tri x trong ma tran U
	sx(a,n);//7.Sap xep ma tran U tang dan tu trai>phai & tren>xuong
	tongdcc(a,n);//8.Tinh tong cac phan tu nam tren duong cheo chinh cua ma tran U
	chan(a,n);//9.Dem cac phan tu la so chan trong tam giac tren cua duong cheo chinh ( khong ke duong cheo chinh )
	printf("\n\n\n\n\n\n\n");
	printf("\n\n                                XAY DUNG MA TRAN A & B VA TINH TONG TICH CUA A & B                   \n\n\n");
	printf("\n\nNhap m la so dong cho A & B : m = "); scanf("%d",&M);
	printf("\n\nNhap n la so cot cho A & B : n = ");  scanf("%d",&N);
	avb(A,B,C,M,N);//10.Nhap hai ma tran A&B. Tinh tong & tinh cua A&B
	printf("\n\nNhan phim bat ky de ket thuc !");
}



void nhap(int *a, int n)
{
	 printf("\n\nNhap cac phan tu cho ma tran U :");
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 printf("\n\nU[%d][%d]=",i,j); scanf("%d",a+i*n+j);
	 	 }
	 }
}


void xuat(int *a, int n)
{
	 printf("\n\nMa tran U da nhap :\n\n");
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 printf("%d  ",*(a+i*n+j));
	 	 }
	 	 printf("\n\n");
	 }
}



void max(int *a, int n)
{
	 int max=*(a+0*n+0);
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 if (*(a+i*n+j)>=max) max=*(a+i*n+j);
	 	 }
	 }
	 printf("\n\nGia tri lon nhat trong ma tran U la %d",max);
}


void min(int *a, int n)
{
	 int min=*(a);
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 if (*(a+i*n+j)<=min) min=*(a+i*n+j);
	 	 }
	 }
	 printf("\n\nGia tri nho nhat trong ma tran U la %d",min);
}


int check(int x)
{
	int OK=1;
	if  (x<2)
	{
		OK=0;
	}
	else
	{
		for (int i=2;i<x;i++)
		{
			if (x%i==0 && x!=2) 
			{
		   	   OK=0;
		  	   break;	
			}
		}
	}
	return OK;
}


void snt(int *a, int n)
{
	 printf("\n\nCac phan tu la so nguyen to trong ma tran U:\n\n");
	 int dem=0, tong=0;
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 if (check(*(a+i*n+j))==1)
	 	 	 {
	 	 	 	printf("%d  ",*(a+i*n+j));
	 	 	 	dem++;
	 	 	 	tong=tong+*(a+i*n+j);
	 	 	 }
	 	 }
	 }
	 printf("\n\nCo %d phan tu co gia tri la so nguyen to trong ma tran U va tong cua chung bang %d",dem,tong);
}


void timx(int *a, int n)
{
	 int x,OK=0;
	 printf("\n\nNhap x can tim : x="); scanf("%d",&x);
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 if (x==*(a+i*n+j))
	 	 	 {
	 	 	 	OK++;
	 	 	 	printf("\n\nx xuat hien tai dong thu %d, cot thu %d (vi tri U[%d][%d]) trong ma tran U",i+1,j+1,i,j);
	 	 	 }
	 	 }
	 }
	 if (OK==0) printf("\n\nx khong xuat hien trong ma tran U !");
}


void swap(int *x, int *y )
{
	 int tam;
	 tam=*x;
	 *x=*y;
	 *y=tam;
}

void sx(int *a, int n)
{
     for (int i=0;i<n;i++)
     {
     	  for (int j=0;j<n;j++)
     	  {
     	  	  for (int k=j+1;k<n;k++)
     	  	  {
     	  	  	  if ( *(a+j*n+i)>=*(a+k*n+i))
     	  	  	  {
     	  	  	  	 swap (a+j*n+i, a+k*n+i);
     	  	  	  }
     	  	  }
     	  }
     }
     for (int i=0;i<n;i++)
     {
     	  for (int j=0;j<n;j++)
     	  {
     	  	  for (int k=j+1;k<n;k++)
     	  	  {
     	  	  	  if ( *(a+i*n+j)>=*(a+i*n+k))
     	  	  	  {
     	  	  	  	 swap (a+i*n+j, a+i*n+k);
     	  	      }
     	  	  }
     	  }
     }
     printf("\n\nMang U sau khi sap xep :\n\n");
     for (int i=0;i<n;i++)
     {
     	 for (int j=0;j<n;j++)
     	 {
     	 	 printf("%d  ",*(a+i*n+j));
     	 }
      	 printf("\n\n");
     }
}



void tongdcc(int *a, int n)
{
	 int x=0;
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {  
		     if (i==j) x=x+*(a+i*n+j); 		
	 	 }
	 }
	 printf("\n\nTong cac phan tu nam tren duong cheo chinh cua ma tran U = %d",x);
}


void chan(int *a,int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
	 	for(int j=0;j<n;j++)
	 	{
		   if (i==j) 
		   {
		   	  for(int k=j+1;k<n;k++)
		   	  {
		   	  	 if (*(a+i*n+k)%2==0) dem++;
		   	  }
		   }
		}
    }
    if (dem==0) printf("\n\nKhong co phan tu nao la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran U !");
    else        printf("\n\nCo %d phan tu la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran U ma khong ke duong cheo chinh !",dem);
}


void avb(int *A, int *B, int *C, int M, int N)
{
	 printf("\n\nNhap ma tran A :");
	 for (int i=0;i<M;i++)
	 {
	 	 for (int j=0;j<N;j++)
	 	 {
	 	 	 printf("\n\nA[%d][%d]=",i,j); scanf("%d",A+i*N+j);
	 	 }
	 }
	 
	 printf("\n\nNhap ma tran B :");
	 for (int i=0;i<M;i++)
	 {
	 	 for (int j=0;j<N;j++)
	 	 {
	 	 	 printf("\n\nB[%d][%d]=",i,j); scanf("%d", B+i*N+j);
	 	 }
	 }
	 
	 printf("\n\nMa tran A :\n\n");
	  for (int i=0;i<M;i++)
	 {
	 	 for (int j=0;j<N;j++)
	 	 {
	 	 	 printf("%d  ",*(A+i*N+j));
	 	 }
	 	 printf("\n\n");
	 }
	 
	 printf("\n\nMa tran B :\n\n");
	  for (int i=0;i<M;i++)
	 {
	 	 for (int j=0;j<N;j++)
	 	 {
	 	 	 printf("%d  ",*(B+i*N+j));
	 	 }
	 	 printf("\n\n");
	 }
	 
	 for (int i=0;i<M;i++)
	 {
	 	 for (int j=0;j<N;j++)
	 	 {
	 	 	 *(C+i*N+j)=*(A+i*N+j)+*(B+i*N+j);
	 	 }
	 }
	 printf("\n\nTong hai ma tran A & B la :\n\n");
	 for (int i=0;i<M;i++)
	 {
	 	 for (int j=0;j<N;j++)
	 	 {
	 	 	 printf("%d  ",*(C+i*N+j));
	 	 }
	 	 printf("\n\n");
	 }
	 
	 if (M!=N) printf("\n\nKhong the tinh tich hai ma tran A va B do so dong cua ma tran A khong bang so cot cua ma tran B !");
	 else
	 {
	 	 for (int a=0;a<M;a++)
	 	 {
	 	 	 for (int b=0;b<N;b++)
	 	 	 {
	 	 	 	 *(C+a*N+b)=0;
	 	 	 }
	 	 }
	 	 for (int i=0;i<M;i++)
	 	 {
	 	 	 for (int j=0;j<N;j++)
	 	 	 {
	 	 	 	 for (int k=0;k<N;k++)
	 	 	 	 {
	 	 	 	 	 *(C+i*N+j)= *(C+i*N+j)+  (*(A+i*N+k) * *(B+k*N+j));
	 	 	 	 }
	 	 	 }
	 	 }
	 	 printf("\n\nGoi tich hai ma tran A & B la mot ma tran C. C la :\n\n");
	 	 for (int i=0;i<M;i++)
	 	 {
	 	 	 for (int j=0;j<N;j++)
	 	 	 {
	 	 	 	 printf("%d  ",*(C+i*N+j));
	 	 	 }
	 	 	 printf("\n\n");
	 	 }
	 	 
	 }
}

	

























































