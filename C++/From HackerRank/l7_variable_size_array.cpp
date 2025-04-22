#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;
    int k, a, b;
    
    vector<vector<int>> arr(n);
    
    for (int i = 0; i < n; i++){
        cin >> k;
        arr[i].resize(k);
        
        for (int j = 0; j < k; j++){
            cin >> arr[i][j];
    }
    }
    
    for (int k = 0; k < q; k++){
            cin >> a >> b;
            printf("%d\n", arr[a][b]);
    }
    
    return 0;
}
