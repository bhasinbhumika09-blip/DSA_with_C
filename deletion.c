//Deletion in array C code:

#include<stdio.h>
int main(){
    int a[10],n,i,value,found=0,pos;
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
    
    printf("enter the element to delete:");
    scanf("%d",&value);
   
   for(i=0;i<n;i++){
       if(a[i]==value){
           found=1;
           pos=i;
           break;
       }
   }
   
   if(found=1){
       for(i=pos;i<n-1;i++){
           a[i]=a[i+1];
       }
       n--;
       printf("Array after deletion:\n");
            for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
   }
   
   else{
       printf("element not found");
   }
    return 0;
}
