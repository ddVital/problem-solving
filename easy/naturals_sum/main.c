#include <stdio.h>

int main() {
    int totalSum;
    printf("The first 10 natural number is: \n");
    for(int i = 1; i<11;i++) 
    {
      printf("%d ", i);
      totalSum += i;
    }
    printf("\ntotal sum: %d\n", totalSum);
    return 0;
}
  