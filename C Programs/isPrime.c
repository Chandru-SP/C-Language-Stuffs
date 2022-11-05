
#include <stdio.h>

int main() {
    // Write C code here
   int n;
   int t=0;
   
   printf("enter number:"); //get input from user
   scanf("%d",&n);
   const int x=n; // stores the user input in const for use it in output 
   
   while(1){
       if(n>0){
           t+=n%10;
           n=(n-n%10)/10;
           
       }
       else{
           printf("sum of digit of number %d is:: %d",x,t);
           break;
       }
       }
       return 0;
