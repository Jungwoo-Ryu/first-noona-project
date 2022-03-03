#include <stdio.h>
int main ()
{
    int N,K;
    scanf("%d %d", &N, &K);
    int coin[10]= {1,5,10,50,100,500,1000,5000,10000,50000};
    int count= 0;
    for(int i= N-1; i>=0; i--)
    {
        int temp;
        temp=K/coin[i];
        count+= temp;
        K= K%coin[i];
        
    }
    printf("%d", count);
    return 0;
    
}
