#include <iostream>
#include <string>
#include <cstdlib>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
bool con();

//Menue to choose task
int main()
{
	int option;

	std::cout << "Choose task \n";
	std::cout << "1. Task 1 \n";
	std::cout << "2. Task 2 \n";
	std::cout << "3. Task 3 \n";
	std::cout << "4. Task 4 \n";
	std::cout << "5. Task 5 \n";
	std::cout << "6. Task 6 \n";
	std::cout << "7. Task 7 \n";
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
		task7();
		break;
	}
}


//count to 100 using a do while loop and a for loop
void task1() {
	int i = 0;
	bool go = true;

	do {
		i = i++;
		std::cout << i << std::endl;
	} while (i < 100);

	std::cout << std::endl << "Break \n";

	for (int j = 0; j <= 100; j++) {
		std::cout << j << std::endl;
	}
}



//count down from 100 to 1 using a for loop
void task2() {

	for (int count = 100; count >= 1; count = count - 1) {
		std::cout << count << std::endl;
	}
}



//Game where program guesses user input number
void task3() {
	
	int toguess;
	int guess = 0;

	do {

	std::cout << "Enter a random number from 1-100 and I will guess it: ";
	std::cin >> toguess;

		guess = rand() % 100 + 1;

		std::cout << "I guess your number is " << guess << std::endl;

		if (guess == toguess) {
			std::cout << "I win! \n";
			con();
		}
		else{
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


//Make a program that writes 5 to 50 in steps of 5. Use a while loop. (should print 5 10 15 20 25, etc.)
void task4() {

	int count = 0;

	do {
		count = count + 5;
			std::cout << count << std::endl;


	} while (count < 50);

}


//Make a program that writes 5 to 50 in steps of 5. Use a for loop. (should print 5 10 15 20 25, etc.)
void task5() {

	for (int count = 5; count <= 50; count = count + 5) {
		std::cout << count << std::endl;
	}

}



//Make a program that writes 5 to 50 in steps of 5. Use ..while.(should print 5 10 15 20 25, etc.)
void task6() {

	std::cout << "This task is the same as 4";
		task4();

}



void task7() {

	char grade;

	std::cout << "What grade do you want in Programming 1? \n";
	std::cout << "Grades: A, B, C, D, E, F \n";
	std::cout << "Enter wanted grade: ";
	std::cin >> grade;

	switch (grade) {
		case 'A':case 'a':
			std::cout << "Outstanding\n";
		case 'B':case 'b':
			std::cout << "Very good\n";
		case 'C':case 'c':
			std::cout << "Good\n";
		case 'D':case 'd':
			std::cout << "Some flaws\n";
		case 'E':case 'e':
			std::cout << "Not very good\n";
		case 'F':case 'f':
			std::cout << "Fail\n";

	}


}