#include <stdio.h>
int main(){
	int velocidade;
	int distancia;
	printf("digite a velocidade em km/h:");
	scanf("%d",&velocidade);
	printf("digite a distancia em km:");
	scanf("%d",&distancia);
	int tempo = distancia / velocidade;
	printf("O tempo em horas é: %d",tempo);
	return 0;
}
