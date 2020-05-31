#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,d;
    vector<int> a(n);
    //Solution 
    for(int i = 0;i<d;i++)
    {
        a.push_back(a[i]);
    }
    for(int i = 0;i<d;i++)
    {
        a.erase(a.begin());
    }
    for(int i = 0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
