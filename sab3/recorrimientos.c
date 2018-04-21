#include <stdio.h>

int a=5;
int main()
{
	int  arr[]={1,2,3,4,5};
	divisiónA(arr[0],(arr[0]+arr[4])/2);
	return 0;
}
void divisiónA(int* arr,int n)
{
	if (*(arr+n)==a)
	{
		printf("Este es el valor%d",n);
	}
	else
	{
		(*(arr+n)>a)? divisiónA(arr,(n/2)): divisiónA(arr,(n/2)+n);
	}
}
