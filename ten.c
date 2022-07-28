#include<stdio.h>
int fact(int);
void calc_series(int);
int main(){
int n;
printf("Enter your series number \n");
scanf("%d",&n);

calc_series(n);
return 0;
}
void calc_series(int n){
    int res=0;
    for(int i=1;i<=n;i++){
    res=res+fact(i);
    }
    printf("%d ",res);
}
int fact(int n){
    int res=1,i;
    for(i=1;i<=n;i++){
     res=res*i;
    }
    return res/n;
}