
#include <iostream>
using namespace std;

// CircularQueuesArray_0047
// Minimal 15 commit
class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];

public:
	Queues() {
		FRONT = -1;
		REAR = -1;
	}
	void insert() {
		int num;
		cout << "enter a number :";
		cin >> num;
		cout << endl;


};