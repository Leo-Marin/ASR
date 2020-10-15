//Includes
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
//Declarations





//Implementation



void coder(char message[], int clef) {
    int i = 0;
    while (message[i] != '\0') {
        if (message[i] >= 'A' && message[i]<= 'Z') {
            char c = message[i] - 'A';
            c += clef;
            c = c % 26;
            message[i] = c + 'A';
        }else if (message[i] >= 'a' && message[i]<= 'z') {
            char c = message[i] - 'a';
            c += clef;
            c = c % 26;
            message[i] = c + 'a';

        }
        i++;
    }
    printf("%s\n", message);
}




int main(){
//test();
	char* lecar = "salut";
	printf("lecar = %s\n",lecar);
	/*lecar[0] += 3;
	printf("lecar = %s\n",lecar);*/
	
	//printf("lecar = %d\n",lecar);

}