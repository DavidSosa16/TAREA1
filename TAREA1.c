#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
float biseccion(float xl,float xu,float e,bool *state);
float f_x(float x);

int main (void)
{
float xl,xu,e,state;
printf("vamos a calcular raiz de la funcion X^3+4X^2-10\n");
printf("dame el lado bajo de la funcion\n");
scanf("%f",&xl);
printf("dame el lado alto de la funcion\n");
scanf("%f",&xu);
printf("dame el error de la funcion\n");
scanf("%f",&e);
biseccion(xl,xu,e,&state);
}

float biseccion(float x_l,float x_u, float e, bool *state)
{float raiz,xr_ant=0,e_test,f_xr=0,f_xl,f_xu,xr;
f_xl=f_x(x_l);
f_xu=f_x(x_u);
xr=(x_l+x_u)/2;
f_xr=f_x(xr);
if(f_xl*f_xu<0)
    {if(f_xl*f_xr>0)
        {
          x_l=xr;
        }
     else if(f_xl*f_xr<0)
         {
           x_u=xr;
         }
    else
        {
         state=true;
         raiz=xr;
        }
    }
}


float f_x(float x)
{x=x^3+4(x^2)-10;
return(x);
}
