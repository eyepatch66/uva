#include<stdio.h>
#include<string.h>
int main (){

long long int i,n,arr[100],amount;
while (scanf("%lld",&n)==1){
    long long int sum=0;
    for (i=0;i<n;i++){
        scanf("%s",&arr);
        if (strcmp(arr,"report")==0)
            printf("%lld\n",sum);
        else if (strcmp(arr,"donate")==0){
            scanf("%lld",&amount);
            sum+=amount;
        }
    }
}
return 0;
}
