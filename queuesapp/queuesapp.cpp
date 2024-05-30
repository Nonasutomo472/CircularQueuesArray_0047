
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

		//cek apakah antrian penuh 
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueue overFlow\n";
			return;
		}

		//cek apakah antrian kosong 
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		else {
			//jika REAR berada di posisi terakhir array, kembali ke awal array
			if (REAR == max - 1)
				REAR = 0;
			else
				REAR = REAR + 1;
		}
		queue_array[REAR] = num;
	}
	void remove() {
		//cek apabila antrian kosong 
		if (FRONT == REAR) {
			cout << "Queue underflow\n";
			return;
		}
		cout << "\The element deteled from the queue is:" << queue_array[FRONT] << "\n";

		//cek jika antrian hanya memiliki satu elemen 
		if (FRONT == REAR) {
			FRONT = -1;
			REAR = -1;
		}
		else {
			//jika element yang dihapus berada di posisi terakhir array,kembali k awal array
			if (FRONT == max - 1)
				FRONT = 0;
			else
				FRONT = FRONT + 1;
		}
	}

	void display() {
		// cek apakah antrian kosong 
		if (FRONT == -1) {
			cout << "Queue is empty\n";
			return;

	}


};