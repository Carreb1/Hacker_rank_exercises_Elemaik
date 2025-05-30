#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix{
public:
     vector<vector<int>> a;
     
     Matrix operator+(const Matrix& other) {// Quando sinal + é utilizado Recebe um elemento do tipo matriz
        Matrix result;
        int rows = a.size(); //pega o numero de vetores de vetores
        if (rows == 0) return result;
        int cols = a[0].size(); //pega o numero de elementos dontro do vetor
        
        for (int i = 0; i < rows; i++){
            vector<int> row;
            for (int j = 0; j < cols; j++){
                row.push_back(a[i][j] + other.a[i][j]);
            }
            result.a.push_back(row);
        }
        return result;// E retorna com o resultado
     }
        
    
};

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
