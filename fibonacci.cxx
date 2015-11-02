#include <iostream>

using namespace std;

int main(){

double f0=0;
double f1=1;
double f;
double N;

cout << "Please enter a value for N" << endl;
cout << "N=" << endl;
cin >> N;

for(int i=1; i<N; i++){
  
  f=f0+f1;
  f0=f1;
  f1=f;
  
  
}
//cout << "f =" << f << endl;
cout << "f(" << N << ") =" << f << endl;
return 0;
}
