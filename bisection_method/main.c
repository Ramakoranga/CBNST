#include <stdio.h>
#include <math.h>


float f(float x)
{
    return x*x*x-4*x-9;
}
int main()
{
    float x0,x1;
    int flag =1;

      do
      {
        printf("enter values of x0 and x1 \n");
      scanf("%f%f",&x0,&x1);
        if(f(x0)*f(x1)<0){

            flag=0;
          }
          else
            printf("invalid roots\n");
      }while(flag);
       flag=1;
      float err,x2;
      int i=0;
      printf("enter the  allowed err\n");
        scanf("%f",&err);

      do{

         i++;
        x2=(x0+x1)/2;
    printf("no. of iterations :%d, roots are : %f %f,value at current iteration %f\n",i,x0,x1,f(x2));
        if(fabs(f(x2))<err)
        {
            flag =0;
            printf("roots of equations are : %f ",x2);
        }
        if(f(x0)*f(x2)<0)

            x1=x2;


      else if(f(x2)*f(x1)<0)

        x0=x2;

    }while(flag);

    return 0;
}
