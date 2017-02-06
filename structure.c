/*
name:anuj shrestha
subject:programmingfundamental
program:structure
labsheetno:24
date:6th feb
*/

#include<stdio.h>
struct student
{
	int id;
	int registration_number;
	float fee;
};

	int main()
{
	struct student anuj;
	anuj.id=100;
	anuj.registration_number=10010;
	anuj.fee=5555.54;
	printf("anuj id=%d\nanuj registration.number=%d\nanuj fee=%f\n",anuj.id,anuj.registration_number,anuj.fee);
	return 0;
} 


