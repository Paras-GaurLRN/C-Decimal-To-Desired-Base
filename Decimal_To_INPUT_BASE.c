#include <stdlib.h>
#include <math.h>
#include <string.h>
#define D2IBDEFED NULL

/*
the pointer is like this-
[a(n),a(n-1),...,a(0)]
that is the digit for the hightest power is at index 0
then the next index is of the preceding power and so on
till it reaches power zero

so if base = 3, number_value = 14
then pelmary will be an array
such that = [1,1,2]
*/

char* Decimal_To_INPUT_BASE_Array(int number_value, int base, char symbols_list[])
{
    if(strlen(symbols_list) < base || base == 0)
    {
        return NULL;
    }

    int number_of_digits = floor(log((double)number_value)/log((double)base))+1;
    // or int number_of_digits = log((double)number_value)//log((double)base)+1;
    // which is faster?
    char* pelmary = (char*)malloc((number_of_digits+1)*sizeof(char));
    if(pelmary==NULL){return NULL;}
    memset(pelmary, symbols_list[0], number_of_digits*sizeof(char));

    pelmary[number_of_digits] = '\0';

    for(int i = 0; i < number_of_digits; i++)
    {
        if(number_value==0){break;}
        int symbol_index = number_value % base;
        // pelmary[i] = symbols_list[symbol_index]; // Not strcpy as both are char and thus not of size more than one
        memset(&pelmary[i],symbols_list[symbol_index], 1);
        number_value /= base;
    }

    return pelmary;
}