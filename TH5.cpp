#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

void nhap      (char S1[50], char S2[50]);
void xuat      (char S1[50], char S2[50]);
void dem       (char S1[50], char S2[50]);



int main()
{
	char S1[50], S2[50];
	nhap(S1,S2);//1
	xuat(S1,S2);//2
	dem(S1,S2);
	
}


void nhap(char S1[50], char S2[50])//1
{
	 printf("Nhap chuoi S1 :\n\n"); gets(S1);
	 printf("\n\n");
	 printf("Nhap chuoi S2 :\n\n"); gets(S2);

}



void xuat(char S1[50], char S2[50])//2
{
	 int i;
	 printf("\n\nXuat chuoi chuan S1 :");
	 printf("\n\n");
	 for (i=0;i<strlen(S1);i++)
	 {
	 	 if (S1[0]==' ')
	 	 {
	 	 	for (int j=i;j<strlen(S1);j++)
	 	 	{
	 	 		S1[j]=S1[j+1];
	 	 	}
	 	 i--;
	 	 }
     }
     for (i=0;i<strlen(S1);i++)
     {
	 	 if (S1[i]==' ' && S1[i+1]==' ')
	 	 {
	 	 	for (int j=i;j<strlen(S1);j++)
	 	 	{
	 	 		S1[j]=S1[j+1];
	 	 	}
	 	 i--;
		 }
	 }
	 for (i=0;i<strlen(S1);i++)
	 {
	 	 if (S1[strlen(S1)-1]==' ')
	 	 {
	 	 	S1[strlen(S1)-1]='\0';
	     }
     }
	 strlwr(S1);
	 S1[0]=S1[0]-32;
	 for (i=0;i<strlen(S1);i++)
	 {
	 	 if (S1[i]==' ' && S1[i+1]!=' ')
	 	 {
	 	 	S1[i+1]=S1[i+1]-32;
	 	 }
	 	 
	 }
	 puts(S1);
	 
	 printf("\n\nXuat chuoi chuan S2 :");
	 printf("\n\n");
	 for (i=0;i<strlen(S2);i++)
	 {
	 	 if (S2[0]==' ')
	 	 {
	 	 	for (int j=i;j<strlen(S2);j++)
	 	 	{
	 	 		S2[j]=S2[j+1];
	 	 	}
	 	 i--;
	 	 }
     }
     for (i=0;i<strlen(S2);i++)
     {
	 	 if (S2[i]==' ' && S2[i+1]==' ')
	 	 {
	 	 	for (int j=i;j<strlen(S2);j++)
	 	 	{
	 	 		S2[j]=S2[j+1];
	 	 	}
	 	 i--;
		 }
	 }
	 for (i=0;i<strlen(S2);i++)
	 {
	 	 if (S2[strlen(S2)-1]==' ')
	 	 {
	 	 	S2[strlen(S2)-1]='\0';
	     }
     }
	 strlwr(S2);
	 S2[0]=S2[0]-32;
	 for (i=0;i<strlen(S2);i++)
	 {
	 	 if (S2[i]==' ' && S2[i+1]!=' ')
	 	 {
	 	 	S2[i+1]=S2[i+1]-32;
	 	 }
	 	 
	 }
	 puts(S2);
}


void dem(char S1[50], char S2[50])
{
	 char Sphu[50];
	 int dem1=0;
	 int dem2=0;
	 if (strlen(S1)<strlen(S2)) printf("\n\nChuoi S2 khong xuat hien trong chuoi S1");
	 else
	 {
	 	for (int i=0;i<strlen(S1)-strlen(S2);i++)
	 	{
	 		if (S2[0]==S1[i])
	 		{
	 		   for (int j=i;j<strlen(S1);j++)
	 		   {
	 		   	   Sphu[j-i]=S1[j];
	 		   }
	 		   
	 		   
	 		   
	 		   for (int k=0;k<strlen(Sphu);k++)
	 		   {
	 		   	   if (S2[k]!=Sphu[k]) dem1++;
	 		   }
	 		   if (dem1==0) dem2++;
	 		   dem1=0;
	 		   fflush(stdin);
	 		   
	 		}
	 		
	 	}
	 	
	 	printf("\n\nSo lan xuat hien cua chuoi S2 trong chuoi S1 = %d",dem2);
	 }
}



















