#include<stdio.h>
int main(){
    int n,i,a=0,b=0;
    printf("ENTER THE n VALUE:");
    scanf("%d",&n);
    int arr[n],even[10],odd[10];
    printf("ENTER THE ELEMENTS:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even[a]=arr[i];
            a++;
        }
        else if(arr[i]%2!=0){
            odd[b]=arr[i];
            b++;
        }
    }
    printf("\n========================================\n");
    printf("    THE EVEN NUMBERS ARE:");
    for(i=0;i<a;i++){
        printf("%d ",even[i]);
    }
    printf("\n    the number of even elements are:%d",a);
    printf("\n========================================\n");
    printf("\n    THE ODD NUMBERS ARE:");
    for(i=0;i<b;i++){
        printf("%d ",odd[i]);
    }
    printf("\n    the number of odd elements are:%d",b);
    printf("\n========================================\n");
}