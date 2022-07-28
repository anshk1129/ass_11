#include <stdio.h>
#include <math.h>
void check_prime(int n);
int main()
{
    int n1;
    printf("Enter the number\n");
    scanf("%d", &n1);
    check_prime(n1);
    return 0;
}
void check_prime(int n)
{
    int i, j , k = 1,n1=1;
    while (k <= n)
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
            printf("%d\n",n1);
            k++;
        }
        // n++;
    }
}
