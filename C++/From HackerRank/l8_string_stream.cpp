#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> resposta;
    stringstream ss(str);
    int num;
    char virgula;
    
    while (ss >> num) {
        resposta.push_back(num);
        ss >> virgula;
    }
    
    return resposta;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}