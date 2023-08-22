#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <cstdio>

#define RED     "\033[31m" 
#define WHITE   "\033[37m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDBLUE    "\033[1m\033[34m"
#define CYAN    "\033[36m"

int main()
{
	setlocale (LC_CTYPE, "");
	
	char Op;
	float celsius,tempFahr,fahrenheit,tempCelsius;
	
	printf("\t \t \033[31mConversión de Temperaturas :)\033[37m \n");
	printf("\t Pulsa \033[36m'N'\033[37m para terminar :) \n \n");
	
	while (true)
	{	
	printf("\n ¿Que desea Convertir? \n \t \033[1m\033[33ma)Celsius a Fahrenheit \n \t \033[1m\033[33mb)Fahrenheit a Celsius\033[37m \n");

		
		while (true)
		{
			scanf("%s", &Op);
			
			if(Op=='a')
			{
				
				printf("Ingresa un número para los Grados Celsius: ");
				scanf("%f", &celsius);
				printf("\033[1m\033[34mCelsius: °%f C\033[37m \n",celsius);
		
				tempFahr=(9/5.0)*celsius+32;
				printf("La Conversion de °%f grados Celsius a grados Fahrenheit es: \033[1m\033[32m°%f Grados Fahrenheit.\033[37m",celsius,tempFahr);
			
				break;
			}
			else if(Op=='b')
			{
				
				printf("Ingresa un número para los Grados Fahrenheit: ");
				scanf("%f", &fahrenheit);
				printf("\033[1m\033[34mFahrenheit: °%f F\033[37m \n",fahrenheit);
				
				tempCelsius=(fahrenheit-32.0)*(5.0/9.0);
				printf("La Conversion de °%f grados Fahrenheit a grados Celsius es: \033[1m\033[32m°%f Grados Celsius.\033[37m",fahrenheit,tempCelsius);
				
				break;
			}
			
			else if(Op=='n')
			{
				return false;
			}
			
			else
			{
				printf(" \n %s Escriba una \033[1m\033[31mOpción Valida\033[37m :) \n");
				//break;
			}
			
			
			
	    }
	    	
	}
	
	return 0;
}

