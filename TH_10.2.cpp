#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct SINHVIEN
{
	 	char  ID[20];
	 	char  NAME[100];
	 	char  S[10];
	 	float M;
	 	float LR;
	 	float E;
	 	float OVR;
	 	char  RANK[20];
}sv;


void    *malloc(size_t size);
void    in(sv *DS, int n);
void    nhap(sv *X);
void	xuat(sv *X);
void	out(sv *DS, int n);

int main()
{
	int n,key;
	sv *DS,a;
	DS=(sv*)malloc(1000*sizeof(sv)*100);
	while(true)
   	{
        system("cls");
        printf("\t\t\t\t\t************************************\n");
		printf("\t\t\t\t\t**      DANH SACH SINH VIEN       **\n");
		printf("\t\t\t\t\t**   1.Nhap thong tin sinh vien   **\n");
		printf("\t\t\t\t\t**   2.Xep hang diem sinh vien    **\n");
		printf("\t\t\t\t\t**   0.Thoat                      **\n");
		printf("\t\t\t\t\t************************************\n");
		fflush(stdin);
		printf("\n \t\t\t\t\t\tAN PHIM CHON: ");
		scanf("%d",&key);
		switch(key)
              {
           	  case 1:
           	  		fflush(stdin);
           	  		system("cls");
           	  		printf("NHAP SO LUONG SINH VIEN : ");  scanf("%d",&n);
           	  		in(DS,n);
           	  		out(DS,n);
					printf("\n\nAN PHIM BAT KY DE TIEP TUC !");
           	  		getch();
           	  		break;
			  case 2:
			  		fflush(stdin);
			  		out(DS,n);
			  		printf("\n\nAN PHIM BAT KY DE TIEP TUC !");
			  		getch();           	  		
					break;
			  case 0:
			  		printf("BYE BYE !");
					exit(1);
			  default:
					printf("\nKhong co chuc nang nay!");
					printf("\n\nAN PHIM BAT KY DE TIEP TUC !");
					getch();
					break;
		      }
   	  }
}

void nhap(sv *X)
{
	 fflush(stdin);
	 printf("MA SO SINH VIEN : "); gets(X->ID);
	 fflush(stdin);
	 printf("\nHO & TEN : "); gets(X->NAME);
     fflush(stdin);
     printf("\nGIOI TINH. NAM NHAP M, NU NHAP F : "); gets(X->S);
     fflush(stdin);
     printf("\nDIEM TOAN : ");  scanf("%f",&X->M);
     while (X->M<0 || X->M>4)
     {
     	   printf("\nGIA TRI KHONG PHU HOP. NHAP LAI DIEM TOAN : ");  scanf("%f",&X->M);
     }
     fflush(stdin);
     printf("\nDIEM VAN : ");   scanf("%f",&X->LR);
     while (X->LR<0 || X->LR>4)
     {
     	   printf("\nGIA TRI KHONG PHU HOP. NHAP LAI DIEM VAN : ");  scanf("%f",&X->LR);
     }
     fflush(stdin);
     printf("\nDIEM ANH VAN : "); scanf("%f",&X->E);
      while (X->E<0 || X->E>4)
     {
     	   printf("\nGIA TRI KHONG PHU HOP. NHAP LAI DIEM ANH VAN : ");  scanf("%f",&X->E);
     }
     X->OVR=(X->M*2+X->LR*2+X->E)/5;
     fflush(stdin);
     if((X->OVR)<1.5) strcat(X->RANK,"Yeu");
     else
     {
     	 if((X->OVR)<2.5) strcat(X->RANK,"Trung Binh");
     	 else
     	 {
     	 	if((X->OVR)<3.5) strcat(X->RANK,"Kha");
     	 	else
     	 	{
     	 		if((X->OVR)<3.7) strcat(X->RANK,"Gioi");
     	 		else			 strcat(X->RANK,"Xuat Sac");
     	 	}
     	 }
     }
     
}

void in(sv *DS, int n)
{
	 for (int i=0;i<n;i++)
	 {
	 	 system("cls");
	 	 printf("NHAP THONG TIN SINH VIEN THU %d : \n\n",i+1);
	 	 nhap(DS+i);
	 }
}


void xuat(sv *X)
{
	 printf("|%s             |%s                              |%s     |%.2f |%.2f     |%.2f |%.2f     |%s                 |",X->ID,X->NAME,X->S,X->M,X->LR,X->E,X->OVR,X->RANK);
	 printf("\n|------------------|----------------------------------|-------|------|------------|---------|---------|-------------------|\n");
}

void out(sv *DS, int n)
{
	system("cls");
	printf("\t\t\t\t\t\tDANH SACH DA NHAP :\n");
	printf("\n\n|-------------------------------------------------------------------------------------------------------------------------|\n");
    printf("|        ID        |           FULL NAME              |  SEX  | MATH | LITERATURE | ENGLISH | OVERALL |      RANKING      |");
	for(int i=0;i<n;i++)
	{
	  printf("\n|------------------|----------------------------------|-------|------|------------|---------|---------|-------------------|\n");
		xuat(DS+i);
    }
}








































