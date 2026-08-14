//Insertion in array C code:

#include<stdio.h>
int main(){
    int a[100],n,i,value,pos;
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
    
    printf("enter the element to insert:");
    scanf("%d",&value);
    
    printf("enter the position to insert:");
    scanf("%d",&pos);
    
    if(pos>=n){
        printf("this postition does not exist");
    }
    
    else{
        for(i=n-1;i>=pos-1;i--){
            a[i+1]=a[i];
        }

        a[pos-1]=value;
        n++;
        printf("Array after insertion:\n");

        for(i = 0; i < n; i++){
            printf("%d ", a[i]);
        }

    }
    return 0;
}
