#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
typedef struct sinhvien
{
		char ma[50];
		char hoten[50];
} SV;


void write(char *name)
{
	 FILE *f;
	 int n,i;
	 SV sv;
	 f=fopen(name,"ab"); printf("Number of Student : "); scanf("%d",&n);
	 for (i=0;i<n;i++)
	 {
	 	 printf("\nSinh vien thu %d\n",i+1);
	 	 fflush(stdin);
	 	 printf("- MSSV :");
	 	 gets(sv.ma);
	 	 printf("\nHO TEN : ");
	 	 gets(sv.hoten);
	 	 fwrite(&sv,sizeof(sv),1,f);
	 }
	 fclose(f);
	 printf("\nClick anywhere in keyboard to continue !");
	 getch();
}

void read(char *name)
{
	 FILE *f;
	 int n,i;
	 SV sv;
	 f=fopen(name,"rb");
	 fread(&sv,sizeof(sv),1,f);
	 while (!feof(f))
	 {
	 	   printf("%s  |   %s\n",sv.ma,sv.hoten);
	 	   fread(&sv,sizeof(sv),1,f);
	 }
	 fclose(f);
	 printf("\nClick anywhere in keyboard to continue !");
	 getch();
}
	 
void  search(char *name)	 
{
	  char mssv[10];
	  FILE *f;
	  int found=0;
	  SV sv;
	  fflush(stdin);
	  printf("ID Sinh vien can tim  :");
	  gets(mssv);
	  f=fopen(name,"rb");
	  while (!feof(f)&&found==0)
	  {
	  	    fread(&sv,sizeof(sv),1,f);
	  	    if(strcmp(sv.ma,mssv)==0) found=1;
	  }
	  fclose(f);
	  if(found==1) printf("Tim thay sv co ID %s. Ho ten la %s",sv.ma,sv.hoten);
	  else printf("NOT FOUND>ERROR>$)$404");
	  printf("\nClick anywhere in keyboard to continue !");
	  getch();
}
	 
int  main()
{
				printf("\t\t1.NHAP DSSV\n");
		 		printf("\t\t2.IN DSSV\n");
		 		printf("\t\t3.TIM KIEM\n");
		 		printf("\t\t4.THOAT\n\n");
	 	int key;
		for(;;)
		{
		 	   	printf("\n\nBAM CHON :  "); scanf("%d",&key);
		 	   	fflush(stdin);
		 	   	if(key==1) write("sv.txt");
		 	   	else if (key==2) read("sv.txt");
		 	   	else if (key==3) search("sv.txt");
		 	   	else break;
		}
	 	   	
}	 
	 
	 
	 
	
