#include <stdio.h>

int main() {

	char *name;
	int age, h_number;
	printf("enter name : ");
	scanf("%s", name);

	printf("enter age : ");
	scanf("%d", &age);

	printf("enter house number : ");
	scanf("%d", &h_number);

	printf("address for \"%s\" : %p\n", name, &name);
	printf("address for \"%d\" : %p\n", age, &age);
	printf("address for \"%d\" : %p\n", h_number, &h_number);

	return 0;
}
