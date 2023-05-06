/*
 * main.c
 *
 *  Created on: 14-Apr-2023
 *      Author: vvenu
 */



#include <main.h>

/*
int add(int *arr)
{
	int i,j =0;
	for(i = 0; *arr != '\0'; i++)
	{
		j +=  *arr++;

		printf(" The return value is %d \t %d, \n", i,j);
	}

	printf(" The return value is %d, \t", j);
	return j;
}


int main()
{
	int i,n;
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	n = sizeof(arr)/sizeof(arr[0]);

	i = add(arr);

	printf(" The return value is %d", i);
	return 0;
}

*/


//char* getName();


typedef struct {

	int (*getID)(int);
	char (*getName)(char*);
	int Id;
	char* Name;

}detail;

int getID(int x){

	detail d1;

	d1.Id = 0x4;

	x += d1.Id;

	return x;

}

inline char* getName(char* Name){

	 static char* Nam = "VenuGopal";

	 Name = Nam;
	 return Name;
}



int main(){

	int y;
	char* str;
	char a = 'X';
	char b = 'Y';

	int i = 10;
	int j = 20;
	detail d1;
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	//d1.getID = getID;
	//d1.getName = (char*) getName;
	static int x = 1;

	const char *s1 = &a;
	char* const s2 = &b;

	const int *l = NULL;
	int* const m = &j;

	s1 = &b;
	l = &i;
	*m = 22;
	//
	printf("The value is S1 %s, %d \n", s1, *l);
	*s2 = 'L';
	printf("The value is S2 %s, %d \n", s2, *m);

	printf("The value is S2  %d \n", *m);
	d1.getID=getID;
	y = (int)d1.getID(x);

	d1.getName = getName;

	str = getName(d1.Name);
	printf("The id is %d and Name %s ", y, str);
	printf(" The return value is %s", *arr, sizeof(arr));

}


