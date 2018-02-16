

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main(){
	
	


	int a, b;
    long int fact;
	fflush(stdin);
	printf("Ingrese un numero para calcular su factorial\n");
	scanf("%d", &a);
	fact=1;
	
	for(b=1; b<=a; b++)
	{
		
		fact=b*fact;
	}
	
	printf("El factorial es: %ld \n", fact);


    
    return 0;
	
	
	
}
