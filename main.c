#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    ptr[0] = 42;
    
    return 0;
}
