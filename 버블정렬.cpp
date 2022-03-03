#include <stdio.h>
int main ()
{
	// 3,2,5,4,1,7, 8, 9, 10, 6
	// 2,3
	int i,j, temp;
	int array[10]= {2,3,5,4,1,7, 8, 9, 10, 6};
	for(i=0; i< 9; i++)
	{
		j=i;
		while(array[j]<array[j+1])
		{
			temp= array[j];
			array[j]= array[j+1];
			array[j+1]= temp;
			j--;
			if(j<0)
			{
			 break;
			}
		}
		
	}
	for(i=0; i<10; i++)
		{
			printf("%d ", array[i]);
		}
	
	return 0;
} 
