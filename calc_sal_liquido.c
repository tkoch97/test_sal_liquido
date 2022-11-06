#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char** argv) {

  float salario, inss, ir, sal_liquido;

  printf("Informe seu salario bruto: \n");
  scanf("%f", &salario);

/*Cálculo do desconto do INSS*/

  if(salario <= 1693.72)
  {
    inss =salario * 0.08;
  }
  else
  if(salario > 1693.73 && salario <= 2822.90)
  {
    inss =salario * 0.09;
  }
  else
  if(salario > 2822.90 && salario <= 5646.80)
  {
    inss =salario * 0.11;
  }
  else
  if(salario > 5646.80)
  {
    inss =621.04;
  }

  /*Cálculo do desconto do IR*/

  if(salario <= 1903.98)
  {
    ir =salario * 0;
  }
  else
  if(salario > 1903.98 && salario <= 2826.65)
  {
    ir =salario * 0.075;
  }
  else
  if(salario > 2826.66 && salario <= 3751.05)
  {
    ir =salario * 0.15;
  }
  else
  if(salario > 3751.06 && salario <= 4664.68)
  {
    ir =salario * 0.225;
  }
  else
  if(salario > 4664.68)
  {
    ir =salario * 0.275;
  }

  /*Cálculo do salário líquido*/

  sal_liquido = (salario - inss) - ir;

  printf ("\n Desconto do INSS: %0.2f \n", inss);
  printf ("\n Desconto do IR: %0.2f \n", ir);
  printf ("\n Salario liquido: %0.2f \n", sal_liquido);

  return 0;
}