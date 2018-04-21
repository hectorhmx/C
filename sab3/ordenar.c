#include <stdio.h>
int arr[]={1,3,5,7,9,8,4,6,10};
int main()
{
	for(int i = 0;i<10;i++)
	{
		for(int j = i; j<10;j++)
		{
			if(j+1<9)
			{
					if(arr[j]>arr[j+1])
					{
						arr[j]=arr[j]*arr[j+1];
						arr[j+1]= (arr[j]/arr[j+1]);
						arr[j]=(arr[j]/arr[j+1]);
					}
			}
		}
	}
	for(int i=0;i<9;i++)
	{
		printf("	%d",arr[i]);
	}
	return 0;
}