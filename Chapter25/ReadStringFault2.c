#include<stdio.h>

char name[30];

char *ReadUserName1()
{
	printf("What's your name? ");
	gets(name);

	return name;
}

void main2()
{
	char *name1;
	char *name2;

	name1 = ReadUserName1();
	printf("name1 : %s \n", name1);

	name2 = ReadUserName1();
	printf("name2 : %s \n", name2);

	printf("name1 : %s \n", name1);
	printf("name2 : %s \n", name2);

}