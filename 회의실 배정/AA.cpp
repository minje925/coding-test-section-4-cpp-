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

bool compare(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}
int main(int argc, char* argv[]) {
	int n, cnt = 0;
	int max = -2147000000;
	vector<int> res;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		pair<int, int> temp;
		cin >> temp.first>>temp.second;
		v.push_back(temp);
	}
	sort(v.begin(), v.end(), compare);
	int before = 0;
	for (int i = 0; i < v.size(); i++) {
		cnt = 0;
		before = 0;
		//cout << v[i].first << " " << v[i].second << endl;
		for (int j = i; j < v.size(); j++) {
			//cout << "before : " <<before<<" seconde : "<<v[j].first<< endl;
			if (before <= v[j].first) {
	
				cnt++;
				before = v[j].second;
			}
		}
		res.push_back(cnt);
	}
	
	for (int i = 0; i < res.size(); i++) {
		if (res[i] > max)
			max = res[i];
	}
	cout << "res : " << max << endl;
	
}