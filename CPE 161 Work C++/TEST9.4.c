#include <stdio.h>
#include <string.h>

int main() 
{

    char characters[11]; 
    int length;

    printf("Enter string : ");
    fgets(characters, sizeof(characters), stdin);

    if ((length = strlen(characters)) > 0 && characters[length - 1] == '\n') 
	{
        characters[length - 1] = '\0';
    }

    printf("number of charector : %d\n", strlen(characters));

}
