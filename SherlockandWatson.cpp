//============================================================================
// Name        : Circular.cpp
// Author      : Suhas
// Version     :
// Copyright   : One Two Three -> eerhT owT enO(complete reversal), be it integer or character
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

int main() {

	int top = -1;
	int N;
	int K;
	int Q;
	cin >> N;
	int array[N];
	cin >> K;
	cin >> Q;
	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}
	if(K>N){
		K = K%N;
	}
	int *new_arr;
	new_arr = new int[N];
	int j=0;
	for(int i = N-K;i<N;i++){
		new_arr[j] = array[i];
		j++;
	}
	for(int i=0;i<N-K;i++){
		new_arr[j] = array[i];
		j++;
	}

	while (Q > 0) {
		int x;
		cin >> x;
		cout << new_arr[x] << endl;
		Q--;
	}

	delete [] new_arr;
	return 0;
}
