#include <stdlib.h>
#include <stdio.h>

main()
{
	float l1, l2, l3, p;
	
	printf("digite o valor do primeiro lado:");
	scanf("%f", &l1);
	printf("digite o valor do segundo lado:");
	scanf("%f", &l2);
	printf("digite o valor do terceiro lado:");
	scanf("%f", &l3);
	
	p = l1+l2+l3;
	
	    if(l1 == l2 && l2 == l3){
		printf("o triangulo de perimetro %f e equilatero\n", p);
	}
		else if(l3 != l2 && l2 == l1){
		printf("o triangulo de perimetro %f e isosceles\n", p);
	}
		else if(l1 == l2 && l2 != l3){
		printf("o triangulo de perimetro %f e isosceles\n", p);
	}
		else if(l1 != l2 && l2 != l3){
		printf("o triangulo de perimetro %f e escaleno\n", p);}
		else {
		printf("nao e possivel formar um triangulo");}
		
		system("pause");
	}
	

