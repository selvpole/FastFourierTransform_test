#include<iostream>
using namespace std;

int pow3(int a,int b){
  int ans = 1, base = a;
  while(b != 0){
    if(b&1)
      ans *= base;
    base *= base;
    b >>= 1;
  }
  return ans;
}

int main(){
  int a,b;
  cin >> a >> b;
  printf("a is %d?\nb << is %d?", a = b, b>>=2);
  while(cin >> a >> b){
    cout << pow3(a,b) << endl;
  }
}
