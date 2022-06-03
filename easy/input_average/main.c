#include <stdio.h>

int main() {
    float totalSum;
    
    printf("Please type 10 numbers: \n\n");
    for(int i = 1; i<11;i++) 
    { 
      int currentNumber;
      printf("    [%d] type a number: ", i);
      scanf("%i", &currentNumber);
      totalSum += currentNumber;
    }
    printf("\ntotal sum: %.1f\n", totalSum);
    printf("the average is: %.1f", totalSum / 10);
    return 0;
}
  