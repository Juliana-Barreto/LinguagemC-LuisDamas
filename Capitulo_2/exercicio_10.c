/* Escreva um programa que solicite ao usuário uma determinada data no formato 
aaaa-mm-dd e a mostre em seguida no format dd/mm/aaaa. */

#include <stdio.h>

int main() {
  int ano, mes, dia;
  printf("Digite uma data no formato aaaa-mm-dd: ");
  scanf("%d-%d-%d", &ano, &mes, &dia);
  if (mes > 12 || mes < 1 || dia > 31 || dia < 1 || ano < 1) {
    printf("Data inválida");
    return 1;
  } 
  printf("Data no formato dd/mm/aaaa: %02d/%02d/%04d", dia, mes, ano);
}