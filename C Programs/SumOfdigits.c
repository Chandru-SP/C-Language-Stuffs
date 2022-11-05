
#include <stdio.h>

int main() {
    
   int n;
   int t=0;
   
   printf("enter number:");
   scanf("%d",&n);
   const int x=n;
   
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
