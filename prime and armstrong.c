#include <stdio.h>
#include <math.h>

int power(int base, int exp) {
 int result = 1;
 for (int i = 0; i < exp; i++) {
 result *= base;
 }
 return result;
 }
 
 int isPrime(int num) {
 if (num <= 1)
 return 0;
 for (int i = 2; i <= num / 2; i++) {
 if (num % i == 0)
 return 0;
 }
 return 1;
 }
 
 
 int isArmstrong(int num) {
 int originalNum = num, sum = 0, digits = 0;
 while (originalNum != 0) {
 originalNum /= 10;
 digits++;
 }
 originalNum = num;
 while (originalNum != 0) {
 int digit = originalNum % 10;
 sum+=pow(digit, digits);
 originalNum /= 10;
 }
 return (sum == num);
 }
 int main() {
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);
 if (isPrime(num))
 printf("%d is a Prime Number.\n", num);
 else
 printf("%d is not a Prime Number.\n", num);
 if (isArmstrong(num))
 printf("%d is an Armstrong Number.\n", num);
 else
 printf("%d is not an Armstrong Number.\n", num);
 return 0;
 }