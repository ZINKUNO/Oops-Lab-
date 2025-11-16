#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,2,3,4};
    auto it =find(a.begin(),a.end(),3);
    cout<<it-a.begin()<<endl;//return index of 3
    if (it==a.end()){
        cout<<"not found"<<endl;
    }
      if (it != a.end())
        cout << *it << endl;   // prints 3
}