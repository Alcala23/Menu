#include "stdio.h"
#include "conio.h"

int main()
{
	int opcion;
	
	printf ("Seleccionar una opcion\n");
	printf (" <1> Suma, resta y multplicacion de 5 numeros\n");
	printf (" <2> Suma, resta y multplicacion de 5 numeros a eleccion\n");
	printf (" <3> Suma de 2 numeros\n");
	printf (" <4> Suma de 2 numeros a eleccion\n");
	printf (" <5> Area de un circulo\n");
	printf (" <6> Area de un terreno\n");
	printf (" <7> Calcular area de un terreno\n");
	printf (" <8> °C a °F\n");
	printf (" <9> F° a C°\n");
	printf (" <10> Calcular velocidad\n");
	printf (" <11> Calcular distancia\n");
	printf (" <12> Calcular tiempo\n");
	printf (" <13> Dolares\n");
	printf (" <14> Pesos\n");
	printf (" <15> SALIR\n");
	
	scanf("%d",&opcion);
	
	if (opcion == 1)
	
	{
int a;
int b;
int c;
int d;
int e;
int suma;
int resta;
int multiplicacion;
a=2;
b=3;
c=5;
d=7;
e=10;
suma=a+b+c+d+e;
resta=a-b-c-d-e;
multiplicacion=a*b*c*d*e;
	printf("LA SUMA DE LOS NUMEROS ES %d\n",suma);

	printf("LA RESTA DE LOS NUMEROS ES %d\n",resta);
	
	printf("LA MULTIPLICACION DE LOS NUMEROS ES %d",multiplicacion); 
}

if (opcion==2)

{
int a;
int b;
int c;
int d;
int e;
int suma;
int resta;
int multiplicacion;

	printf("Dame el primer numero ");
	scanf("%d",&a);

printf("Dame el segundo numero ");
	scanf("%d",&b);
	
		printf("Dame el tercer numero ");
	scanf("%d",&c);

	printf("Dame el cuarto numero ");
	scanf("%d",&d);

	printf("Dame el quinto numero ");
	scanf("%d",&e);

suma=a+b+c+d+e;
resta=a-b-c-d-e;
multiplicacion=a*b*c*d*e;

	printf("LA SUMA DE LOS NUMEROS ES %d\n",suma);

	printf("LA RESTA DE LOS NUMEROS ES %d\n",resta);
	
	printf("LA MULTIPLICACION DE LOS NUMEROS ES %d",multiplicacion); 
}

if (opcion==3)

{
	int a;
	int b;
	int suma;
	a=2;
	b=3;
	suma=a+b;
	
	printf("La suma es %d",suma);
	
}

if (opcion==4)

{
int a;
int b;

int suma;

	printf("Dame el primer numero ");
	scanf("%d",&a);

printf("Dame el segundo numero ");
	scanf("%d",&b);

	suma=a+b;
	
	printf("La suma es %d",suma);
	
}

if(opcion==5)

{
	float r;
	float pi;
	float area;
	pi=3.1416;
	
	printf("Radio del circulo: ");
	scanf("%f",&r);
	
	area= pi*(r*r);
	
	printf("Area: %.2f",area);
	
}

if(opcion==6)

{
	float l;
	float a;
	float area;

	l=200;
	a=40;
	area= l*a;
	
	printf("El area de un terreno de 200x40 es : %.0f m²",area);
}

if(opcion==7)

{
	float l;
	float a;
	float area;

	printf("Largo de tu terreno: ");
	scanf("%f",&l);
	
	printf("Ancho de tu terreno: ");
	scanf("%f",&a);
	
	area= l*a;
	
	printf("Area: %.2f m²",area);
}

if(opcion==8)

{
	float a;
	float fahrenheit;
	
	printf("Celsius: ");
	scanf("%f",&a);
	
	fahrenheit=a*1.8+32;
	
	printf("fahrenheit: %.2f",fahrenheit);
	
}

if(opcion==9)

{
		float a;
		float celsius;
	
	printf("Fahrenheit: ");
	scanf("%f",&a);
	
	celsius=(a-32)/1.8;
	
	printf("celsius: %.2f",celsius);
}

if(opcion==10)
{
	float v;
    float t;
    float d;
    
    printf ("tiempo: ");
    scanf("%f",&t);
    
    printf ("Distancia: ");
    scanf("%f",&d);
    
    v= d/t;
    
    printf("km/h: %.2f ",v);
}

if(opcion==11)
{
	float v;
    float t;
    float d;
    
    printf ("km/h: ");
    scanf("%f",&v);
    
    printf ("Distancia: ");
    scanf("%f",&d);
    
    t= d/v;
    
    printf("Tiempo: %.2f hr",t);
}

if(opcion==12)
{
	float v;
    float t;
    float d;
    
    printf ("tiempo: ");
    scanf("%f",&t);
    
   printf ("km/h: ");
    scanf("%f",&v);
    
    d= v*t;
    
    printf("Distancia: %.2f",d);
}

if(opcion==13)
{
	float d;
	float p;
	float c;
	
	printf("Compra del dolar: ");
	scanf("%f",&c);
	
	printf("Cuantos dolares quieres comprar?\n");
	scanf("%f",&d);
	
	p=c*d;
	
	printf("Te costaria %.2f pesos",p);
}

if(opcion==14)
{
	float d;
	float p;
	float v;
	
	printf("Venta del dolar: ");
	scanf("%f",&v);
	
	printf("Cuantos dolares quieres vender?\n");
	scanf("%f",&d);
	
	p=v*d;
	
	printf("Recibirias %.2f pesos",p);
}

}
