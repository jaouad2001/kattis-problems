#include <bits/stdc++.h>

using namespace std;
int inf = 1 << 30;

int main()
{
    int n, k;
    cin >> n >> k;

    unordered_map<string, set<int>> m;
    vector<int> items;

    
    for (int i = 0; i < k; i++)
    {
        int store;
        string item;
        cin >> store >> item;
        m[item].insert(store);
    }

    
    vector<string> input;

    
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string item;
        cin >> item;
        input.push_back(item);
    }

    int maxhere = 0;
    for (int i = 0; i < q; i++)
    {
        string curr = input[i];
        vector<int> rem;
        for (auto i : m[curr])
        {
            if (i < maxhere)
            {
                rem.push_back(i);
            }
        }
        for (auto i : rem)
        {
            m[curr].erase(i);
        }
        if (m[curr].size() > 0)
        {
            maxhere = max(*m[curr].begin(), maxhere);
        }
    }
    int minhere = inf;
    for (int i = q - 1; i >= 0; i--)
    {
        string curr = input[i];
        vector<int> rem;
        for (auto i : m[curr])
        {
            if (i > minhere)
            {
                rem.push_back(i);
            }
        }
        for (auto i : rem)
        {
            m[curr].erase(i);
        }
        if (m[curr].size() > 0)
        {
            minhere = min(*m[curr].rbegin(), minhere);
        }
    }

    bool works = true;
    bool ambig = false;
    for (auto i : input)
    {
        if (m[i].size() < 1)
        {
            works = false;
        }
        if (m[i].size() > 1)
        {
            ambig = true;
        }
    }

    if (!works)
    {
        cout << "impossible" << endl;
    }
    else if (ambig)
    {
        cout << "ambiguous" << endl;
    }
    else
    {
        cout << "unique" << endl;
    }
}