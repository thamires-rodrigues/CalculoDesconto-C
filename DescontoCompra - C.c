#include<stdio.h>
#include<stdlib.h>
a Principal()
{
	float valor_compra,desconto,total;
	printf("Informe o valor da compra");
	scanf("%f",&valor_compra);
	
	if ((valor_compra>100,00) && (valor_compra<=250,00))
	{
      	desconto = (valor_compra/100*7);
      	printf("Voce ganhou um desconto de 7%: %.2f\n",desconto);
	}
	if ((valor_compra>250,00) && (valor_compra<=1,000))
	{
     	desconto = (valor_compra/100*13);
		printf("Voce ganhou um desconto de 13%: %.2f\n",desconto);
	}
	if (valor_compra>1.000)
	{
		desconto = (valor_compra/100*15);
		printf("Voce ganhou um desconto de 15%: %.2f\n",desconto);
	}
	
}