#include <iostream>
using namespace std;

class MM {
public:
	void Display(); // Function to display 
	void setoddNumber(int); // Function to set the odd number
	void pattern(); // Function to make the MM logo 
private:
	int oddN; // Variable of class MM
};

void MM::Display(){
	int odd;
	cout << "Input an odd number between 2 and 10 000: ";
	cin >> odd;
	if (2 < odd && odd < 10000){ // Variable between 2 and 10 000
		if (odd % 2 == 0)  cout << "The number you input is not odd number!\n";
		else {
			setoddNumber(odd);
			pattern();
		}
	}
	else cout << "The number you input is not between 2 and 10 000!\n";
}

void MM::setoddNumber(int n){
	oddN = n;
}

void MM::pattern()
{
	int line = oddN;
	int line2 = oddN;
	int star = oddN;
	int star2 = star * 2 - 1;
	int NOR = 0; // Number of rows
	int count = 0; // Counter for printing two M
	while (NOR != (oddN + 1) / 2) // Cycle to print th first half of M
	{
		for (count = 0; count < 2; count ++){ // Loop to print the two M
			for (int i = 0; i < line2; i++) // Loop to print first line of "-"
			{
				cout << "-";
			}
			for (int i = 0; i < star; i++) // Loop to print the first line of "*"
			{
				cout << "*";
			}
			for (int i = 0; i < line; i++) // Loop to print the second line of "-"
			{
				cout << "-";
			}
			for (int i = 0; i < star; i++) // Loop to print the second line of *"
			{
				cout << "*";
			}
			for (int i = 0; i < line2; i++) // Loop to print the last line of "-"
			{
				cout << "-";
			}
		}
		cout << endl;
		line2--; // Removeing one "-" from the begin and th end
		line = line - 2; // Removeing two "-" from the begin and th end
		star = star + 2; //Add two more positions for "*"
		NOR++;
	}
	while (NOR != oddN + 1) // Cycle to print the second hàlf ot M
	{
		star = oddN;
		line = line + 2; // Add two more "-"
		for (count = 0; count < 2; count++){ // Loop to print first line of "-"
			for (int i = 0; i < line2; i++)
			{
				cout << "-";
			}
			for (int i = 0; i < star; i++) // Loop to print first line of "*"
			{
				cout << "*";
			}
			for (int i = 0; i < line; i++) // Loop to print second line of "-"
			{
				cout << "-";
			}
			for (int i = 0; i < star2; i++) // Loop to print second line of "*"
			{
				cout << "*";
			}
			for (int i = 0; i < line; i++) // Loop to print third line of "-"
			{
				cout << "-";
			}
			for (int i = 0; i < star; i++) // Loop to print third line of "*"
			{
				cout << "*";
			}
			for (int i = 0; i < line2; i++)// Loop to print last line of "-"
			{
				cout << "-";
			}
		}
		cout << endl;
		star2 = star2 - 2; // Removeing two "*" from the begin and th end
		line2--; // Removeing two "-" from the begin and th end
		NOR++;
	}
}

void main(){
	MM mm;
	mm.Display();
	system("pause");
}