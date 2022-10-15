#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"

using namespace std;

//int main() {
//	fast;
//	int SW,Stu;
//	vector<char> loc;
//
//	cin >> SW;
//	for (int i = 0; i < SW; i++) {
//		char ch;
//		cin >> ch;
//		loc.push_back(ch);
//	}
//
//	cin >> Stu;
//	for (int i = 0; i < Stu; i++) {
//		int Se, locc;
//		cin >> Se >> locc;
//		if (Se == 1) {
//			for (int j = locc; j <= SW; j += locc) {
//				if (loc[j - 1] == '0') loc[j - 1] = '1';
//				else loc[j - 1] = '0';
//			}
//		}
//		else {
//			locc--;
//			if (loc[locc] == '1') loc[locc] = '0';
//			else loc[locc] = '1';
//			int mem = 1;
//			while ((locc - mem > 0) && (locc + mem < SW - 1)) {
//				if (loc[locc - mem] != loc[locc + mem]) break;
//				else mem++;
//			}
//			if (mem == 0) continue;
//			else if (((locc - mem < 0) || (locc + mem > SW - 1))||loc[locc - mem] != loc[locc + mem]) mem--;
//			for (int j = mem; j >0; j--) {
//				if (loc[locc - j] == '0') {
//					loc[locc - j] = '1';
//					loc[locc + j] = '1';
//				}
//				else {
//					loc[locc - j] = '0';
//					loc[locc + j] = '0';
//				}
//			}
//		}
//	}
//	for (int i = 0; i < loc.size(); i++) {
//		if (i != 0 && (i % 20 == 0)) cout << endl;
//		cout << loc[i];
//		if (i + 1 != loc.size()) cout << ' ';
//	}
//}