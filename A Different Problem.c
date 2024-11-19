#include <stdio.h>

int main()
{
    long long n,   p;
    while (scanf("%lld%lld", &n, &p) == 2) printf("%lld\n", p < n ? n - p : p - n);
    return 0;
}