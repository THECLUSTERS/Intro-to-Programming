// C++ program to add two numbers
#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b;
	double ans=0.0;

	//Ask user to enter the two numbers
	cout<<"Enter two numbers A and B :"<<"\n";

	// Read two numbers
	cin>>a>>b;

	// Calculate the addition of A and B
	 ans=a+b;

	// Print the sum
	cout<<"Sum of A and B is: "<<ans<<"\n";

    // Calculate the difference of A and B
	ans=a-b;

     // Print the difference
	cout<<"Difference of A and B is: "<<ans<<"\n";


	return 0;
}