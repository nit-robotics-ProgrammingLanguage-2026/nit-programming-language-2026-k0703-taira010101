#include <stdio.h>

int fibo(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 1 || n > 30)
    {
        printf("NG");
        return 0;
    }
    printf("%d", fibo(n));
    return 0;
}

int fibo(int n)
{
    int previous = 1;
    int current = 1;
    for (int index = 3; index <= n; index++)
    {
        int next = previous + current;
        previous = current;
        current = next;
    }
    return current;
}
