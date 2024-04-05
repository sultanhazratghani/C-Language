	// C++ program to check if the string
	// contains uppercase, lowercase
	// special character & numeric value
	#include <iostream>
	#include <regex>
	using namespace std;
	void isAllPresent(string str)
	{
	
	// Regex to check if a string
	// contains uppercase, lowercase
	// special character & numeric value
	const regex pattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[-+_!@#$%^&*.,?]).+$");
	
	// If the string is empty
	// then print No
	if (str.empty())
	{
		cout<<"No"<<endl;
		return ;
	}
	
	// Print Yes If the string matches
	// with the Regex
	if(regex_match(str, pattern))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return;
	}
	
	// Driver Code
	int main()
	{
	string str = "#GeeksForGeeks123@";
	isAllPresent(str);
	return 0;
	}
	
	// This code is contributed by yuvraj_chandra

