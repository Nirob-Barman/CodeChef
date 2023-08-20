#include <bits/stdc++.h>

using namespace std;

int main()
{
    int digits[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int sum = a + b;
        int matches = 0;
        while (sum > 0)
        {
            int mod = sum % 10;
            matches += digits[mod];
            sum /= 10;
        }
        printf("%d\n", matches);
    }
    return 0;
}