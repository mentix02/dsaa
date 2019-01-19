#include <cstdlib>
#include <iostream>
using namespace std;

// maximum size for queue
#define SIZE 10

class Queue {
	private:
		int *arr;
		int capacity;
		int front;
		int rear;
		int count;

	public:
		Queue(int size = SIZE);
		~Queue();

		void pop();
		void push(int num);
		int peek();
		int size();
		bool isEmpty();
		bool isFull();

};

Queue::Queue(int size) {
	arr = new int[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}

void Queue::pop() {
	if (isEmpty()) {
		cout << "Underflow detected" << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Removing " << arr[front] << endl;

	front = (front + 1) % capacity;
	count--;
}

void Queue::push(int num) {
	if (isFull()) {
		cout << "Overflow detected" << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Inserting " << num << endl;

	rear = (rear + 1) % capacity;
	arr[rear] = num;
	count++;
}

int Queue::peek() {
	if (isEmpty()) {
		cout << "Underflow detected" << endl;
		exit(EXIT_FAILURE);
	}
	return arr[front];
}

Queue::~Queue() {
	delete arr;
}

int Queue::size() {
	return count;
}

bool Queue::isEmpty() {
	return size() == 0;
}

bool Queue::isFull() {
	return size() == capacity;
}

int main() {
	Queue q(5);

	q.push(1);
	q.push(2);
	q.push(3);

	cout << "Front is " << q.peek() << endl;
	q.pop();

	cout << "New front is " << q.peek() << endl;

	return 0;

}
