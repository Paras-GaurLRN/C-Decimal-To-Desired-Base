#include <stdio.h>

#include "Decimal_To_INPUT_BASE.c"

#ifndef D2IBDEFED
#define LOADERROR NULL
#else
char* Decimal_To_INPUT_BASE_Array(int number_value, int base, char symbols_list[]);
#endif

#ifdef LOADERROR
exit(2);
#endif

char hex_symbols[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

int main()
{
    int decimal_form = 0;
    
    printf("Enter The Number In Decimal Form: "); scanf("%d",&decimal_form);
    
    char* phex_form = Decimal_To_INPUT_BASE_Array(decimal_form, 16, hex_symbols);
    if(phex_form==NULL){goto freeblock;}

    printf("The Hex Form Is: ");
    for(int i = floor(log((double)decimal_form)/log(16))+1; i >= 0 ; i--)
    {
        printf("%c",phex_form[i]);
    }

    freeblock:
        free(phex_form);
    
    return 0;
}
