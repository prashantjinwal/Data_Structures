#include <iostream>
#include <vector>
using namespace std;


int main() {
  vector<int> v;
  cout<< "Capacity --> " << v.capacity()<<endl;
  v.push_back(1);
  cout<<"Capaity --> " << v.capacity() << endl;
  v.push_back(3);
  v.push_back(4);
  cout<<"Capaity --> " << v.capacity() << endl;
  cout<<"size --> " << v.size() <<endl;

  cout<<"first element --> " << v.front() <<endl;
  cout<<"last element --> " << v.back() <<endl;

  cout<<"before pop" <<endl;
  for(int i : v){
    cout<<i<<" ";
  }cout<<endl;

  v.pop_back();

  cout<<"after pop" <<endl;
  for(int i : v){
    cout<<i<<" ";
  }

  cout<<"before clear size --> " << v.size() <<endl;
  v.clear();
  cout<<"after clear size --> " << v.size() <<endl;


  vector<int> a(5,1);
  cout<<"print a" <<endl;
  for(int i : a){
    cout<<i<<" ";
  }

  
  


  return 0;
}
