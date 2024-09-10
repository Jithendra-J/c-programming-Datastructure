#include <stdio.h>
while (num > 0) {
sum += num % 10; // Add the last digit to sum
num /= 10; // Remove the last digit
}
return sum;
}
// Function to compute the total sum of digits for all numbers from 1 to n
unsigned long long totalSumOfDigits(int n) {
unsigned long long totalSum = 0;
for (int i = 1; i <= n; ++i) {
totalSum += sumOfDigits(i);
}
return totalSum;
}
int main() {
int number;
printf("Enter a positive integer: ");
scanf("%d", &number);
if (number < 1) {
printf("The number should be a positive integer.\n");
} else {
printf("The sum of digits for all numbers from 1 to %d is %llu\n", number, totalSumOfDigits(number));
}
return 0;
}