#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <vector>

using namespace std;

int main() {


    int t = 3, i;   
    cout << "O valor é: " << t << " também" << "\n";

    vector<string> nomes(t);

    for (i = 0; i < t; i++){
        cout << i << ": ";
        getline(cin, nomes[i]);
        cout << "\n";
    }

    for(const auto& nome : nomes){
        cout << nome << endl;
    }

    return 0;
}