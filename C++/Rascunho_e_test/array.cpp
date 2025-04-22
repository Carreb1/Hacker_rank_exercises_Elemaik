#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i, j;
    cin >> n;
    int arr[n];
    
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for (j = n - 1; j >= 0; j--){
        cout << arr[j] << " ";
    }
    
    return 0;
}
