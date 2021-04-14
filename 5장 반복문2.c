#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    do {
    	printf("%d\n", n);
    	--n;
	} while (n);
    
    return 0;
}
