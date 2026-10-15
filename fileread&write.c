#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp;
	char text[30];
	fp=fopen("sample.text","w");
	if(fp==NULL)
	{
		printf("file can't open");
		return 1;
	}
	printf("enter the text");
	scanf("%[^\n]",text);
	fprintf(fp,"%s",text);
	fclose(fp);
	fp=fopen("sample.txt","r");
	if(fp==NULL)
	{
		printf("file can't open");
		return 1;
	}
	printf("\ncontent of the file : \n");
	while(fgets(text,sizeof(text),fp)!=NULL);
	{
		printf("%s",text);
	}
	fclose(fp);
	return 0;
}
