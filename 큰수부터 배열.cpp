#include <Stdio.h>

	int main ()
	{
		int i,j,temp,index,max;
		int array[10]= {3,2,4,1,5,7,6,9,10,8};
		for(i=0;i<10;i++)
		{
			max= -999;
			for(j=i; j<10; j++)
			{
				if(max<array[j])
				{
					max= array[j];
					index= j;
				}
			}
			temp= array[i];
			array[i]= array[index];
			array[index]= temp;
		}
		for(i=0;i<10; i++)
		{
			printf("%d ", array[i]);
		}
		return 0;
	}

