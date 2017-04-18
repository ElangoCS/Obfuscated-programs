//prime or not
#include "stdio.h"
#include "math.h"
int n=20;
int i, isPrime;
int main() {
	  isPrime=1;
	  for (i=2; i<=sqrt(n); i++) {
	      isPrime *= (n%i == 0) ? 0 : 1;
	    }

	  (isPrime==1) ? printf("%d\n",n) : 0;
	   n--;

	    return (n>1 ? main() : 0);
	}
