#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	long m=1;
	long n=1;
	int p;
	
	while(m!=0 && n!=0){
	
		cin >> m;
		cin >> n;
		
		m=m%10;
		n=n%100;
		
		p=pow(m,n);
		
		cout << p%10 << endl;
	}
	
	return 0;
}
