#include <stdio.h>

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if(n == 0)
        return 1;
    else
    {
        r = e(x, n-1);
        p = p*x;
        f = f*n;
        return r + p / f;
    }
}

double e_horner(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x*s/n;
    return e(x, n-1);    
}

int main()
{
    printf("%1f \n", e_horner(5,60));
    return 0;
}