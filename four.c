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
    int i, j = 0;
    while (1)
    {
       n++;
        for (i = 2; i <=sqrt(n); i++)
        {
            if (n % i == 0)
            {
                j = 1;
                break;
            }
        }

            if (j == 0)
            {
                printf("next Prime %d\n",n);
                break;
            }
            else
            j=0;
        
    }
}