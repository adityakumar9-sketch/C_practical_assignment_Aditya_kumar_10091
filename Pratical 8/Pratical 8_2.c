#include <stdio.h>
// Aditya Kumar ERP Id - 10091 //
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("%d %d", x, y);
    return 0;
}
/*
output :
input :
10 20
output :
20 10
*/