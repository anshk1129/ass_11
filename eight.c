#include<stdio.h>
int fact(int);
int main(){
int n;
printf("Enter your series number \n");
scanf("%d",&n);
print_pascal(n);
return 0;
}
int combi(int n,int r){
    return (fact(n)/fact(n-r)/fact(r));
}
int fact(int n){
    int res=1,i;
    for(i=1;i<=n;i++){
     res=res*i;
    }
     return res;
}
void print_pascal(int n){
    int i,j,k=0,r;
    for(i=1;i<=n;i++){
        k=1;
        r=0;
        for(j=1;j<=2*n-1;j++){
            if(j>=n+1-i&&j<=n-1+i&&k){
               printf("%d",combi(i-1,r));
               r++;
               k=0;
            }
            else{
            k=1;
            printf(" ");}
        }
        printf("\n");
    }
}