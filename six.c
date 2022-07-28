#include <stdio.h>
#include <math.h>
void check_prime(int ,int);
int main()
{
    int n,n1;
    printf("Enter the number\n");
    scanf("%d %d",&n,&n1);
    check_prime(n,n1);
    return 0;
}
void check_prime(int n1,int n2)
{
    int i,j;
    while (n1<= n2)
    {
        n1++;
        j=0;
        for (i = 2; i <=sqrt(n1); i++){
            if (n1 % i == 0)
            {
                j = 1;
                break;
            }
        }
        if (j == 0)
        {
            printf("%d ",n1);
        }
        
    }
}
