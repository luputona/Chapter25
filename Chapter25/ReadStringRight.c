#include<stdio.h>
#include<stdlib.h>

char *ReadUserName2()
{
	char *name = (char*)malloc(sizeof(char)*30);
	printf("What's your name?");
	gets(name);

	return name;
}

void main()
{
	char *name1;
	char *name2;

	name1 = ReadUserName2();
	printf("name1 : %s \n", name1);
	name2 = ReadUserName2();
	printf("name2 : %s \n",name2);

	printf("again name1 : %s \n", name1);
	printf("again name2 : %s \n", name2);

	free(name1);
	free(name2);
}