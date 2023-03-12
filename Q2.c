#include <stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("ET_small.txt", "r", stdin);
    freopen("output_small.txt", "w", stdout);
#endif
    int t;
    scanf("%d", &t);
    while (t--)

    {
        int n;
        scanf("%d", &n);
        float w = 0;
        while (n--)
        {
            float r, s, h;
            scanf("%f %f %f", &r, &s, &h);
            w = (3 * r) + (4 * s) + (6 * h) + w;
        }
        float a1, a2, a3;
        a2 = (w / 2);
        a1 = w * 3;
        a3 = 1.5 * w;
        printf("%.2f,%.2f,%.2f", a1, a2, a3);
        printf("\n");
    }
}
