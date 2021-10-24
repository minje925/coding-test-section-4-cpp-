#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int n, m, cnt = 0;
	vector<int> v;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	int s, e;
	s = 0, e = n - 1;
	while(s<=e) {
		if (v[s] + v[e] > m) {
			cnt++;
			e--;
		}
		else {
			cnt++;
			s++;
			e--;
		}
	}
	cout << "cnt : " << cnt;
}