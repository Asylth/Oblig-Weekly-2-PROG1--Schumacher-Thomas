#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void taskredacted(); //old task 3
bool con();

//Menu to choose task
int main()
{
	int option;
	bool runapp = true;
	bool ranonce = false;

	do {
		
		if (ranonce == true) {
			std::cout << "\n \n";

		}
		ranonce = true;
		std::cout << "Choose task \n";
		std::cout << "1. Task 1 \n";
		std::cout << "2. Task 2 \n";
		std::cout << "3. Task 3 \n";
		std::cout << "4. Task 4 \n";
		std::cout << "5. Task 5 \n";
		std::cout << "6. Task 6 and 7 \n";
		std::cout << "7. Old Task 3 \n";
		std::cout << "0. Quit app ";
		std::cout << "Enter task number: ";
		std::cin >> option;

		switch (option) {
		case 1:
			std::cout << std::endl;
			task1();
			break;
		case 2:
			std::cout << std::endl;
			task2();
			break;
		case 3:
			std::cout << std::endl;
			task3();
			break;
		case 4:
			std::cout << std::endl;
			task4();
			break;
		case 5:
			std::cout << std::endl;
			task5();
			break;
		case 6:
			std::cout << std::endl;
			task6();
			break;
		case 7:
			std::cout << std::endl;
			taskredacted();
			break;
		case 0:
			runapp = false;
			break;
		default:
			std::cout << "Enter a valid option \n";
			break;

		}
	} while (runapp == true);
}


//count to 100 using a do while loop and a for loop
void task1() {
	int i = 0;
	bool go = true;

	do {
		i = i++;
		std::cout << i << std::endl;
	} while (i < 100);

	std::cout << "\n \n";

	for (int j = 1; j <= 100; j++) {
		std::cout << j << std::endl;
	}
}



//count down from 100 to 1 using a for loop
void task2() {

	for (int count = 100; count >= 1; count = count - 1) {
		std::cout << count << std::endl;
	}
}




//Make a program that writes 5 to 50 in steps of 5. Use a while loop. (should print 5 10 15 20 25, etc.)
void task3() {

	int count = 0;

	do {
		count = count + 5;
			std::cout << count << std::endl;


	} while (count < 50);

}


//Make a program that writes 5 to 50 in steps of 5. Use a for loop. (should print 5 10 15 20 25, etc.)
void task4() {

	for (int count = 5; count <= 50; count = count + 5) {
		std::cout << count << std::endl;
	}

}



//Make a program that writes 5 to 50 in steps of 5. Use ..while.(should print 5 10 15 20 25, etc.)
void task5() {

	std::cout << "This task is the same as 4 \n";
		task4();

}


//Give wanted grade, gives a reponse.
void task6() {

	char grade;

	std::cout << "What grade do you want in Programming 1? \n";
	std::cout << "Grades: A, B, C, D, E, F \n";
	std::cout << "Enter wanted grade: ";
	std::cin >> grade;

	switch (grade) {
		case 'A':case 'a':
			std::cout << "Outstanding\n";
			break;
		case 'B':case 'b':
			std::cout << "Very good\n";
			break;
		case 'C':case 'c':
			std::cout << "Good\n";
			break;
		case 'D':case 'd':
			std::cout << "Some flaws\n";
			break;
		case 'E':case 'e':
			std::cout << "Not very good\n";
			break;
		case 'F':case 'f':
			std::cout << "Fail\n";
			break;
		default:
			std::cout << "That is not a grade!";
			break;


	}


}

//Game where program guesses user input number
void taskredacted() {

	int toguess;
	int guess = 0;

	do {

		std::cout << "Enter a random number from 1-10 and I will guess it: ";
		std::cin >> toguess;

		srand(time(NULL)); //got this solution from: cplusplus.com/reference/cstdlib/srand/
		guess = rand() % 10 + 1;

		std::cout << "I guess your number is " << guess << std::endl;

		if (guess == toguess) {
			std::cout << "I win! \n";
			con();
		}
		else {
			std::cout << "You win! I could not guess your number \n";
			con();
		}

	} while (con() == true);
}

//funtion to ask if you want to continue a task. (task3)
bool con() { //this runs two times and i am not sure why

	char cont;
	std::cout << "Do you want to continue? (Y/N)";
	std::cin >> cont;

	switch (cont) {
	case 'Y':case'y':
		return true;
		break;
	case 'N':case 'n':
		return false;
		break;
	}

}