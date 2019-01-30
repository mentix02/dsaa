#include <string>
#include <iostream>

using namespace std;

struct Person {
	int age;
	string name;
};

int main() {

	int nums[] = {3, 4, 1, 9};

	for( int num : nums ) { // ranged for loop
		cout << num * num << endl;
	}

	Person people[3] = {
		{17, "Manan"},
		{18, "Kunal"},
		{34, "Someone"}
	};

	for ( auto person : people) {
		cout << "{ " << person.age << " : " << person.name << " }" << endl;
	}
	
	return 0;

}
