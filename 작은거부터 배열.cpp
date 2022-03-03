#include <stdio.h>
int main ()
{
	int i,j, temp, index, min;
	int array [10]= {2,5,4,1,3,7,4,10,9,8};
	for(i =0; i < 10; i++)
	{
		min= 9999;
		for(j= i; j <10; j++)
		{
			if(array[j]<min)
			{
				min = array[j];
				index= j;
			}
		}
		temp= array[i];
		array[i]= array[index];
		array[index]=temp;
	}
	for(i= 0; i<10; i++)
	{
		printf("%d ", array[i]);
	}
}

