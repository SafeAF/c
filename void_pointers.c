// void pointers

#include <stdio.h>

int main(){
	int a = 3;
	void *p = &a;

	printf("%p\n", p);
	printf("%d\n", (int*)p);
}