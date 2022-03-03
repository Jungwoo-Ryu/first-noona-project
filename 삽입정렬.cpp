#include <stdio.h>
int main ()
{
	int i,j, temp;
	int array[10]= {4,3,6,1,2,5,8,7,10,9};
	// 3 4 6 1
	for(i = 0; i<9;i++)
	{	 
		for(j=i; j>=0; j--)
		{
			if(array[j]>array[j+1])
			{
				temp= array[j];
				array[j]= array[j+1];
				array[j+1]= temp;
			}
		}
	}
	for(i=0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}
