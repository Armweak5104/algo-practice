#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> input = {4, 2, 5, 3, 3, 1, 2, 4, 1, 5, 5, 5, 3, 1};
  vector<int>::iterator it;
  
  sort(input.begin(),input.end());
  
  it = unique(input.begin(),input.end());
  
  input.resize(distance(input.begin(),it));
  
  for (int i: input){
    cout<<i<<endl;
  }
}