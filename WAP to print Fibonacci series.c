#include<stdio.h>
int getfib(int n){
    if (n <= 1)
        return n;
    return getfib(n-1) + getfib(n-2);
}
int main()
{
    int n=5,i;
    for(i=0;i<n;i++)
        printf("%d \n",getfib(i));
    return 0;

}