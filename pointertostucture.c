#include<stdio.h>
#include<stdlib.h>
struct student
{
	int rollno;
	char name[30];
	float mark;
};
int main()
{
	struct student s;
	struct student *ptr;
	ptr=&s;
	printf("enter roll no : ");
	scanf("%d",&ptr->rollno);
	printf("enter the name :");
	scanf("%s",&ptr->name);
	printf("enter the mark");
	scanf("%f",&ptr->mark);
	printf("student details\n");
	printf("rollno=%d\n",ptr->rollno);
	printf("name=%s\n",ptr->name);
	printf("mark=%f\n",ptr->mark);
	return 0;
	
}
