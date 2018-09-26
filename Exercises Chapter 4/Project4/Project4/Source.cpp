#include "std_lib_facilities.h"

int main() {
	for (int n = 1000; n <= 1000000000; n *= 1000) {
		int sum = 1, curr = 1, k = 1;
		while (sum < n) {
			++k;
			curr *= 2;
			sum += curr;
		}
		cout << k << " squares are needed for " << n << " grains\n";
	}
	return 0;
}