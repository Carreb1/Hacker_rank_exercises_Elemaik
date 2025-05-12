#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <vector>

using namespace std;

int main() {


    int t = 4, i, size;
    cin >> t;

    string* nomes = new string[t];

    for (i = 0; i < t; i++){
        cout << i << ": ";
        getline(cin, nomes[i]);
        cout << "\n";
    }

    for (i = 0; i < t; i++){
        cout << nomes[i] << endl;
        size = nomes[i].size();
        if (size <= 2){
            cout << "Too short: " << size << endl;
        }
    }

    delete[] nomes;
    return 0;
}