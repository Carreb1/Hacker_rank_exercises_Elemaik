#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map <string, int> m;
    int n, mark, num;
    string name;
    
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num;
        if (num == 1){
            cin >> name >> mark;
            map <string, int>::iterator itr = m.find(name);
            if (itr == m.end()){
                m.insert(make_pair(name, mark));
            }
            else {
                int val = m[name];
                m[name] = val + mark;
            }
        }
        else if(num == 2){
            cin >> name;
            map <string, int>::iterator itr = m.find(name);
            if (itr != m.end()){
                m.erase(name);
            }
        }
        else if(num == 3){
            cin >> name;
            map <string, int>::iterator itr = m.find(name);
            if (itr != m.end()){
                cout << m[name] << endl;
            }
            else {
                cout << 0 << endl;
            }
            
        }
        else{
            cout << "invalid number" << endl;
        }
    }
    
    
    return 0;
}