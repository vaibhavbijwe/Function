#include<stdio.h>
void cylinder()
{
    float h,r,vol;
    printf("Enter the radius of the cylinder \t");
    scanf("%f",&r);
    printf("Enter the height of the cylinder \t");
    scanf("%f",&h);
    vol=3.14*r*r*h;
    printf("volume of the cylinder is %f \n \n",vol);
}
void cylinder1(float r,float h)
{
    float vol=3.14*r*r*h;
    printf("volume of the cylinder is %f \n \n",vol);
}
float cylinder2()
{
    float h,r,vol;
    printf("Enter the radius of the cylinder \t");
    scanf("%f",&r);
    printf("Enter the height of the cylinder \t");
    scanf("%f",&h);
    vol=3.14*r*r*h;
    return vol;
}
float cylinder3(float r,float h)
{
    float vol=3.14*r*r*h;
    return vol;
}
int main()
{
    printf("Function without parameters without return value \n");
    cylinder();

    printf("Function with parameters without return value \n");
    float r,h;
    printf("Enter the radius of the cylinder \t");
    scanf("%f",&r);
    printf("Enter the height of the cylinder \t");
    scanf("%f",&h);
    cylinder1(r,h);

    printf("Function without parameter with return type \n");
    float res1=cylinder2();
    printf("volume of the cylinder is %f \n \n",res1);

    printf("Function with parameter with return type \n");
    float rad,hig,res2;
    printf("Enter the radius of the cylinder \t");
    scanf("%f",&rad);
    printf("Enter the height of the cylinder \t");
    scanf("%f",&hig);
    res2=cylinder3(rad,hig);
    printf("volume of the cylinder is %f \n \n",res2);

    return 0;
}
    