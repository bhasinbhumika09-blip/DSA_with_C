//C code of creating an array:


#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    
    printf("enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("array is:");
    for(i=0;i<n;i++){
       printf("%d ",a[i]);
    }
    
    return 0;
}
