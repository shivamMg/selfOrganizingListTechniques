#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SWAP(X, Y) char T;T=X;X=Y;Y=T;

int main() {
	printf("###############################\n");
	printf("####### Count Technique #######\n");
	printf("###############################\n");
	char string[100];   
    char alphabets[27];
	int frequency[27] = {0};
    char ch, *tmp;
    int i, j, index_ch, probes;
	int frek_ch, frek_j;

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

		if (isspace(ch)) {
			frequency[26] += 1;
            frek_ch = frequency[26];
		}
		else {
			frequency[ch-'a'] += 1;
		    frek_ch = frequency[ch-'a'];	
		}
		
		j = index_ch - 1;
		while (j >= 0) {
			
			if (isspace(alphabets[j]))
				frek_j = frequency[26];
			else
				frek_j = frequency[alphabets[j]-'a'];
			
			if (frek_ch > frek_j) {
				SWAP(alphabets[j+1], alphabets[j]);
			}
			else
				break;

			j--;
		}
		
		probes += index_ch + 1;
    }

    printf("\nAlphabets: ");
    for (i = 0; i < 27; i++) 
        printf("%-3c", alphabets[i]);
    
	printf("\nFrequency: ");
	for (i = 0; i < 27; i++)  {
		if (isspace(alphabets[i]))
			printf("%-3d", frequency[26]);
		else
			printf("%-3d", frequency[alphabets[i]-'a']);
	}
	
	printf("\nProbes   : %d", probes);
	printf("\n\n");

    return(0);
}

