#include<stdio.h>
#include<conio.h>
int main() {
   int reminder, sum=0, i, originalnum;
    printf(" enter number: ");
    scanf("%d",&originalnum);
    for (i = 1; i <= originalnum/2; i++)
        {
            reminder = originalnum % i;
	        if (reminder == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == originalnum)
            printf("given no. is perfect number");
        else
            printf("given no. is not a perfect number");
    getch();
} 
