#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// simply follow the instructions in the problem statement
	map<string, int> m;
	for (int i = 0; i < n; i++) {
		string name;
		int number;
		cin >> name >> number;
		m[name] = number;
	}
	string name;
	while (cin >> name) {
		map<string, int>::iterator itr = m.find(name);
		if (itr != m.end()) {
			cout << name << "=" << m[name];
		} else {
			cout << "Not found";
		}
		cout << '\n';
	}
	return 0;
}
