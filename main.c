#include <stdio.h>
#include <stdlib.h>

void exec2(){
	 float dola, real, cota;
	    scanf("%f", &real);
	    scanf("%f", &cota);
 	   printf("%f reais são %f dolinhos", real, (real/cota)); 
} 


void exec3(){
	float tempC, tempF;
 	   scanf("%f", &tempC); 
	   tempF = tempC *(9.0/5.0) + 32,0;
	   printf("A temperatura maxima de hoje na tela da globo %f\n",tempF);
}

void exec8(){
	int segundos, horas, minutos;
    	scanf("%f", &segundos);
	    horas = segundos/3600;
	    minutos = (segundos-(horas*3600))/60;
    	segundos = segundos- ((horas*3600) + (minutos*60));
    	printf("Tempo &d:&d:%d\n", horas, minutos, segundos);
	
}
int main(int argc, char *argv[]) {
	
	int resposta;
	printf("Usuario, qual exercicio quer resolver ? |2|3|8|\n");
	scanf("%d",&resposta);
	

    case 2:
    	exec2();
    break;
	 
    case 3:
    	;
	   float tempC, tempF;
 	   scanf("%f", &tempC); 
	   tempF = tempC *(9.0/5.0) + 32,0;
	   printf("A temperatura maxima de hoje na tela da globo %f\n",tempF);
    break;
    
    case 8:
    	;
	 //(URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos
	    int segundos, horas, minutos;
    	scanf("%f", &segundos);
	    horas = segundos/3600;
	    minutos = (segundos-(horas*3600))/60;
    	segundos = segundos- ((horas*3600) + (minutos*60));
    	printf("Tempo &d:&d:%d\n", horas, minutos, segundos);
    break
	
	
	
	return 0;
}
