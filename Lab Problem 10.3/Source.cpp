
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int num_students;
	int score[20];
	double total_score = 0;
	int smallest = 99999;
	int largest = 0;
	double average = 0;

	cout << "Number of students: ";
	cin >> num_students;

	for (int x = 0; x < num_students; x++) {
		cout << "Enter score #" << x + 1 << ": ";
		cin >> score[x];
		
		if (score[x] < smallest) { smallest = score[x]; }
		if (score[x] > largest) { largest = score[x]; }

		total_score += score[x];
		average = total_score / num_students;

	}
	


	cout << "high = " << largest;
	cout << " low = " << smallest;
	cout << " average = " << setprecision(3) << average << endl;
}