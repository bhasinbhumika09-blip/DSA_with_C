//Binary search in array C code:

#include<stdio.h>
int main(){
    int a[10],n,i,value,found=0,beg,end,mid;
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
    
    beg=0;
    end=n-1;
    while(beg<=end){
        mid=(beg+end)/2;
        
        if(a[mid]==value){
            found=1:
            break;
        }
        
        else if(a[mid]<value){
            beg=mid+1;
        }
        
        else{
            end=mid-1;
           }
    }
    
    if(found==1){
        printf("element found at %d",mid+1);
    }
    
    else{
        printf("element not found");
    }
    
    
    
    return 0;
}
