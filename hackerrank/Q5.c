#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[100001];
    int a[26], flag, f, p, i, n;

    scanf("%s", s);

    for (i = 0; i < 26; i++)
        a[i] = 0;

    n = strlen(s);
    for (i = 0; i < n; i++)
        a[s[i] - 'a']++;

    f = p = 0;
    flag = 0;
    for (i = 0; i < 26 && !flag; i++)
    {
        // printf("%d and %d\n", f, p);
        printf("%d F: %d P: %d \n", a[i], f, p);
        if (a[i] != 0)
        {
            if (f == 0)
                f = a[i];

            else if (a[i] != f)
            {
                // printf("%d",a[i]);
                if (p == 0)
                {
                    if (a[i] - f == 1 || a[i] == 1)
                        p = 1;

                    else
                        flag = 1;
                }

                else
                    flag = 1;
            }
        }
    }

    if (flag == 1)
        printf("NO\n");

    else
        printf("YES\n");

    return 0;
}