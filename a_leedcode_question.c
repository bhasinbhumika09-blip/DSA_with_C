###leetcode Phli br khud solve kiya ek br me



// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].


// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

#include<stdio.h>
int main(){
    int digits[20],i,n;
    printf("enter total digits of number:");
    scanf("%d",&n);
    
    printf("enter each digits of the number:");
    for(i=0;i<n;i++){
        scanf("%d",&digits[i]);
    }
    
    if(digits[n-1]<9){
        digits[n-1]=digits[n-1]+1;
    }
    else if(digits[n-1]==9){
        digits[n-1]=0;
        digits[n-2]=digits[n-2]+1;
    }
    
    printf("the number is:");
    for(i=0;i<n;i++){
        printf("%d",digits[i]);
    }
    
    return 0;
}
