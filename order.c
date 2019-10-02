#include <stdio.h>

int main() {
  int choice, number, finalPrice = 0;
  while(1) {
  	printf("Enter your choice of food\n1. Fast Food\n2. Beverages\n\n");
  	scanf("%d", &choice);
  	switch(choice) {
  		case 1: printf("\n1. Burger\n2. Pizza\n3. Momos\n4. Wraps\n\n");
  				scanf("%d", &choice);
  				switch(choice) {
  					case 1: printf("\n1. Cheese Burger\n2. Chicken Burger\n3. Veg Burger\n4. Double Decker\n\n");
  							scanf("%d", &choice);
  							switch(choice) {
  								case 1: finalPrice += 100; break;
  								case 2: finalPrice += 150; break;
  								case 3: finalPrice += 80; break;
  								case 4: printf("\n1. Veg\n2. Chicken\n\n");
  										scanf("%d", &choice);
  										switch(choice) {
  											case 1: finalPrice += 140; break;
  											case 2: finalPrice += 220; break;
  											default: printf("\nPlease Enter Correct Choice\n\n");
  										}
  								default: printf("Please Enter Correct Choice\n");
  							} break;
  					case 2: printf("\n1. Cheese Pizza\n2. Margharita Pizza\n3. Chicken Pizza\n\n");
  							scanf("%d", &choice);
  							switch(choice) {
  								case 1: finalPrice += 100; break;
  								case 2: finalPrice += 120; break;
  								case 3: finalPrice += 160; break;
  								default: printf("\nPlease Enter Correct Choice\n\n");
  							} break;
  					case 3: printf("\n1. Chicken Momo\n2. Veg Momo\n\n");
  							scanf("%d", &choice);
  							switch(choice) {
  								case 1: finalPrice += 60; break;
  								case 2: finalPrice += 40; break;
  								default: printf("\nPlease Enter Correct Choice\n\n");
  							} break;
  					case 4: printf("\n1. Veg  Wrap\n2. Egg Wrap\n3. Chicken Wrap\n\n");
  							scanf("%d", &choice);
  							switch(choice) {
  								case 1: finalPrice += 40; break;
  								case 2: finalPrice += 60; break;
  								case 3: finalPrice += 90; break;
  								default: printf("\nPlease Enter Correct Choice\n\n");
  							} break;
  					default: printf("\nPlease Enter Correct Choice\n\n");
  				} break;
  		case 2: printf("\n1. Hot\n2. Cold\n\n");
  				scanf("%d", &choice);
  				switch(choice) {
  					case 1: printf("\n1. Tea\n2. Coffee\n\n");
  							scanf("%d", &choice);
  							switch(choice) {
  								case 1: printf("\n1. Masala\n2. Butter\n\n");
  										scanf("%d", &choice);
  										switch(choice) {
  											case 1: finalPrice += 15; break;
  											case 2: finalPrice += 20; break;
  											default: printf("\nPlease Enter Correct Choice\n\n");
  										} break;
  								case 2: printf("\n1. Espresso\n2. Tall Latte\n3. Black\n4. Cappuccino\n\n");
  										scanf("%d", &choice);
  										switch(choice) {
  											case 1: finalPrice += 70; break;
  											case 2: finalPrice += 90; break;
  											case 3: finalPrice += 80; break;
  											case 4: finalPrice += 60; break;
  											default: printf("\nPlease Enter Correct Choice\n\n");
  										} break;
  								default: printf("\nPlease Enter Correct Choice\n\n");
  							} break;
  					case 2: printf("\n1. Lemonade\n2. Ice Tea\n3. Cold Coffee\n4. Virgin Mojito\n5. Cold Drink\n\n");
  							scanf("%d", &choice);
  							switch(choice) {
  								case 1: finalPrice += 100; break;
  								case 2: finalPrice += 80; break;
  								case 3: finalPrice += 90; break;
  								case 4: finalPrice += 120; break;
  								case 5: printf("\n1. Pepsi\n2. 7 UP\n3. Mountain Dew\n4. Slice\n\n");
  										scanf("%d", &choice);
  										finalPrice += 80; break;
  								default: printf("\nPlease Enter Correct Choice\n\n");
  							} break;
  				} break;
  		default: printf("Please Enter Correct Choice\n");
  	}
  	printf("\n\nWould you like to add more items?\n1. YES\n2. NO\n\n");
  	scanf("%d", &choice);
  	if(choice != 1){
  		printf("\nYour Final Order Price is : Rs. %d\n", finalPrice);
  		break;
  	}
  }
}
