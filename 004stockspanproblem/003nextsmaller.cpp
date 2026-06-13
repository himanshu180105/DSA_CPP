#include <iostream>
#include <vector>
using namespace std;
int main (){
    int n ;
    cin >> n;

    vector<int> arr(n) , ans(n,-1);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[i]){
                ans[i] = arr[j];
                break;
            }
        }
    }           
    
    
    // stack<int> s;
    // for (int i = n-1; i>=0; i--){
    //     while(!s.empty()&& s.top() <= arr[i])
    //     s.pop();
    //     if(!s.empty()){
    //         ans[i] = s.top();
    //     }
    //     s.push(arr[i]);
    // }

    
   for(int i=0; i<n; i++){
    cout << ans[i] << " ";
   }
   return 0;  
}