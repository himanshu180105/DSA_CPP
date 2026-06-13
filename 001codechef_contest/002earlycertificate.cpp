#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T ;
    
  while(T--){
      int N,M;
      cin >> N >> M;
      
      string A ,B;
      cin >> A >> B;
      
      string result;
      int i=0;
      
      while ( i<N && i<M && A[i]==B[i]){
          result += A[i];
          i++;
      }
      cout << result << endl;
  }
return 0;
}