#include <iostream>
#include <list>
using namespace std;

int main() {
list<int> p;
list<int> e(5,100);

  
  p.push_back(3);
  p.push_back(5);
  p.push_back(4);
  p.push_back(9);

  for(int i : p){
    cout<< i << " ";
  }cout<<endl;
  // we can earese a list same as deque --

  cout<< p.size()<<endl;

  
  for(int i : e ){
    cout<< i << " ";
  }
  
  return 0;
}
