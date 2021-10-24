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
	int n, cnt = 0;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		pair<int, int> temp;
		cin >> temp.first>>temp.second;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		//cout << v[i].first << " " << v[i].second << endl;
		for (int j = i; j < n; j++) {
			if (v[i].second < v[j].second) {
				break;
			}
			if (j == n - 1)
				cnt++;
		}
	}
	cout << "cnt : " << cnt << endl;
}