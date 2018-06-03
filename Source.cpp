//Binary
//This program will ask you if you want to convert
//A decimal number to binary
//Or convert a binary number to decimal

//Version 0.1.0
//Created on 10.1.2017

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

//Functions to be used in the program
int main();									//The main function in the program
int copyright_fun();						//This function displays the copyright information to the user

//Start of the main function
int main()
{

	//Variables used in the program
	int type_c;								//Variable that holds the value of the selected type of conversion
	int binary_value;						//Variable that holds the value of the binary value
	int decimal_value;						//Variable that holds the value of the decimal value
	//decimal_conversion					//Variable that holds the binary to decimal number
	//i										//Variable that is a counter for the conversion 
	//remainder								//Variable that will hold the remainder during any conversion
	//step									//Variable to hold the step when showing how to convert decimal to binary


	//Start of program
	cout << "Binary and Decimal Conversions\n";
	cout << "Version 0.1.0\n";
	cout << "This program will allow you to convert between\n";
	cout << "a binary to decimal number,\n";
	cout << "or a decimal to a binary number.\n";
	cout << "\n";

	//Call the function to show the copyright information
	copyright_fun();

	cout << "\n";

	//Start of the menu to ask the user which type of conversion they want
	cout << "Determine the type of conversion you want.\n";
	cout << "Enter a number.\n";
	cout << "1. Binary to Decimal\n";
	cout << "2. Decimal to Binary\n";
	cout << "\n";

	//Get the type of conversion from the user
	cout << "Enter your selection: ", cin >> type_c;
	cout << "\n";

	//Validation loop for the menu selection
	while (type_c < 1 || type_c > 2)
	{
		cout << "Not a valid selection.\n";
		cout << "Select a type of conversion.\n";
		cout << "1. Binary to Decimal\n";
		cout << "2. Decimal to Binary\n";
		cout << "Enter Selection: ", cin >> type_c;
		cout << "\n";
	}


	//Create an if else if statement to determine what to do based on the type of conversion picked.
	if (type_c == 1)
	{
		
		//Get the initial information from the user
		cout << "Enter the binary number you would like\n";
		cout << "to convert to a decimal value.\n";
		cout << "Binary Value: ", cin >> binary_value;

		//Convert from binary to decimal values
		int decimal_value = 0, i = 0, remainder;
		
		//Loop to do that actual conversion
		while (binary_value != 0)
		{
			remainder = binary_value % 10;
			binary_value /= 10;
			decimal_value += remainder * pow(2, i);
			++i;
		}
		

		//Display calculated information
		cout << "The decimal value is ", cout << decimal_value;
		cout << "\n";

		//The purpose of this cin.ignore is to keep the program from ending after the loop
		cin.ignore();

	}

	else if (type_c == 2)
	{

		//Get the initial information from the user
		cout << "Enter the decimal number you would like\n";
		cout << "to convert to a binary value.\n";
		cout << "Decimal Value: ", cin >> decimal_value;

		//Convert from binary to decimal values
		long long binary_value = 0;
		int remainder, i = 1, step = 1;

		//Loop to complete the calculation
		while (decimal_value != 0)
		{
			remainder = decimal_value % 2;
			cout << "Step " << step++ << ": " << decimal_value << "/2   , Remainder = " << remainder;
			cout << ", Quotient = " << decimal_value / 2 << "\n";
			decimal_value /= 2;
			binary_value += (remainder * i);
			i *= 10;
		}

		//Display calculated information
		cout << "The binary value is ", cout << binary_value;
		cout << "\n";

		//The purpose of this cin.ignore is to keep the program from ending after the loop
		cin.ignore();


	}

	//End of the program
	cout << "Press Enter to End Program\n";

	cin.ignore(); //Ends after the user hits enter

}

//Copyright information function

int copyright_fun()
{

	//Variables to be used in function
	double view_copyright;							//Hows the selection from the menu by the user

	//Start of the copyright information function
	cout << "Copyright (c) 2017, Nicholas R Pettit\n";
	cout << "nicholas.r.pettit@protonmail.com";
	cout << "All rights reserved.\n";
	cout << "\n";
	cout << "To view entire copyright information make a selection from the menu.\n";
	cout << "1. Yes\n";
	cout << "2. No\n";
	cout << "Enter Selection: ", cin >> view_copyright;

	//Validate the user selection on the menu
	//Right now if you select anything other than a number the program freaks out
	while (view_copyright < 1 || view_copyright > 2)
	{
		cout << "Not a valid selection.\n";
		cout << "To view entire copyright information make a selection from the menu.\n";
		cout << "1. Yes\n";
		cout << "2. No\n";
		cout << "\n";
		cout << "Enter Selection: ", cin >> view_copyright;
		cout << "\n";

	}


	//Start of if - else if statement to determine if the user wants to read the copyright information
	if (view_copyright == 1)
	{
		cout << "Redistribution and use in source and binary forms, with or without\n";
		cout << "modification, are permitted provided that the following conditions are met:";
		cout << "\n";
		cout << "1. Redistributions of source code must retain the above copyright notice, this\n";
		cout << "list of conditions and the following disclaimer.\n";
		cout << "2. Redistributions in binary form must reproduce the above copyright notice,\n";
		cout << "this list of conditions and the following disclaimer in the documentation\n";
		cout << "and/or other materials provided with the distribution.\n";
		cout << "3. Neither Nicholas R Pettit nor the names of its contributors\n";
		cout << "may be used to endorse or promote products derived from this software\n";
		cout << "without specific prior written permission.";
		cout << "\n";
		cout << "THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ""AS IS"" AND\n";
		cout << "ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED\n";
		cout << "WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE\n";
		cout << "DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR\n";
		cout << "ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES\n";
		cout << "(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;\n";
		cout << "LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND\n";
		cout << "ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT\n";
		cout << "(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS\n";
		cout << "SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.";
		cout << "\n";
		cout << "The views and conclusions contained in the software and documentation are those\n";
		cout << "of the authors and should not be interpreted as representing official policies,\n";
		cout << "either expressed or implied, of the FreeBSD Project.";
		cout << "\n";
		cout << "\n";
	}

	//User does not want to see the copyright information
	else if (view_copyright == 2)
	{

	}



	return 0;

}


