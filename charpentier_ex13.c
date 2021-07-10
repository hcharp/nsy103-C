#include <stdio.h>
#include <math.h>


void zerosolution(float delta)
{
	printf("\ndelta vaut %f\nzéro solution dans R\n\n", delta);
}

void unesolution(float a, float b, float c, float delta)
{
	float x1;
	if (a==0) x1 = -c/b;
	else x1 = -b / 2*a;
	printf("\ndelta vaut %f\nune seule solution x1 = %f\n\n",delta, x1);
}

void deuxsolutions(float a, float b, float c, float delta)
{
	float x1,x2;
	x1 = (-b + sqrt(delta)) / 2*a;
	x2 = (-b - sqrt(delta)) / 2*a;
	printf("\ndelta vaut %f\ndeux solutions x1 = %f et x2 = %f\n\n",delta, x1, x2);
}

void Rsolution()
{
	printf("\nl\'ensemble de solutions est R\n\n");
}


int main()
{
	float a, b, c;
	
	printf("Valeur de a : ");
	scanf("%f",&a);
	printf("Valeur de b : ");
	scanf("%f",&b);
	printf("Valeur de c : "); 
	scanf("%f",&c);
		
	float delta = b*b - 4*a*c;
	
	if (a == 0.0)
	{
		if (b == 0.0)
		{
			if (c == 0.0)
			{
				Rsolution();
			}
			else
			{
				zerosolution(delta);
			}
		}
		else
		{
			unesolution(a,b,c, delta);
		}
	}
	else
	{		
		if (delta < 0)
		{
			zerosolution(delta);
		}
		else if (delta == 0)
		{
			unesolution(a,b,c, delta);
		}
		else
		{
			deuxsolutions(a,b,c, delta);
		}
	}

}