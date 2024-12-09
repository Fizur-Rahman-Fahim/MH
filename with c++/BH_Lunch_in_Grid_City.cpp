#include <bits/stdc++.h>
using namespace std;

void solution(int s, int a, int f) 
{
    int st[f];
    int av[f];

    for (int i = 0; i < f; ++i) 
    {
        cin >> st[i] >> av[i];
    }

    sort(st, st + f);
    sort(av, av + f);
    int medianSt = st[(f - 1) / 2];
    int medianAv = av[(f - 1) / 2];
    cout << "(Street: " << medianSt << ", Avenue: " << medianAv << ")\n";
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int s, a, f;
        cin >> s >> a >> f;
        solution(s, a, f);
    }
    return 0;
}


Problem BH