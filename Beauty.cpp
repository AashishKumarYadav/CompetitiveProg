#include <bits/stdc++.h>
using namespace std;
//vector<int> &x = int x[]
//vector<int> &y = int y[]
int beauty(int n, int m, string s,vector<int> &x,vector<int> &y)
{
    unordered_map<char, int> count;
    vector<int> vec(n);
    vector<vector<int>> graph(n);
    for (int i = 0; i < n; i++)
    {
        count[s[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        vec[i] = count[s[i]];
    }
    for (int i = 0; i < m; i++)
    {
        graph[x[i] - 1].push_back(y[i] - 1);
    }
    int max_b = 0;
    for (int i = 0; i < n; i++)
    {
        max_b = max(max_b, vec[i]);
    }
    if (max_b == 1)
    {
        return -1;
    }
    vector<bool> visited(n, false);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && vec[i] == max_b)
        {
            vector<int> stack;
            stack.push_back(i);
            while (!stack.empty())
            {
                int node = stack.back();
                stack.pop_back();
                if (!visited[node])
                {
                    visited[node] = true;
                    for (int nei : graph[node])
                    {
                        if (!visited[nei])
                        {
                            stack.push_back(nei);
                        }
                    }
                }
            }
            res = max_b;
            break;
        }
    }
    return res;
}
int main()
{

    int q;
    cin>>q;

    while(q--)
    {
    int n, m;
    string s;
    vector<int> x, y;
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b; 
        x.push_back(a);
        y.push_back(b);
    }
    cout << beauty(n, m, s, x, y) << endl;
}

    /*

input->


3
5
4
abaca
1 1 3 4
1 3 4 5
6
6
xzyabc
1 3 2 5 4 6
2 1 3 4 3 4
10
14
xzyzyzyzqx
1 2 3 4 2 6 6 2 3 10 4 1 2 3
2 4 5 5 6 8 5 10 9 9 6 10 8 7

output->
3
-1
4


    */
return 0;
}
