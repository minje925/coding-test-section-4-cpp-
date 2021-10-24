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
	int n, before = 0;
	string str = "";
	vector<int> v, res;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	int s, e;
	s = 0, e = n - 1;
	while(s<=e){
		if (before < v[s] && before < v[e]) {
			if (v[s] < v[e]) {
				res.push_back(v[s]);
				before = v[s];
				str += 'L';
				s++;
			}
			else {
				res.push_back(v[e]);
				before = v[e];
				str += 'R';
				e--;
			}
		}
		else if (before < v[s] && before > v[e]) {
			res.push_back(v[s]);
			str += 'L';
			before = v[s];
			s++;
		}
		else if (before > v[s] && before < v[e]) {
			res.push_back(v[e]);
			str += 'R';
			before = v[e];
			e--;
		}
		else 
			break;

	}
	/*
	for (int i = 0; i < n; i++) {
		if (v.size() < 2)
			break;
		int front = v.front();
		int back = v.back();
		if (before < front && before < back) {
			if (front > back) {
				res.push_back(back);
				before = back;
				v.erase(v.end());
			}
			else {
				res.push_back(front);
				before = front;
				v.erase(v.begin());
			}
		}
		else if (before < front && before > back) {
			res.push_back(front);
			before = front;
			v.erase(v.begin());
		}
		else if (before > front && before < back) {
			res.push_back(back);
			before = back;
			v.erase(v.end());
		}
	}
	*/
	for (auto num : res) {
		cout << num << " ";
	}
	cout << "\n" << str << endl;
}