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
	int n, c, max, min, result,ch = 0;
	vector<int> v;
	max = -2147000000;
	min = 2147000000;
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
		if (temp > max)
			max = temp;
		if (temp < min)
			min = temp;
	}
	int mid,l, r;
	l = 1;
	r = max - min;
	int cnt = 1;
	while (l <= r) {
		mid = (l + r) / 2;
		int before = v[0];
		for (int i = 0; i < n; i++) {
			if (v[i] - before >= mid) {
				before = v[i];
				cnt += 1;
			}
			if (cnt == c) {
				result = mid;
				ch = 1;
				break;
			}
		}
		if (ch)
			l = mid + 1;
		else
			r = mid - 1;
	}
	cout << "result : "<<result << endl;
}