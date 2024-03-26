#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<int> d;

  d.push_back(1);
  d.push_front(3);
  d.push_back(44);
  d.push_front(33);
  d.push_front(55);
  
  for(int i : d){
    cout<<i <<" ";
  }cout<<endl;

  d.pop_back();
  
  for(int i : d){
    cout<<i <<" ";
  }

  cout<<endl;
  
  cout<<"Element at index 1 is :  " << d.at(1)<<endl;
  cout<<"Is array is is empty : "<< d.empty() << endl;
  cout<< "before erase : " << d.size() << endl; 
  d.erase(d.begin(), d.begin()+1);
  for(int i : d){
    cout<<i <<" ";
  }
  cout<<endl;
  cout<< "after erase : " << d.size() << endl; 

  return 0;
}
