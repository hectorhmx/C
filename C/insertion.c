#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	fp=fopen("numeros.txt","r");
	int i,arr[10],j,arj[100],z;
	for (i=0;i<10;i++)
	{
		fscanf(fp,"%d,",&arr[i]);
		printf("%d ",arr[i]);
	}
	printf("\n");
	getch();
	//insertion sort
	int aux,top=1;
	i=1;
	while (i<10)
	{
		if(arr[i]>=arr[i-1] || i<1)
		{	
			i=top++;
		}
		else if(arr[i]<arr[i-1])
		{
			aux=arr[i];
			arr[i]=arr[i-1];
			arr[i-1]=aux;
			top=i;
			i=i-1;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d  ",arr[i]);
	}
	
	fclose(fp);
	return 0;
}
