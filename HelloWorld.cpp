#include <iostream>

using namespace std;

int main() {
	int size, q,a, e;
	cin >> size >> q;
	int ** da = new int *[size];
	for (int i = 0; i < size; i++) {
		cin >> a;
		int * b = new int[a];
		for (int j = 0; j < a; j++) {
			cin >> e;
			b[j] = e;
		}
		*(da + i) = b;
	}	
	int r,s;
	for (int i = 0; i < q; i++) {
		cin >> r >> s;
		cout << da[r][s] << endl;
	}
	return 0;
}
