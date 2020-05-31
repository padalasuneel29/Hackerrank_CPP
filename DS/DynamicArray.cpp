#include <bits/stdc++.h>

using namespace std;


vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<int> *seq_list = new vector<int>[n];
    vector<int> result;
    int query_type, x,y, last_answer = 0;
    

    for(int i = 0; i<queries.size();i++)
    {
        query_type = queries[i][0];
        x = queries[i][1];
        y = queries[i][2];
        if(query_type == 1)
        {
            seq_list[(x^last_answer)%n].push_back(y);
        }
        else
        {
            vector<int> seq = seq_list[(x^last_answer)%n];
            last_answer = seq[y%seq.size()];
            result.push_back(last_answer);
        }
    }
    return result;
}
