#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Broken.c
// Exploring memory leaks, overflows, and underflows.

// broken.c: In function ‘broken’:
// broken.c:14:9: warning: ‘__builtin_memcpy’ writing 6 bytes into a region of size 5 overflows the destination [-Wstringop-overflow=]
//    14 |         strcpy(dyn, "12345");
//       |         ^~~~~~~~~~~~~~~~~~~~
// broken.c:13:15: note: destination object of size 5 allocated by ‘malloc’
//    13 |         dyn = malloc(5);
//       |               ^~~~~~~~~

// Improvements in the compiler since Linux Application Development
// was published in 2004?

int broken(){
	char *dyn;

	// overwrite buffer a scosche
	dyn = malloc(5);
	strcpy(dyn, "12345");
}

int main(){
	return broken();
}
