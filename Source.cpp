#include <iostream>
#include <fstream>
#include <string>
#include <assert.h>

int examFunc(int val1, int* p_val); 
int main()
{
   
    int num1 = 4;
   

    int ret = examFunc(num1, &num1) + num1;


	return 0;
}

int examFunc(int val1, int* p_val)

{

    int sum = val1 + *p_val;

    *p_val = 2;

    val1 = 7;
    printf("%i", val1);
    return sum;

}