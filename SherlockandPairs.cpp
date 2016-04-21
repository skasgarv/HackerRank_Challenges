//============================================================================
// Name        : Sherlock.cpp
// Author      : Suhas
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T, N;
	cin >> T;
	while (T > 0) {
		cin >> N;
		long long int a[N];
		for (long long int i = 0; i < N; i++) {
			cin >> a[i];
		}

		long long int new_arr[1000000];
		for (long long int i = 0; i < 1000000; i++) {
			new_arr[i] = 0;
		}
		for (long long int i = 0; i < N; i++) {
			new_arr[a[i]-1]++;
		}
		long long int res = 0;
		for (long long int i = 0; i < 1000000; i++) {
			if (new_arr[i] > 1) {
				res = res + (new_arr[i] * (new_arr[i] - 1));
			}
		}
		cout << res << endl;

		T--;
	}
	return 0;
}

