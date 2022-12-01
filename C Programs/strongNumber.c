#include <stdio.h>
int main()
{
    int num,temp,sum=0,store=0;
    printf("enter the number:");
    scanf("%d",&num);
    temp=num;

    while(num>0){
       sum=num%10;
       store=store+fact(sum);

       num=num/10;


    }
    if(temp==store)
        printf("strong number..");
    else
        printf("not a strong number");


    return 0;
}

int fact(int n)
{
    int i,f=1;

    for(i=n;i>0;i--)
        {
         f=f*i;

        }
    return f;
}
