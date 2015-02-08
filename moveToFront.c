# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main() {
    char string[100];   
    char alphabets[27];
    char ch, *tmp;
    int i, j, index_ch;

    for(i=0;i<26;i++) 
        alphabets[i] = (char)(i + 97);
    alphabets[26] = ' ';

    printf("Alphabets: ");
    for(i=0;i<27;i++) 
        printf("%c",alphabets[i]);
    printf("\n");


    printf("Enter String [max 100 chars]: ");
    fgets(string,100,stdin);
    
    tmp = strchr(string,'\n');
    if( tmp != NULL )
        *tmp = '\0';

    for(i=0;i<strlen(string);i++) {
        ch = string[i];
        index_ch = -1;
	for(j=0;j<27;j++) {
            if( alphabets[j] == ch ) {
                index_ch = j;
		break;
            }
        }
	if( index_ch == -1 )
            continue;

        j = index_ch;
        while(j>0) {
            alphabets[j] = alphabets[j-1];
            j--;
        }
        alphabets[0] = ch;
    }

    printf("Alphabets: ");
    for(i=0;i<27;i++) 
        printf("%c",alphabets[i]);
    printf("\n");

    return(0);
}

