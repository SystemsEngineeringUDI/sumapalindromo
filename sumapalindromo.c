#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*
@autor:
 * Cesar villalobos
 * Jhon velasco
 * Estudiante: Ing.Sistemas UDI
*/

/*Lo que hace especial al palindromo 595 es que puede ser escrito como la suma de cuadrados
consecutivos:
6**2 + 7**2 + 8**2 + 9**2 + 10**2 + 11**2 + 12**2

Hay, exactamente, once palindromos menores que mil que pueden ser escritos como la su-
matoria de cuadrados consecutivos y su suma es 4164. Note que 1 = 0**2 + 1**2. Encuentre la
sumatoria de todos los numeros menores que 10**8 que son palindromos y pueden ser escritos
como la suma del cuadrado de numeros consecutivos.*/

int main(){
	int j=0,a=0,z=0,h=0,resto=0,invertido=0,b;
	int n=1;
	float sum; //Se declara flotante por cuestión de overflow
	while(n==1){
		a=0; //Se reinicia la variable que está dentro del segundo ciclo while
		z++; 
		j=z;
		if((pow(z,2)+pow(z+1,2))>=100000000){ /*Una probabilidad que se debe asegurar es que la suma del cuadrado
												de dos numeros consecutivos no sea mayor a 10**8*/
			n=0;
			break;
		}
		while(a<=100000000){
			a+=pow(j,2); //Se acumulan los numeros consecutivos con su respectivo cuadrado
			j++; //Se incrementa el numero que se acumularara posteriormente en la linea de arriba
			h=a; //Se salva el numero en una variable temporal que nos servira para saber si el numero es palindromo o no
			invertido=0; //Se reinicia 
			while(h!=0){
				resto=h%10;
				h=h/10;
				invertido=invertido*10+resto; /*Mediante descompocisión de números se encuentra el numero invertido*/
												
			}
			if(invertido==a){ //Si el numero invertido es igual al original será palindromo y se acumulará
			sum+=a;	
			}
			
		}
	}
	printf("La suma es: %f",sum); //Se imprime la sumatoria de los palindromos requeridos por el problema
	
}
