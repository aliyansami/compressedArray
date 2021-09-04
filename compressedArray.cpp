#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void compressedArray(string x) {
	char z;
	int counter=0;
	int sizea = 0;

	for (int i = 0; x[i] != '\0'; i++) {
		
		counter++;
	
	}


	for (int i = 0; i < counter; i++) {
		for (int j = i + 1; j < counter; j++) {
			if (x[i] == x[j]) {
				x[i] = -1;
			}
		}
	}
	
	for (int i = 0; i < counter; i++) {
		if (x[i] != -1) {
			cout << x[i] <<' ';
		}
	}

}

int main() {
	string a;
	cout << "write a Word: " << "\n";
	cin >> a;
	compressedArray(a);
    return 0;
}