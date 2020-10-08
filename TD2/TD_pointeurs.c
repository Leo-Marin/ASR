//Includes
#include <stdio.h>
#include <stdlib.h>
//Declarations
int maVariableGlobale = 0;
void test();
void permuter();
int length();
//Implementation
int main(){
//test();

/*int i=5;
int j=10;
permuter(&i,&j);*/
/*char chen[] = "zoulette";
printf("compteur =  %d\n",length(chen));*/
char chen1[] = "zoulette";
char chen2[] = "zouletteeee";
printf("%d\n",strcmp(chen1,chen2) );



}


void test(){
char maVariableLocal = 'X';
char *p_c;
int *p_i;
p_i = &maVariableGlobale;
printf(" Globale: %p \n", p_i);
p_c = &maVariableLocal ;
printf(" Locale: %p \n", p_c);
printf(" Taille de char: %ld \n", sizeof(maVariableLocal) ) ;
printf(" Taille de int: %ld \n", sizeof(maVariableGlobale) ) ;
printf(" Taille de pointeur de char: %ld \n", sizeof(p_c)) ;
printf(" Taille de pointeur de int: %ld \n", sizeof(p_i)) ;
}

void permuter(int *adr_i, int *adr_j)
{
	int permu = *adr_i;
	*adr_i = *adr_j;
	*adr_j = permu;
	printf(" i: %d \n", *adr_i);
	printf(" j: %d \n", *adr_j);
}

int length(char* chaine){
	int compt = 0;
	int i = 0;
	while(chaine[i]!='\0'){
		compt++;
		i++;
	}
	return compt;
}

/*int strcmp(char* chaine1,char* chaine2){
    if(length(chaine1)==length(chaine2)){
        for (int i =0 ; i<length(chaine1); i++){
            if (chaine1[i]!=chaine2[i]){
                return 0;
            }
        }
    } else {
        return 0;
    }
    return 1;
}*/

void strcpy(char* dest,char* src){
	for (int i =0 ; i<length(src); i++){
	    dest[i]=src[i];
	}	
}

typedef struct _coordonnees2D Coordonnees2D;




