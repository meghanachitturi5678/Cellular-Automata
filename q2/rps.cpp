#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
int main()
{
    int k, l, m, n;
    cin >> n;
    m = n;
    int a[n][3], b[n][3];
    char s[n], t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            t[i] = 'P';
        }
        else if (s[i] == 'P')
        {
            t[i] = 'S';
        }
        else
        {
            t[i] = 'R';
        }
    }
    for (int i = 0; i < n; i++)
    {
        k = 0;
        if (t[i] == 'R')
        {
            for (int j = i; j < n; j++)
            {
                if (s[j] == 'R')
                {
                    b[i][0] = a[j][0];
                    j = n;
                    k = 1;
                }
            }
            if (k == 0)
            {
                for (int j = 0; j < i; j++)
                {
                    if (s[j] == 'R')
                    {
                        b[i][0] = a[j][0];
                        j = i;
                        k = 1;
                    }
                }
            }
            if (k == 0)
            {
                l = (rand() % n) + 1;
                b[i][0] = l;
            }
            k = 0;
            for (int j = i; j < n; j++)
            {
                if (s[j] == 'P')
                {
                    b[i][1] = a[j][0];
                    j = n;
                    k = 1;
                }
            }
            if (k == 0)
            {
                for (int j = 0; j < i; j++)
                {
                    if (s[j] == 'R')
                    {
                        b[i][1] = a[j][0];
                        j = i;
                        k = 1;
                    }
                }
            }
            if (k == 0)
            {
                l = (rand() % n) + 1;
                b[i][1] = l;
            }
            k = 0;
            for (int j = i; j < n; j++)
            {
                if (s[j] == 'S')
                {
                    b[i][2] = a[j][0];
                    j = n;
                    k = 1;
                }
            }
            if (k == 0)
            {
                for (int j = 0; j < i; j++)
                {
                    if (s[j] == 'S')
                    {
                        b[i][2] = a[j][0];
                        j = i;
                        k = 1;
                    }
                }
            }
            if (k == 0)
            {
                l = (rand() % n) + 1;
                b[i][2] = l;
            }
        }
        else if (t[i] == 'P')
        {
            for (int j = i; j < n; j++)
            {
                if (s[j] == 'R')
                {
                    b[i][0] = a[j][1];
                    j = n;
                    k = 1;
                }
            }
            if (k == 0)
            {
                for (int j = 0; j < i; j++)
                {
                    if (s[j] == 'R')
                    {
                        b[i][0] = a[j][1];
                        j = i;
                        k = 1;
                    }
                }
            }
            if (k == 0)
            {
                l = (rand() % n) + 1;
                b[i][0] = l;
            }
            k = 0;
            for (int j = i; j < n; j++)
            {
                if (s[j] == 'P')
                {
                    b[i][1] = a[j][1];
                    j = n;
                    k = 1;
                }
            }
            if (k == 0)
            {
                for (int j = 0; j < i; j++)
                {
                    if (s[j] == 'R')
                    {
                        b[i][1] = a[j][1];
                        j = i;
                        k = 1;
                    }
                }
            }
            if (k == 0)
            {
                l = (rand() % n) + 1;
                b[i][1] = l;
            }
            k = 0;
            for (int j = i; j < n; j++)
            {
                if (s[j] == 'S')
                {
                    b[i][2] = a[j][1];
                    j = n;
                    k = 1;
                }
            }
            if (k == 0)
            {
                for (int j = 0; j < i; j++)
                {
                    if (s[j] == 'S')
                    {
                        b[i][2] = a[j][1];
                        j = i;
                        k = 1;
                    }
                }
            }
            if (k == 0)
            {
                l = (rand() % n) + 1;
                b[i][2] = l;
            }
        }
        else
        {
            for (int j = i; j < n; j++)
            {
                if (s[j] == 'R')
                {
                    b[i][0] = a[j][2];
                    j = n;
                    k = 1;
                }
            }
            if (k == 0)
            {
                for (int j = 0; j < i; j++)
                {
                    if (s[j] == 'R')
                    {
                        b[i][0] = a[j][2];
                        j = i;
                        k = 1;
                    }
                }
            }
            if (k == 0)
            {
                l = (rand() % n) + 1;
                b[i][0] = l;
            }
            k = 0;
            for (int j = i; j < n; j++)
            {
                if (s[j] == 'P')
                {
                    b[i][1] = a[j][2];
                    j = n;
                    k = 1;
                }
            }
            if (k == 0)
            {
                for (int j = 0; j < i; j++)
                {
                    if (s[j] == 'R')
                    {
                        b[i][1] = a[j][2];
                        j = i;
                        k = 1;
                    }
                }
            }
            if (k == 0)
            {
                l = (rand() % n) + 1;
                b[i][1] = l;
            }
            k = 0;
            for (int j = i; j < n; j++)
            {
                if (s[j] == 'S')
                {
                    b[i][2] = a[j][2];
                    j = n;
                    k = 1;
                }
            }
            if (k == 0)
            {
                for (int j = 0; j < i; j++)
                {
                    if (s[j] == 'S')
                    {
                        b[i][2] = a[j][2];
                        j = i;
                        k = 1;
                    }
                }
            }
            if (k == 0)
            {
                l = (rand() % n) + 1;
                b[i][2] = l;
            }
        }
    }
    cout<<m<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<t[i]<<" ";
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}