#include<stdio.h>
#include<math.h>
int getarm(int n)
{
    int temp,a=0,b;
    temp=n;
    while (n !=0)
    {
        n/=10;
        a++;
    }
    n=temp;
    int sum=0;
    while (n!=0)
    {
        b=n%10;
        sum+= pow(b,a);
        n/=10;
    }
    return sum==temp;
        
}
int main()
{   int n;
    printf("Enter a Three digit intrger No ");
    scanf("%d",&n);
    if(getarm(n)){
        printf("%d is a Armstrong number \n",n);}
        else{
            printf("%d is not Armstrong Number \n",n);
        }
        return 0;
    }
