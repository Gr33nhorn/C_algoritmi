#include <stdio.h>
#include <string.h>

int main(void){

	int n, t;
	char vrstica[] = "ABC";
	n = strlen(vrstica);

      	int  k = 0;
	while(n - k > 1){
	t = vrstica[k];
	for(int i = k; i < n - 1; i++){
		vrstica[i] = vrstica[i + 1];
		}
	vrstica[n - 1] = t;
	printf("%s\n", vrstica);
	k++;
	}
	
	

return 0;}
