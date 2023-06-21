#include "testlib.h"
#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
 
	int t = atoi(argv[1]);
	int l = atoi(argv[2]);
	cout << t << endl;
 
	int temp;
	vector<int> seq;
	vector<int> a;
    vector<int> c;
 
	for (int j = 0; j < t; j++) {
		temp = rnd.next(1, l);
		
		for (int i = 0; i < temp; i++) 
			seq.push_back(i + 1);
		shuffle(seq.begin(), seq.end());

 		a.resize(temp);
		c.resize(temp);
 
		for (int i = 0; i < temp; i++) 
        	a[i] = rnd.next(1, 1000*1000*1000);	
		for (int i = 0; i < temp; i++) 
        	c[i] = rnd.next(1, 65);
		sort(a.begin(), a.end());
 
		cout << temp << endl;
		for (int i = 0; i < temp - 1; i++) cout << seq[i] << ' ';
    	cout << seq[temp - 1] << endl;
		for (int i = 0; i < temp - 1; i++) cout << a[i] << ' ';
    	cout << a[temp - 1] << endl;
    	for (int i = 0; i < temp - 1; i++) cout << c[i] << ' ';
    	cout << c[temp - 1] << endl;
 
		seq.clear();
		a.clear();
		c.clear();
	}
}