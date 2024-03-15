#include <iostream>
using namespace std;

int fs[11];
int n;

void input() {
	while (true) {
		cout << "memasukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 12)
			break;
		else {
			cout << "\narray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "masukan elemen array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ";";
		cin >> fs[i];
	}
}

void insertionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) //step 1
	{
		temp = fs[i]; //step 2
		j = i - 1;  //step 3
		while (j >= 0 && fs[j] > temp) //step 4
		{
			fs[j + 1] = fs[j];    //step4a
			j = j - 1;              //step4b
		}
		fs[j + 1] = temp;  //step5

	}
}

void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << "element array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << fs[j] << endl;
	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	insertionSort();
	display();

}