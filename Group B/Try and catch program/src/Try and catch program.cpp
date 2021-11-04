//============================================================================
// Name        : Try and catch.cpp
// Author      : Ameya Chavan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 PROBLEM STATEMENT
 Create User defined exception to check the following conditions and throw the
 exception if the criterion does not meet.

a. User has age between 18 and 55
b. User has income between Rs. 50,000 – Rs. 1,00,000 per month
c. User stays in Pune / Mumbai / Bangalore / Chennai
d. User has 4-wheeler
Accept age, income, city, vehicle from the user and check for the conditions
mentioned above. If any of the condition does not met then throw an exception.
*/

#include <iostream>
using namespace std;

class User{
	public:
		int salary, age;
		string city;
		char vehicle;

		User(){
			age=0;
			vehicle=0;
			salary=0;
		}

		void getData();
};

void User::getData(){

	cout<<"Enter your age: "<<endl;
	cin>>age;

	if(age<18||age>55){
		throw 1;
	}

	cout<<"Enter salary per month: "<<endl;
	cin>>salary;

	if(salary<50000||salary>100000){
		throw 2;
	}

	cout<<"Enter the city you stay in: "<<endl;
	getline(cin>>ws,city);

	if(city=="Pune"||city=="Mumbai"||city=="Banglore"||city=="Chennai"){

	}
	else{
		throw 3;
	}

	cout<<"Do you have 4 wheeler? (Y\N): "<<endl;
	cin>>vehicle;

	if(vehicle=='N'){
		throw 4;
	}
}

int main(){
	User obj;

	try{
		obj.getData();
	}

	catch(int i){
		switch(i)
		{

		case 1:
			cout<<"Invalid!!! Please enter age between (18-55).";
			break;

		case 2:
			cout<<"Invalid!!! Please enter salary between (Rs.50,000-Rs.1,00,000).";
			break;

		case 3:
			cout<<"Invalid!!! Please enter city from (Pune, Mumbai, Banglore, Chennai).";
			break;

		case 4:
			cout<<"Invalid!!! You don't have a 4 wheeler!.";
			break;
		}
	}

	return 0;
}
