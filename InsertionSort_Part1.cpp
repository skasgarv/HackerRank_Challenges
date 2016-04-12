#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector<int> ar) {
	int i, value;
	int end = ar.size() - 1;
	for (i = 0; i < ar.size(); i++) {
		value = ar[end];
		while (end > 0 && ar[end - 1] > value) {
			ar[end] = ar[end - 1];
			end--;
			for (int j = 0; j < ar.size(); j++) {
				cout << ar[j] << " ";
			}
			cout << endl;
		}
		ar[end] = value;
	}
	for (int j = 0; j < ar.size(); j++) {
		cout << ar[j] << " ";
	}
	cout << endl;

}
int main(void) {
	vector<int> _ar;
	int _ar_size;
	cin >> _ar_size;
	for (int _ar_i = 0; _ar_i < _ar_size; _ar_i++) {
		int _ar_tmp;
		cin >> _ar_tmp;
		_ar.push_back(_ar_tmp);
	}

	insertionSort(_ar);
	return 0;
}
