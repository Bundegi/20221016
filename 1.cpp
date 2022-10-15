#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"

using namespace std;

//int main() {
//	fast;
//	int N, Su,top=0;
//	cin >> N;
//	if (N == 1) {
//		cout << 4;
//		return 0;
//	}
//	vector<int> Array;
//	for (int i = 0; i < N; i++) {
//		cin >> Su;
//		Array.push_back(Su);
//	}
//	sort(Array.begin(), Array.end());
//	int A=0,B=1;
//	while (A != Array.size()-1) {
//		if (Array[B] > Array[A] + 4) {
//			if (top < B - A) top = B - A;
//			A++;
//		}
//		else if (B == Array.size() - 1) {
//			if (top < B - A) top = (B + 1) - A;
//			A++;
//		}
//		else B++;
//	}
//	cout << 5 - top;
//}