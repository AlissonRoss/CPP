/*Alisson Ross
8/20/19
Artificial Sweetner problem to practice variables*/

//include a library for input/output
#include <iostream>
//standard namespace
using namespace std;
int main() {
	//Declaring variables- Doubles are for decimal; integers are for whole numbers
	int mouseDosage, mouseMass, canDeath;
	double personMass, sodaMass, sweetnerCan, personGrams, personDosage;
	
	/*
	USER INPUT
	*/
	cout << "Please enter the grams of your soda: " << endl;
	cin >> sodaMass;
	//input for mouse grams
	cout << "Please enter the grams of your mouse: " << endl;
	cin >> mouseMass;
	//to kill the mouse
	cout << "Please enter the grams of artificial sweetner to the kill the mouse: " << endl;
	cin >> mouseDosage;
	//input for person in pounds
	cout << "Please enter in the desired weight of the person in pounds: " << endl;
	cin >> personMass;

	/*
	CALCULATIONS
	*/
	//convert weight from pounds to grams
	personGrams = (personMass * 45400) / 100; //you can reduce it to (personMass*454)
	cout << "personGram:" << personGrams  << endl;
	//initializing sweetner in one can since we now have sodaMass initialized
	sweetnerCan = (0.001) * sodaMass; //amount of artificial sweetner in one can
	cout << "sweetnerCan:" << sweetnerCan << endl;
	//(mouseDosage * personMass) was wrong!!! Be careful!
	personDosage = (mouseDosage * personGrams) / mouseMass;
	cout << "personDosage:" << personDosage << endl;
	//amount that will kill the person
	canDeath = personDosage / sweetnerCan;
	cout << "canDeath:" << canDeath << endl;

	/*
	OUTPUT
	*/
	cout << "Artifical Sweetner in 1 can of soda is " << sweetnerCan 
		<< "\nThe person's weight in grams is " << sweetnerCan
		<< "\nThe amount of artificial sweetner to kill that person is " << personDosage << " grams"
		<< "\nThe amount of soda cans needed to kill person " << canDeath << endl;

}