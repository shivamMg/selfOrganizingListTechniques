#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SWAP(X, Y) char T;T=X;X=Y;Y=T;
int main() {
	printf("###############################\n");
	printf("##### Transpose Technique #####\n");
	printf("###############################\n");
	char string[100];   
    char alphabets[27];
    char ch, *tmp;
    int i, j, index_ch, probes;

    for (i = 0; i < 26; i++) 
        alphabets[i] = (char)(i + 97);
    alphabets[26] = ' ';

    printf("\nAlphabets: ");
    for (i = 0; i < 27; i++) 
        printf("%c",alphabets[i]);
    printf("\n\n");


    printf("Enter String [max 100 chars]: ");
    fgets(string, 100, stdin);
    
    tmp = strchr(string, '\n');
    if (tmp != NULL)
        *tmp = '\0';
    
	probes = 0;
    for (i = 0; i < strlen(string); i++) {
        ch = string[i];
        index_ch = -1;
	    for (j = 0; j < 27; j++) {
            if (alphabets[j] == ch) {
                index_ch = j;
		        break;
            }
        }
	
		if (index_ch == -1)
            continue;

        if (index_ch != 0) {
            SWAP(alphabets[index_ch], alphabets[index_ch-1]);
		}
		    

		probes += index_ch + 1;
    }

    printf("\nAlphabets: ");
    for (i = 0; i < 27; i++) 
        printf("%c", alphabets[i]);
    printf("\nProbes   : %d", probes);
	printf("\n\n");

    return(0);
}

