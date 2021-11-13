/*#include <stdio.h>
#include <string.h>
#define  N (sizeof(s)/sizeof(s[0]))
int main(void){

char* s[5] = {"To", "Je", "Pet" , "Besed", "Ne"};

char** desno(char** s){

return s;
}

for(int i = 0; i < N; i++)
printf("%s ", desno(s)[i]);
printf("\n");
s[0] = "Tisto";
for(int i = 0; i < N; i++)
printf("%s ", desno(s)[i]);
return 0;}*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define N (sizeof(a)/sizeof(a[0]))
#define M (sizeof(b)/sizeof(b[0]))
int main(void){

char* a[3] = {"a", "bc", "bc"};
char* b[4] = {"a", "bc", "dc", "gh"};
printf("%lu\n", N);
printf("%lu\n", M);
char** desno(char** a){
	char* t;
	t = *a;
	for(int i = 1; i < N; i++){
		*(a + i - 1) = *(a + i);
	}
	*(a + N - 1) = t;
	
	return a;}	
	
desno(b);	

printf("%s\n", *b);
printf("%s\n", *(b + 1 - 1));
printf("%s\n", *(b + 1));
*(b + 1 - 1) = *(b + 1);
printf("%s\n", *(b + 1 - 1));
return 0;}
