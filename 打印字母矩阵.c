/* 
 A B C D E F G H I
 B C D E F G H I A
 C D E F G H I A B
 D E F G H I A B C
 E F G H I A B C D
 F G H I A B C D E
 E F G H I A B C D
 D E F G H I A B C
 C D E F G H I A B
 B C D E F G H I A
 A B C D E F G H I
 */

#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	char a[100];
	for (int i = 0; i < 9; i++) {
		a[i] = 'A' + i;
	}
	int count = 0;
	for (int i = 0; i < 6; i++) {
		int count = i;
		if (count >= 9) {
			count -= 9;
		}
		for (int j = 0; j < 9; j++) {
			cout << " " << a[count];
			count++;
			if (count >= 9) {
				count -= 9;
			}
		}
		cout << endl;
	}
	for (int i = 4; i >= 0; i--) {
		int count = i;
		if (count >= 9) {
			count -= 9;
		}
		for (int j = 0; j < 9; j++) {
			cout << " " << a[count];
			count++;
			if (count >= 9) {
				count -= 9;
			}
		}
		cout << endl;
	}
}
