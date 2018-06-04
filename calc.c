#include<stdio.h>
#include<stdlib.h>

#include "functions.h"
/*
This is the main method
It's the entry point of our program
*/
int main(int argc, char* argv[]){
	int t1, t2;
	char operator;
	printf("Calculator\n\n");
	printf("No of arguments passed: %d\n", argc);
	printf("First argument: %s\n", argv[0]);
	if(argc=4){
		t1 = atoi(argv[2]);
		t2 = atoi(argv[3]);
		operator = (*argv[1]);
		//switch that checks which operator is to be used
		switch (operator){
			case '+':printf("%d + %d = %d\n", t1, t2, add(t1, t2));
			break;
			case '-':printf("%d - %d = %d\n", t1, t2, subtract(t1, t2));
			break;
			case 'x':printf("%d * %d = %d\n", t1, t2, multiply(t1, t2));
			break;
			case '/':printf("%d / %d = %d rem %d\n",t1, t2, divide(t1, t2),  modulus(t1,t2));
			break;
			default:
            printf("Error! Incorrect operator.\nUse '+' for sum, '-' for subtraction, 'x' for multiplication and '/' for division.\neg ./calc x 4 3\n");
			}
	}
	return 0;
}









