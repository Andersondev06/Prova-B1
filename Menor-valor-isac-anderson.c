/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("entre com tres valores: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 <= num2 && num1 <= num3) {
        printf("o menor numero é %d\n", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("o menor numero é %d\n", num2);
    } else {
        printf("o menor numero é %d\n", num3);
    }

    return 0;
}