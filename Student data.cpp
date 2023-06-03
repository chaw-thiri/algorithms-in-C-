
#include <iostream>
using namespace std;
#define SIZE (3)
#include <iomanip>
#include <string>
struct student {
	string name;
	int id;
	int age;
	char gender;
	int Kor;
	int Eng;
	int Math;
};
student num[SIZE];


// function prototypes 
void input(void);
void show(void);
void bestScore(void);
void male();
void female();
void update();
void selectMenu();

int main() {
	input();
	selectMenu();
	cout << "\nThank you for using our program \n";


	return 0;
}
void selectMenu() {
	int choice;
	while (1) {
		cout << "==========================================================================================================================";
		cout << " 1. Input \n 2. Show \n 3. Best score \n 4.Male Students\n 5.Female Students\n 6. Update info\n 7. End the program \n\n Select menu : ";
		cin >> choice;
		if (choice == 7) break;
		switch (choice) {
		case 1: {
			input();
			break;
		}
		case 2: {
			show(); break;
		}
		case 3: {
			bestScore(); break;
		}
		case 4: {
			male(); break;
		}
		case 5: {
			female(); break;
		}
		case 6: {
			update(); break;
		}
		default: selectMenu();
		}
	}
	cout << endl;
}
void input() {
	cout << "Enter the name, student ID, age, gender(M/F) and scores of 3 students \n";
	for (int i = 0; i < SIZE; i++) {
		cout << "student " << i + 1 << " : ";
		cin >> num[i].name >> num[i].id >> num[i].age >> num[i].gender >> num[i].Kor >> num[i].Eng >> num[i].Math;
	}
	cout << endl;
}
void update() {
	
	int id;
	cout << "Enter the id of the student you want to update : ";
	cin >> id;
	for (int i = 0; i < SIZE; i++) {
		if (id == num[i].id) {
			cout << "Enter new data (name, id, age, gender , Korean, English, Math) : ";
			cin >> num[i].name >> num[i].id >> num[i].age >> num[i].gender >> num[i].Kor >> num[i].Eng >> num[i].Math;
			cout << "====== Updated File ===== "<< endl;
			show();
			cout << endl;
			return;
		}
	}
	cout << " The id does not exist in the system. \n";
}
void show() {
	cout << "The score report \n";
	for (int i = 0; i < 3; ++i) {
		cout << "Student " << i + 1 << endl;
		cout << "    Name : " << num[i].name << ", student ID : " << num[i].id << ", age : " << num[i].age << ", gender : " << num[i].gender << endl;
		cout << "    Korean :" << num[i].Kor << ", English :" << num[i].Eng << ", Math :" << num[i].Math << ", Total : " << num[i].Kor + num[i].Eng + num[i].Math << endl;
	}

}

void bestScore() {
	cout << "Print out the best achievers and their scores ...\n";
	student bestStuInKorean = num[0], bestStuInMath = num[0], bestStuInEng = num[0];

	for (int i = 0; i < SIZE; ++i) {
		if (bestStuInKorean.Kor < num[i].Kor) bestStuInKorean = num[i];
		if (bestStuInMath.Math < num[i].Math) bestStuInMath = num[i];
		if (bestStuInEng.Eng < num[i].Eng) bestStuInEng = num[i];
	}
	cout << "Best score of Korean : " << bestStuInKorean.name << " " << bestStuInKorean.Kor << endl;
	cout << "Best score of Math : " << bestStuInMath.name << " " << bestStuInMath.Math << endl;
	cout << "Best score of Eng : " << bestStuInEng.name << " " << bestStuInEng.Eng << endl;
	cout << endl;
}
void male() {
	cout << "MALE STUDENTS : " << endl;
	for (int i = 0; i < SIZE; ++i) {
		if (num[i].gender == 'M' || num[i].gender == 'm') cout << num[i].name << endl;

	}
	cout << endl;

}
void female() {
	cout << "FEMALE STUDENTS : " << endl;
	for (int i = 0; i < SIZE; ++i) {
		if (num[i].gender == 'F' || num[i].gender == 'f') cout << num[i].name << endl;

	}
	cout << endl;

}
