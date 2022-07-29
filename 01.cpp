/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

#include <stdio.h>
int maior_valor(int v1, int v2, int v3, int v4){

}
int main() {
int a, b, c, d;
scanf("%d %d %d %d", &a, &b, &c, &d);
int valor = maior_valor(a, b, c, d);

if (a > b && a > c && a > d)
valor = a;
else
if ( b > c && b > d)
valor = b;
else
if (c > d)
valor = c;
else
valor = d;

printf("%d", valor);
return 0;
}