#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],sum = 0,i;
    for(i = 0; i<n; i++) scanf("%d",&arr[i]);
    for(i=0 ; i<n ; i+=2)
    {
        sum = sum + arr[i];
    }
    printf("%d\n",sum);
    return 0;
}

