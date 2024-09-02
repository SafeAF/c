// experimenting

#include <stdio.h>

int add(int a, int b){
	return a+b;
}

int main(){
	int (*op)(int, int);

	op = add;

	int result = op(3, 2);
	printf("%d\n", result);
}