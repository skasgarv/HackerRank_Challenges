#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	string a, b;
	int i, res = 0, storage1[26], storage2[26];
	for (i = 0; i < 26; i++) {
		storage1[i] = 0;
		storage2[i] = 0;
	}
	cin >> a;
	cin >> b;

	for (i = 0; i < a.size(); i++) {
		storage1[a[i] - 97]++;
	}
	for (i = 0; i < b.size(); i++) {
		storage2[b[i] - 97]++;
	}
	for (i = 0; i < 26; i++) {
		res = res + abs(storage1[i] - storage2[i]);
	}
	cout << res << endl;

	return 0;
}
