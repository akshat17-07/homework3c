// Author: Akshat Harlalka avh5936@psu.edu
// Collaborator: Quan Shi qks5036@psu.edu
// Collaborator: Yashvi Makhdiya yxm5208@psu.edu
// Section: 1
// Breakout: 15

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

// this function would calculate the sum of digits
int digit_sum(int n) {

// base case
if (n==0){
  return n;
}

//Reccurtion
else{
  return (n%10 + digit_sum(n/10));
}
}

int main ()
{
  //taking the value of int
  int n = atof(readline("Enter an int: "));
  int sum_n = digit_sum(n);

  printf("sum of digits of %d is %d.\n",n, sum_n);
  
  
  return 0;
}