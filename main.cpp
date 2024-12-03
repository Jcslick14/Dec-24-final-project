#include<iostream>
using namespace std;

int main() {
	int room = 1;
	string choice;

	cout << "Welcome to the text base game!" << endl;
	do {
		switch (room) {
		case 1:
			cout << "You are in room 1. You can go (e)ast." << endl;
			cin >> choice;
			if (choice == "e")
				room = 2;
			break;
		case 2:
			cout << "You are in room 2. You can go (s)outh." << endl;
			cin >> choice;
			if (choice == "s")
				room = 3;
			break;
		case 3:
			cout << "You are in room 3. You can go (s)outh or (n)orth (." << endl;
			cin >> choice;
			if (choice == "s")
				room = 4;
			else if (choice == "n")
				room = 3;
			break;
		case 4:
			cout << "You are in room 4. You can go (e)ast." << endl;
			cin >> choice;
			if (choice == "e")
				room = 5;
			break;



		}//end switch
	} while (choice != "q"); //end game loop 
}//end of main
