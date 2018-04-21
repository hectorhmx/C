#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 1, b = 2, c = 3;
	int num[3]={a,b,c};

	int *_ptr_a = &a;
	int *_ptr_b = &b;
	int *_ptr_c = &c;
	for(int i=0; i < 3;i++)
	{
		printf("Dirección de num[%u]: %p\n",i,&num[i]);
	}

	(num == &num) && (&num[0] == &num)? printf("Hector tiene razón")

	return 0;
}