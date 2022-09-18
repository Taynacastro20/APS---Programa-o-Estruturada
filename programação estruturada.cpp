#include <stdio.h>
#include<stdio.h>
#define N 5
#define cont 10
void entrada_dados(int x[]);
void saida_dados(int);
void imprimir_vetor (int x[]);
int somar_numeros_pares(int x[]);
int maior_numero(int x[]);
int ehPar(int);

int main (){
	int vet_0[N];
	int vet_1[N];
	int vet_2[N];
	int vet_3[N];
	int vet_4[N];
    int N,soma;	
	 N = entrada_dados();
	 somar_numeros_pares();
     saida_dados(soma);
return 0;
	}	
	
void entrada_dados(){
		
	entrada_dados(vet_0);
    printf(" \nprimeiro vetor:"); 
    entrada_dados(vet_1);
    printf(" \nsegundo vetor:");
	entrada_dados(vet_2);
    printf(" \nterceiro vetor:"); 
    entrada_dados(vet_3);
    printf(" \nquarto vetor:"); 
    entrada_dados(vet_4);
    printf(" \nquinto vetor:"); 
	
	}
	
void imprimir_vetor (int){
    for (i=0;i<N;i++)	
    printf("%d,",valores[i]);
	
}	
	
void entrada_dados(){
	int i;
	for ( i=0;i<N;i++){
	x[i]=%100;	
	}
	
}

void saida_dados (int soma){
	printf("resultado da soma dos numeros pares e:[%i]\n",soma);

}

int somar_numeros_pares(int n){
	int u;
	
	if (n ==0){
		return ehPar;
			
	}
	if (ePar (n)){
	    u+=n;
		
	}
	return u+somar_numeros_pares(n-1);

	}
	
int ePar(int){
		
	if (vet[i]%2==0){
	printf("par");
	
	return 1;
	}
	return 0;
}

int maior (int x []);
maior = vet[0];
for (i = 0; i < n; i++) {
       if (vet[i] > maior)
           maior = vet[i];
    }
    
