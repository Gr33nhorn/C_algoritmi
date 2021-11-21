#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Zaboj{
	int ime;
	int teza;
};

typedef struct Zaboj Zaboj;

struct posta{
	Zaboj* zaboji;
	int stevilo;	
};
typedef struct posta posta;

void funkcija(Zaboj* prvi){
	prvi -> ime = 69;
	prvi -> teza = 5;

};

void posta_zaboji(posta* a, int n){
	for(int i = 0; i < n; i++){
		a -> zaboji[i].ime = i;
		a -> zaboji[i].teza = i*2;
	}

}

int main(void){
	Zaboj prvi = {70, 10};
	int stevilo_zabojev = 3;
	posta nova_posta;
	nova_posta.zaboji = malloc(sizeof(Zaboj)*stevilo_zabojev);
	
	funkcija(&prvi);
	posta_zaboji(&nova_posta, 3);
	for(int i = 0; i < 3; i++){
	
	printf("%d : %d\n", nova_posta.zaboji[i].ime, nova_posta.zaboji[i].teza);
	}





return 0;}

