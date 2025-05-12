#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, m;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
        /*
        for (int j = 0; j <= i; j++){
            cout << v[j] << ' '; // Não tava no código só queria ver mesmo 
        }
        */
    }
    cout << endl;
    sort(v.begin(), v.end());
    
    for (int i = 0; i < n; i++){
        cout << v[i] << ' ';
    }
    
    return 0;
}