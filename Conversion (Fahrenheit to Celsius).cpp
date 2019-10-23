#include<iostream>
using namespace std;
int main() {
  int min,max,inc,i;
  cin>>min>>max>>inc;
  for(i=min;i<=max;i=i+inc)
  {cout<<i<<" "<<int(float(5)/9*(i-32))<<endl;}
	return 0;
}
