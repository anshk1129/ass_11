#include<stdio.h>
int cal_lcm(int n1,int n2);
int main(){
int n1,n2;
printf("Enter the numbers\n");
scanf("%d %d",&n1,&n2);
printf("lcm is %d",cal_lcm(n1,n2));
return 0;
}
int cal_lcm(int n1,int n2){
    int i,j;
    for(i=2;i<n1*n2;i++){
         if(i%n1==0&&i%n2==0){
            return i;
         }
    }
}
