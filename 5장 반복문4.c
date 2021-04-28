#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    for (int i = 1;i <= n; i++) {
    	int j = i;
    	while (1) {
    		printf("%d", i);
    		j--;
    		if (j == 0) break;
		}
		
		if (i <= n) {
			printf("\n");
			continue;
		}
		
		else break;
	}
    
    return 0;
}
