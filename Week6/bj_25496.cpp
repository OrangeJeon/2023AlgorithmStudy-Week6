#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int P, N;
	int cnt = 0;
	cin >> P >> N;
	
	vector<int> a;
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());

	for (int i = 0; i < N; i++)
	{
		if (P >= 200)
			break;

		P = P + a[cnt];
		cnt += 1;
	}
	printf("%d", cnt);

}