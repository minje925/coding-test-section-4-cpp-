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

pair<int, int> max(vector<int> v) {
	int t = -2147000000;
	int index = 0;
	for (int i=0; i < v.size(); i++) {
		if (v[i] > t) {
			t = v[i];
			index = i;
		}
	}
	pair<int, int> tp;
	tp.first = t;
	tp.second = index;
	return tp;
}
pair<int, int> min(vector<int> v) {
	int t = 2147000000;
	int index = 0;
	for (int i=0; i < v.size(); i++) {
		if (v[i] < t) {
			t = v[i];
			index = i;
		}
	}
	pair<int, int> tp;
	tp.first = t;
	tp.second = index;
	return tp;
}
int main(int argc, char* argv[]) {
	int n, m;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		pair<int, int> max_v = max(v);
		pair<int, int> min_v = min(v);
		v[max_v.second]--;
		v[min_v.second]++;
	}
	pair<int, int> max_v = max(v);
	pair<int, int> min_v = min(v);
	cout << max_v.first - min_v.first << endl;
}