#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	string a;
	int T = 0, i, flag, end, c, d;
	cin >> T;
	while (T > 0) {
		flag = 0;
		cin >> a;
		end = a.size() - 1;
		for (i = 0; i < a.size() - 1;) {
			if (abs(a[i] - a[i + 1]) == abs(a[end] - a[end - 1])) {
				i++;
				end--;
			} else {
				flag = 1;
				break;
			}
		}
		if (flag) {
			cout << "Not Funny" << endl;
		} else
			cout << "Funny" << endl;
		T--;
	}

	return 0;
}
