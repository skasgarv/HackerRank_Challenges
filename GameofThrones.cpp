#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	int i, storage[26], count = 0;
	string s;
	cin >> s;

	for (i = 0; i < 26; i++) {
		storage[i] = 0;
	}
	int flag = 0;
	for (i = 0; i < s.size(); i++) {
		storage[s[i] - 97]++;
	}

	for (i = 0; i < 26; i++) {
		storage[i] = storage[i] % 2;
		if (storage[i] == 1) {
			count++;
		}
	}
	if (count > 1) {
		flag = 0;
	} else {
		flag = 1;
	}
	if (flag == 0)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}
