#include <stdio.h>

int isPrime_rec(int n, int i)
{
    if (n <= 2)
        return (n == 2) ? 1 : 0;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;

    return isPrime_rec(n, i + 1);
}
int isPrime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if ((n % i) == 0)
        {
            return 0;
        }
    }
    return (1);
}

int main()
{
    int n = 23;
    if (isPrime_rec(n, 2))
        printf("Yes\n");
    else
        printf("No\n");

    if (isPrime(n))

        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}