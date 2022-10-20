/*
file: divisioni con resto numeri interi
autore: riccardo conte
data: 07/10/22
classe: 3H
*/
#include <stdio.h>
int main()
{
	int num1;
	int num2;
	int risultato;
	int resto;
	printf("inserisci primo numero ");
	scanf("%d",&num1);
	printf("inserisci secondo numero ");
	scanf("%d",&num2);
	risultato = num1/num2;
	printf("visualizza il risultato %d\n",risultato);
	resto = (num1%num2);
	printf("visualizza il resto %d",resto);
	return 0;
	
}
