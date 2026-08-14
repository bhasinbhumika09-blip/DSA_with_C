//Linear Search in array C code:


#include<stdio.h>
int main(){
    int a[100],n,i,value,found=0;
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
    
    printf("enter the element to search:");
    scanf("%d",&value);
    
    for(i=0;i<n;i++){
        if(a[i]==value){
            found==1;
            printf("element found at %d",i+1);
            break;
        }
       
       else if(found==0){
           printf("element is not in array");
           break;
       }
       
    }
    return 0;
}
