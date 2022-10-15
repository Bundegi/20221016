#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"

using namespace std;

int main() {
	fast;
	int N, jimin, hansu;
	cin >> N >> jimin >> hansu;
	vector<string> Array(N);
	for (int i = 0; i < N; i++) {
		if (i + 1 == jimin) Array[i] = '*';
		else if (i + 1 == hansu) Array[i] = '*';
		else Array[i] = to_string(i+1);
	}
	int count = 1;
	while (N!=0) {
		int Su = 1;
		int flag = 1;
		if (N % 2 != 0) {
			N--;
			flag = 0;
		}
		for (int i = 0; i < N; i += 2,Su++) {
			if (Array[i] == "*" || Array[i + 1] == "*") {
				if (Array[i] == "*" && Array[i + 1] == "*") {
					cout << count;
					return 0;
				}
				else if (Array[i] == "*") Array[i + 1] = " ";
				else Array[i] = " ";
			}
			else {
			Array[i] = to_string(Su);
			Array[i + 1] = " ";
			}
		}
		if (flag == 0&& Array[N] != "*") Array[N] = to_string(Su);
		Array.erase(remove(Array.begin(), Array.end(), " "), Array.end());
		if (flag != 0)N /= 2;
		else N = Su;
		count++;
	}
	cout << -1;
}