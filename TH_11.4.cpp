#include <stdio.h>
#define max 255



int main()
{
	char path[50], KQ[max+1];
	FILE *link;
	printf("\nNhap Link : ");  fflush(stdin);  gets(path);
	link=fopen(path,"at");
	if  (link==NULL)  printf("\nERROR");
	else
	{
		fprintf(link,"\nQuincy, son of Quincy");
		fprintf(link,"\nQuincy, son of Quincy");
		fclose(link);
	}
	link=fopen(path,"rt");
	if (link==NULL)  printf("\nERROR");
	else
	{
		printf("\n\n\nFile da chinh sua : \n");
		while (feof(link)==0)
		{
			  if(fgets(KQ,max,link)!=NULL) printf("%s",KQ);
		}
	fclose(link);
	}
}
