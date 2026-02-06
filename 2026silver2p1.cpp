#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int T, C;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> T >> C;
    for (int i = 0; i < T; i++)
    {
        int N;
        string l, r;
        cin >> N >> l >> r;
        deque<int> JJ, JN, NJ, NN;
        for (int i = 0; i < N; i++)
        {
            if (l[i] == 'J')
            {
                if (r[i] == 'J')
                {
                    JJ.push_back(i + 1);
                }
                else
                {
                    JN.push_back(i + 1);
                }
            }
            else
            {
                if (r[i] == 'J')
                {
                    NJ.push_back(i + 1);
                }
                else
                {
                    NN.push_back(i + 1);
                }
            }
        }
        if (JN.size() != NJ.size() || (NN.size() + JN.size()) % 2 != 0 || JJ.size() && NN.size() && (!JN.size() || !NJ.size()))
        {
            cout << "NO" << "\n";
            continue;
        }
        cout << "YES" << "\n";
        if (C == 1)
        {
            if (!NN.size() && !JN.size() && !NJ.size())
            {
                for (int i = 1; i <= N; i++)
                {
                    cout << i << " ";
                }
                cout << "\n";
                for (int i = 0; i < N; i++)
                {
                    cout << 'J';
                }
                cout << "\n";
                continue;
            }
            if (!JJ.size() && !JN.size() && !NJ.size())
            {
                for (int i = 1; i <= N; i++)
                {
                    cout << i << " ";
                }
                cout << "\n";
                for (int i = 0; i < N; i++)
                {
                    i % 2 == 0 ? cout << 'J' : cout << 'N';
                }
                cout << "\n";
                continue;
            }
            string c;
            while (!JJ.empty())
            {
                cout << JJ.front() << " ";
                c.push_back('J');
                JJ.pop_front();
            }
            cout << JN.front() << " ";
            c.push_back('J');
            JN.pop_front();
            int count = 0;
            while (!NN.empty())
            {
                cout << NN.front() << " ";
                if (count % 2 == 0)
                    c.push_back('N');
                else
                    c.push_back('J');
                NN.pop_front();
                count++;
            }
            count = 0;
            while (!NJ.empty())
            {
                if (count % 2 == 0)
                {
                    cout << NJ.front() << " ";
                    c.back() == 'J' ? c.push_back('N') : c.push_back('J');
                    NJ.pop_front();
                }
                else
                {
                    cout << JN.front() << " ";
                    c.back() == 'N' ? c.push_back('N') : c.push_back('J');
                    JN.pop_front();
                }
                count++;
            }
            cout << "\n";
            cout << c << "\n";
        }
    }
}
