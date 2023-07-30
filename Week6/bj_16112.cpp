#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N, K;
	vector<int> v;
	
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	int i = 0;
	long long int sum = 0LL;
	sort(v.begin(), v.end());
	for (int j = 0; j <N; j++) {
		sum += (long long int)v.at(j) * (long long int)i;
		if (i < K)
			i++;
	}
	printf("%lld\n", sum);
}