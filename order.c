#include <stdio.h>

int main() {
	int price = 0, c, v;
	printf("Enter your choice...\n1. Pizza\n2. Burger\n3. Wrap\n");
	scanf("%d", &c);
	printf("Enter category...\n1. Veg\n2. Chicken\n");
	scanf("%d", &v);
	if(v == 1) {
		switch(c) {
			case 1: price = 100; break;
			case 2: price = 80; break;
			case 3: price = 70; break;
			default: printf("Enter correct choice\n");
		}
	} else if(v == 2) {
		switch(c) {
			case 1: price = 150; break;
			case 2: price = 110; break;
			case 3: price = 90; break;
			default: printf("Enter correct choice\n");
		}
	} else printf("Enter Correct Choice\n");
	printf("Price of your ordered food item is : Rs. %d", price);
	return 0;
}
