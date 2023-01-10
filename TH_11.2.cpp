#include <stdio.h>
#define MAX 255
int main()
{
	char link[50], KQ[MAX+1];
	FILE *fb;
	printf("\nNhap duong dan :  "); gets(link);
	fb=fopen(link,"rt");
	if (fb==NULL)  printf("\nERROR");
	else
	{
		while (feof(fb)==0)
		{
			  if(fgets(KQ,MAX,fb)!=NULL) printf("%s",KQ);
		}
	fclose(fb);
	}
}
