#include <iostream>
using namespace std;

// Could declare texts array here

void show1(const int n_elements, string texts[]) {
	// cout << "Size of pointer: " << sizeof(texts) << endl;
	for (int i = 0; i < n_elements; i++) {
		cout << texts[i] << endl;
	}
}

void show2(const int n_elements, string *texts) {
	// cout << "Size of pointer: " << sizeof(texts) << endl;
	for (int i = 0; i < n_elements; i++) {
		cout << texts[i] << endl;
	}
}

void show3(string (&texts)[3]) {
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << texts[i] << endl;
	}
}

// Note: don't return pointers to local variables

char *get_memory(int mem_size) {
	char *p_mem = new char[mem_size];
	cout << "Allocated memory!" << endl;
	return p_mem; // Sample doc: call free_mem() when no longer needed
}

void free_mem(char *p_mem) {
	delete [] p_mem;
	cout << "Memory freed!" << endl;
}

int main() {

	string texts[] = {"apple", "orange", "banana"};
	cout << "Size of string array: " << sizeof(texts) << endl;
	show3(texts);

	char *p_memory = get_memory(100);
	free_mem(p_memory);

	return 0;
}
