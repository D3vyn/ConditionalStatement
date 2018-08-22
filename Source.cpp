#include <iostream>
using namespace std;

int main()
{
	//Checking Grades
	{
		int grade = 0;
		char gradeLetter;

		//Entering Grade NUmber
		cout << "Enter your grade number: \n";
		cin >> grade;

		//Determining Letter Grade
		if (grade >= 90 && grade <= 100)
		{
			gradeLetter = 'A';
		}
		else if (grade >= 80 && grade < 90)
		{
			gradeLetter = 'B';
		}
		else if (grade >= 70 && grade < 80)
		{
			gradeLetter = 'C';
		}
		else if (grade >= 60 && grade < 70)
		{
			gradeLetter = 'D';
		}
		//Anything else besides A, B, C, or D would be F ;(
		else
		{
			gradeLetter = 'F';
		}

		//Outputing Letter Grade
		cout << "Your grade letter is: " << gradeLetter;
		cout << endl;
	}
	//Multiples of Numbers
	{
		int input = 0;
		cout << "Enter a number: \n";
		cin >> input;
		//Multiple of 3 outputs Fizz
		if (input % 3 == 0)
		{
			cout << "Fizz";
			cout << endl;
		}
		//Multiple of 5 outputs Buzz
		else if (input % 5 == 0)
		{
			cout << "Buzz";
			cout << endl;
		}
		//Multiple of 3 & 5 outputs FizzBuzzz
		else if (input % 3 == 0 && input % 5 == 0)
		{
			cout << "FizzBuzz";
			cout << endl;
		}
	}
	//Adding/Subtracting
	{
	char op;
	float num1, num2 = 0;

	cout << "Enter two numbers \n";
	cin >> num1, num2;
	cout << endl;

	cout << "Do you want to +, -, *, or /? \n";
	cin >> op;
	switch (op)
	{
		case '+':
			cout << num1 + num2;
			break;
		case '-':
			cout << num1 - num2;
			break;
		case '*':
			cout << num1 * num2;
			break;
		case '/':
			cout << num1 / num2;
		default:
			cout << "Error! Operator is not correct";
			break;

	}
	}
	//Checking Health
	{
		float health;
		cout << "Enter Health: \n";
		cin >> health;

		if (health > 0)
		{
			if (health < 25)
			{
				cout << "Health is critical! \n";
			}
			cout << "Health is at " << health << "!";
			cout << endl;
		}
		
		else
		{
			cout << "You're dead!";
			cout << endl;
		}
	}
	//Putting Swtich sideways (examples)
	{
	//int age;
	//string thingsToSay = (age == 18) ? 'No' : (age == 19) ? 'No' : (age == 20) ? 'Don't Tell' : 'Welcome';


		//bool justBorn = false;
	//int age = (justBorn) ? '0' : 21;


	//int score = 95;
	//char letterGrade = (score >= 90 && score <= 100) ? 'A' :
		//(score >= 80 && score < 90) ? 'B' :
		//(score >= 70 && score < 80) ? 'C' :
		//(score >= 60 && score < 70) ? 'D' :
		//'F';
	}

	system("pause");
	return 0;
}