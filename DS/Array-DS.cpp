#include <bits/stdc++.h>

using namespace std;


// Complete the reverseArray function below.
vector<int> reverseArray(vector<int> a) {
    vector<int> result;
    int n = a.size();
    for(int i = 0;i<a.size();i++)
        result.push_back(a[n-1-i]);
    return result;

}