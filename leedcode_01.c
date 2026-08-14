// Given an integer array nums, return true if any value appears atleast twice in the array, and return false if every element is distinct.
// Input: nums = [1,2,3,1]
// Output: true
// Explanation:The element 1 occurs at the indices 0 and 3.

#include<stdio.h>
int main(){
    int a[10],i,n,j,found=0;
    printf("Enter legth of array:");
    scanf("%d",&n);
    
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                found=1;
                break;
            }
        }
        if(a[i]!=a[j]){
                found=0;
                break;
        }
    }
    if(found==1){
        printf("true");
    }
    else if(found==0){
        printf("false");
    }
    
    return 0;
}
