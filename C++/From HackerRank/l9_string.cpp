#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    
    cin >> a >> b;
    
    cout << a.size() << ' ' << b.size() << endl;
    cout << a + b << endl;
    char a0 = a[0], b0 = b[0];
    
    a[0] = b0;
    b[0] = a0;
    
    cout << a << ' ' << b << endl;
    
    
    return 0;
}
