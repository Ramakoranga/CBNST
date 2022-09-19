
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float x1,x2,x3;
    float f1,f2,f3;
    int i=0;
    printf("enter the value of x1 and x2\n");
    scanf("%f%f",&x1,&x2);
    do
    {
        f1=(x1*x1*x1)-(4*x1)-9;
        f2=(x2*x2*x2)-(4*x2)-9;
        x3=(x1+x2)/2;
        f3=(x3*x3*x3)-(4*x3)-9;
        if(f1*f3<0)
        {
            x2=x3;
        }
        else
        {
            x1=x3;
        }
        i++;
        printf("iteration no. = %d\n",i);
        printf("root of func. = %f\n",x3);
       // printf("value of func = %f",f3);
    }
    while(fabs(f3)>0.001);
    getch();
}

