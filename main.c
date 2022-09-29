#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int a,b,c,result;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	
	result = a+b ;
	if(result<c){
		printf("C e Maior que a soma de a + b");
	} else{
		printf("C e Menor que a soma de a + b");
	}
}
