#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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
	//selection sort
	for(i=0;i<10;i++)
	{
		j=i;
		while(j<10)
		{
			if(arr[i]>=arr[j]){
				z=arr[i];
				arr[i]=arr[j];
				arr[j]=z;
			}
			j++;
		}
		printf("%d ",arr[i]);
	}
	fclose(fp);
return 0:
}
