#include <stdio.h>
#include <time.h>


int main()
{
	int a,i,arr[] = {1,4,6,7,2,9,5,3,8};
	scanf("%d",&a);
	clock_t inicio = clock();
	int cont = 0;
	for(i = 0; i<9;i++)
	{
		if(arr[i]==a){
			printf("elemento encontrado\n");
			clock_t fin =clock();
		double tiempo = (double)(fin-inicio)/CLOCKS_PER_SEC;
		printf("%f \n",tiempo);
			return 0;
		}
		else{
			cont++;
		}
	}
	(cont == 9 )? printf("valor no encontrado\n"): printf("") ;
	clock_t fin =clock();
	double tiempo = (double)(fin-inicio)/CLOCKS_PER_SEC;
	printf("%f \n",tiempo);

	return 0;
}
