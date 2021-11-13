#include <stdio.h>
#include <stdlib.h>

int main(void){

	int n, js, is;
	int i_od_sredine;
	int j_od_sredine; //oddaljenost točke od sredine kvadrata
	
	scanf("%d", &n);
	
	is = (2 * n - 1)/2; //i koordinata sredine
	js = (2 * n - 1)/2; //j koordinata sredine
	
	printf("%d, %d\n", is, js);
	int max(int a, int b){
		if(b > a) { int t = b; b = a; a = t;}
		return a;
	}
	
	for(int u = 0; u < 2 * n - 1; u++){
	        i_od_sredine = abs(u - is);
		for(int v = 0; v < 2 * n - 1; v++){
			j_od_sredine = abs(v - js);
			printf("%d ", max(i_od_sredine, j_od_sredine) + 1);
		}
		printf("\n");
	}

return 0;}
