#include<stdio.h>
int main()
{
    int i, j, N;

    printf("Enter number of rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
     
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }

        
        for(j=i; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
