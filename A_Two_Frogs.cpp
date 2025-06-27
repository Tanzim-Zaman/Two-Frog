#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int flag = 0, i = 1;
        while (flag != 1)
        {
            int dif = abs(a - b);
            if (a < b)
            {
                if (i % 2 != 0)
                {
                    if (dif > 1)
                    {
                        a++;
                    }
                    else if (dif == 1)
                    {
                        a--;
                    }
                    if (a < 1)
                    {
                        cout << "NO" << endl;
                        flag++;
                    }
                }
                else if (i % 2 == 0)
                {
                    if (dif > 1)
                    {
                        b--;
                    }
                    else if (dif == 1)
                    {
                        b++;
                    }
                    if (b > n)
                    {
                        cout << "YES" << endl;
                        flag++;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
                
            }else if (a > b)
            {
                if (i % 2 != 0)
                {
                    if (dif > 1)
                    {
                        a--;
                    }
                    else if (dif == 1)
                    {
                        a++;
                    }
                    if (a > n)
                    {
                        cout << "NO" << endl;
                        flag++;
                    }
                    if (flag == 1)
                    {
                        break;
                    }
                    
                }
                else if (i % 2 == 0)
                {
                    if (dif > 1)
                    {
                        b++;
                    }
                    else if (dif == 1)
                    {
                        b--;
                    }
                    if (b < 1)
                    {
                        cout << "YES" << endl;
                        flag++;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
            i++;
        }
    }

    return 0;
}