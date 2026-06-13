// Stock span problem
#include <iostream>
#include <vector>
#include <stack>

using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if(arr[i]<= arr[j]){
    //             cout <<
    //         }
    //     }
    // }

    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[i] >= arr[s.top()])
            s.pop();

        if (s.empty())
        {
            cout << i + 1 << " ";
        }
        else
        {
            cout << i - s.top() << " ";
        }
            s.push(i);
    }

    return 0;
}