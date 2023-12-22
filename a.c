#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    char *p = malloc(1024 * 1024 * 1024);
    if(!p) {
        printf("Memory allocation failure\n");
        return 1;
    }
    printf("Enter data: ");
    scanf("%s", p);
    printf("Entered: %s\n", p);
    return 0;
}
