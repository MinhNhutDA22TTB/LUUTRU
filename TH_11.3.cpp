#include <stdio.h>
#include <stdlib.h>


int main()
{
	int *a;
	int m,n;
	FILE *fb;
	char link[50];
	printf("\nNhap Link : ");
	fflush(stdin);
	gets(link);
	fb=fopen(link,"rt");
	if (fb==NULL) printf("\nERROR");
	else 
	{
	   fscanf(fb,"%d",&m); fscanf(fb,"%d",&n);
	   a=(int*)malloc(sizeof(int)*m*n);
	   while (!feof(fb))
	   {
		     for (int i=0;i<m;i++)
		     {
		     	 for(int j=0;j<n;j++) fscanf(fb,"%d",a+i*n+j);
		     }  	 
	   }
	         printf("\nDanh sach cac so vua doc : \n");
	         for (int i=0;i<m;i++)
			 {
	         	 for (int j=0;j<n;j++) printf("%5d",*(a+i*n+j));
	         	 printf("\n");
	   		 }
	   fclose(fb);
	}
	
}

	
