/*
file: calcolo ore e minuti
nome: riccardo conte
classe 3H
data*/

#include <stdio.h>

int main() 
{
  int secondi;  //input
  int ore, minuti;  //output
  
  printf("Inserisci il numero di secondi: ");   //richiesta input
  scanf("%d", &secondi);  //lettura input
  
  minuti = (secondi - secondi % 60) / 60; //calcolo minuti
  ore = (minuti - minuti % 60) / 60;  //calcolo ore
  secondi = secondi % 60;   //calcolo minuti
  minuti = minuti % 60;     //calcolo secondi
  
  printf("Ore: %d, Minuti: %d, Secondi: %d", ore, minuti, secondi); //stampa risultato
  return 0;
}
