#include <bits/stdc++.h>
using namespace std;

int main(){
  int k;
  vector <int> values = {4,5,1,-3,6};
  bool possible = false;
  cout<<"Input the target value here: ";
  cin>>k;
  cout<<endl;
  for(int i = 0; i<values.size(); ++i){
    for(int j = 0; j < values.size(); ++j){
      if(values[i]+values[j+1]==k){
        possible = true;
      }
    }
  }
  cout<<possible<<endl;
}