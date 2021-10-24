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
	int n, m; // dvd∞° 3∞≥¿”
	vector<int> v;
	int sum = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
		sum += temp;
	}
	int l = 1;
	int result, r = sum;
	int mid, cnt = 0;
	while (l <= r) {
		int s = 0;
		cnt = 0;
		mid = (l + r) / 2;
		for (int i = 0; i < n; i++) {
			//cout << "s : " << s << endl;
			if (s + v[i] > mid) {
				//cout << "cnt++" << endl;
				cnt++;
				s = 0;
			}
			s += v[i];
		}
		cout << cnt << endl;
		if (cnt >= m) {
			result = mid;
			l = mid + 1;
		}
		else if (cnt < m) {
			r = mid - 1;
		}
	
	}
	cout << "result : " << result+1 << endl;
}