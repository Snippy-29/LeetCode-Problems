# include <stdio.h>
# include <math.h>

double myPow(double x, int n) {
    return pow(x,n);
}

double myPow(double x, int n) { //O(log(n))
    double res = 1;
    while (n!=0) {
        if (n % 2 != 0)
            res = n > 0 ? res * x : res / x;
        x = x * x;
        n /= 2;
    }
    return res;
}

double myPow(double x, int n) { //O(n)--can cause stack overflow if the value of n is very large.
    if(n == 0){
        return 1;
    }
    if(x == 0){
        return 0;
    }
    if(n > 0){
        return x*myPow(x,n-1);
    }
    return 1/(x)*myPow(x,n+1);
}