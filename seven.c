#include<stdio.h>
void print_fibo(int);
int main(){
int n;
printf("Enter how many series you want to print\n");
scanf("%d",&n);
print_fibo(n);
return 0;
}
void print_fibo(int n){
    int a=0,b=1,c;
    while(n>0){
         printf("%d ",a);
         c=a+b;
         a=b;
         b=c;
        n--;
    }
}