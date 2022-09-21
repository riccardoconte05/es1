/* file: somma tra due interi
autore: Riccardo Conte
data: 21/09/22
*/

#include <stdio.h>
int main()
{
//dichiariamo le due variabili di imput
int num1,num2;
//e output
int ris;
// input due numeri interi

printf("inserisci il numero");
scanf("%d",&num1);
printf("inserisci il secondo numero");
scanf("%d",&num2);
//elaborazione somma
//il risultato dellaespressione num1 + num2
ris = num1 + num2;
//output: numero intero
printf("la somma dei due numeri e' %d",ris);
//termino il programma
return 0;
}
