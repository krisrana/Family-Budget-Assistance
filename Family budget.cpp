/*   
     Name:      Krishna rana
     course:    CIS 160 ME1
     Date:      2/22/2016   
     Program:   Family Budget Assistance 
     description:  This program analyze family's data based on the given input
	 				for Family Budget Assistance center.
*/
// preprocessor directives
#include <iostream>
#include <string>
using namespace std;
// global definitions and declaration
// constants
const int exp_per_member = 5000.00;
const float save = 0.02;
const float rate = 0.01;

int main()
{ 	//local declarations and definitions
	//Get Family's name, identification number, member in family,income and total debts.
	cout<<"\t\t****Welcome****\nPlease Enter your following information as prompted"<<endl;
	string name = "";
	cout<<"Enter your Family Name:";cin>>name;
	getline(cin, name);
	int idnum ;
	cout<<"Enter your Family ID number:";cin >>idnum;
	int famsize ;
	cout<<"Member's in family:"; cin >>famsize;
	float income;
	cout<<"Enter your income:";cin >>income;
	float debt;
	cout<<"Enter your total debts:";cin>>debt;
	//calculation
	//expected living expense
	float living_expense = famsize*exp_per_member;
	//monthly payment to payoff debt in one year
	float payment= debt/12;
	//amount family should save
	float savings = (famsize*save*(income-debt));
	//service fee
	float service_fee = income * rate;
	//Output for the family
	//appropriate header	
	cout<<"**********************************************************"<<endl ;
	cout<<"            Family budget assistance center"<<endl;
	cout<<"                     February 2016"<<endl;
	cout<<"                Telephone: (800)555-1234"<<endl;
	cout<<"**********************************************************"<<endl;
	cout<<"Family name:              "<<getline(name)<<endl;
	cout<<"Identification number:    "<<idnum<<endl;
	cout<<"Family size:              "<<famsize<<endl;
	cout<<"Annual income:           $"<<income<<endl;
	cout<<"Total debt:              $"<<debt<<endl;
	cout<<"Expected living expenses:$"<<living_expense<<endl;
	cout<<"Monthly payment for debt:$"<<payment<<endl;
	cout<<"Savings:                 $"<<savings<<endl;
	cout<<"Service fee:             $"<<service_fee<<endl;
	cout<<"Thank you for using your Family Budget Assistance Center.";
//  executable statements
    cin.get();
    cin.ignore();
 	return 0;  
}
