// Ashley Allan

//Program 2:Credit Rewards, File:AllanA_Pgm2

/*
Purpose: To find the number of points earned and the type and number of rewards selected by a cardholder for charges
made on the card in a credit rewards system.
Input: The dollar amount of entertainment purchases, food purchases, and all other purchases charged to the rewards card;
a one-letter code indicating the rewards member's first choice for rewards.
Processing: The total points earned by a cardholder based on the dollar amount of each kind of purchase is found, then the 
first preference for rewards is taken and the amount that the cardholder may get based on their rewards is calculated. The
amount of points they have leftover is also calculated. 
Output: Total number of points earned, elegible rewards, and points leftover. 

Reflection: By repeatedlt testing and refining this program, I finally found success. There are many small details that need to 
be paid attention to. I was able to spot and fix the few mistakes that I did make, but really this program was all about
adding more details to make branches and instructions more specific. 
*/

#include <iostream>
using namespace std;
int main()
{
	int entertainment; //Declares variable for dollar amount
	int food;
	int otherStuff;
	int totalEarned; //Delcares variable for total points

	cout << "Enter dollar amount of your Entertainment purchases: "  << endl; //Prompts user to input dollar amount 
	cin >> entertainment; //Takes dollar amount 
	entertainment = entertainment * 5; //Calculates number of points from input (dollar amount) based on the type of purchase
	cout << "Enter dollar amount of your Food purchases: " << endl;
	cin >> food;
	food = food * 2;
	cout << "Enter dollar amount of any other purchases: " << endl;
	cin >> otherStuff;
	
	totalEarned = entertainment + food + otherStuff; //Calculates number of total pointa earned 
	cout << "Total number of points earned: " << totalEarned << endl; //Outputs number of total points earned

	char rewardsChoice;
	cout << "Enter your first choice for rewards- (M)ovies, (P)izza, or (I)tunes: " << endl; //Prompts first choice for rewards
	cin >> rewardsChoice; //Takes first choice for rewards

	cout << "You have earned the following rewards for your credit card purchases!" << endl;

	int movieRentals; //Declares variables for rewards
	int pizzas;
	int iTunes;

	if ((rewardsChoice == 'M') || (rewardsChoice == 'm')) { //Calculation when first choice is M
		movieRentals = totalEarned / 150;
		cout << movieRentals << " Movie Rentals (150 points each)" << endl; //Calculates amount of movie rentals and outputs
		totalEarned = totalEarned % 150; //Calculates remaining points
		pizzas = totalEarned / 300;
		cout << pizzas << " Pizzas (300 points each)" << endl;
		totalEarned = totalEarned % 300;
		iTunes = totalEarned / 60;
		cout << iTunes << " iTunes (60 points each)" << endl;
		totalEarned = totalEarned % 60;
		cout << totalEarned << " points left over" << endl; //Outputs remaining points
	}
	else if ((rewardsChoice == 'P') || (rewardsChoice == 'p')) { //Calculation when first choice is P
		pizzas = totalEarned / 300;
		cout << pizzas << " Pizzas (300 points each)" << endl;
		totalEarned = totalEarned % 300;
		movieRentals = totalEarned / 150;
		cout << movieRentals << " Movie Rentals (150 points each)" << endl; 
		totalEarned = totalEarned % 150; 
		iTunes = totalEarned / 60;
		cout << iTunes << " iTunes (60 points each)" << endl;
		totalEarned = totalEarned % 60;
		cout << totalEarned << " points left over" << endl;
	}
	else if ((rewardsChoice == 'I') || (rewardsChoice == 'i')) { //Calculation when first choice is I 
		iTunes = totalEarned / 60;
		cout << iTunes << " iTunes (60 points each)" << endl;
		totalEarned = totalEarned % 60;
		pizzas = totalEarned / 300;
		cout << pizzas << " Pizzas (300 points each)" << endl;
		totalEarned = totalEarned % 300;
		movieRentals = totalEarned / 150;
		cout << movieRentals << " Movie Rentals (150 points each)" << endl;
		totalEarned = totalEarned % 150;
		cout << totalEarned << " points left over" << endl;
	}
	else {
		cout << "Invalid selection" << endl;
	}

	return 0;
}
