#//include "stdafx.h"
#include<iostream>
#include <map>
using namespace std;
const long M = 1000000007;
map<long long int, long long int> F;

long long int fib(long long int n) {
	if (F.count(n)) return F[n];
	long long int k = n / 2;
	if (n % 2 == 0) { 
		return F[n] = (fib(k)*fib(k) + fib(k - 1)*fib(k - 1)) % M;
	}
	else {		
		return F[n] = (fib(k)*fib(k + 1) + fib(k - 1)*fib(k)) % M;
	}
}

int main(){
	int t;
	cin >> t;
	long long int n;
	F[0] = F[1] = 1;
	while (t--){
		cin >> n;
		cout << (n == 0 ? 0 : fib(n + 1)) << endl;
	}
	return 0;
}
