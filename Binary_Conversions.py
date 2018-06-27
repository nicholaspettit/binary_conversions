#Binary Conversions Software
#Purpose of this program is to convert decimal numbers to binary
#or convert binary numbers to decimal

#Functions          #Purpose

#main               This is the main function for the program
#copyright_fun      This function calls all of the copyright information
#input_decision     This function determines if you are going to input a decimal or binary number
#binary_decimal     This function will convert a binary number to a decimal number
#decimal_binary     This function will convert a decimal to a binary number

#Variables
#decision           int             This variable holds a menu value that will determine which calculation function we run
#view_copyright     str             This variable allows the user to select if they want to view the copyright information
#binary                             This variable holds the user input value of the binary variable
#decimal                            This variable holds the user input value of the decimal variable
#decimal_convert                    The conversion from binary to decimal is this variable
#binary_convert                     The conversion from decimal to binary is this variable



##################################################################################

import math

#Start of program
def main ():

    #Welcome messages to the program
    print("Welcome to the Binary Conversions Calculator.")
    print("\n")

    #Call copyright function
    copyright_fun ()

    #Copyright separation
    print("************************")
    print("\n")
    #Call input decision function
    input_decision ()

    #Close the program
    input('Press ENTER to start exit of program')


#Copyright protection function
def copyright_fun ():
        print("Copyright (c) 2017, Nicholas R Pettit")
        print("nicholas.r.pettit@protonmail.com")
        print("All rights reserved.")
        print("\n")
        print("To view entire copyright information press Y for Yes or N for No.")
        print("Enter Y for yes")
        print("Enter N for no")
        view_copyright = str(input("Enter selection:"))
        print("\n")    


        #Validation loop of the anser given for view_copyright
        #Only accept a capital Y or N right now to move on
        while True:          
        
            if view_copyright == 'N' :
                return

            elif view_copyright == 'Y' :
                print("Redistribution and use in source and binary forms, with or without")
                print("modification, are permitted provided that the following conditions are met:")
                print("\n")
                print("1. Redistributions of source code must retain the above copyright notice, this")
                print("list of conditions and the following disclaimer.")
                print("2. Redistributions in binary form must reproduce the above copyright notice,")
                print("this list of conditions and the following disclaimer in the documentation")
                print("and/or other materials provided with the distribution.")
                print("3. Neither Nicholas R Pettit nor the names of its contributors may be used")
                print("to endorse or promote products derived from this software without specific ")
                print("prior written permission.")
                print("\n")
                print("THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ""AS IS"" AND")
                print("ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED")
                print("WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE")
                print("DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR")
                print("ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES")
                print("(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;")
                print("LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND")
                print("ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT")
                print("(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS")
                print("SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.")
                print("\n")
                print("The views and conclusions contained in the software and documentation are those")
                print("of the authors and should not be interpreted as representing official policies,")
                print("either expressed or implied, of the FreeBSD Project.")
                print("\n")
                print("\n")
                return

            elif view_copyright !="N" and view_copyright !="Y":
                print("Yes or No answer only: ")
                print("Enter Y for yes")
                print("Enter N for no")
                view_copyright = str(input("Enter selection:"))
                print("\n")

#Decision input function
#This function is where we are going to decide if the input value is already a decimal or binary number
def input_decision ():
        
        print("In this menu select the type of variable you have")
        print("\n")
        print("If you have a binary variable and would like to convert")
        print("to a decimal number select: 1")
        print("If you have a decimal variable and would like to convert")
        print("to a binary number select: 2")
        decision = int(input("Enter selection:"))
        print("\n")

        #Validation loop of the answer given for decision
        #Only accept a 1 or 2 right now to move on
        while True:          
        
            if decision == 1 :

                #Call the function to convert a binary number to decimal
                binary_decimal ()
                return

            elif decision == 2 :
                
                #Call the function to convert a decimal to a binary number
                decimal_binary ()
                return

            elif decision !=1 and decision !=2:
                print("1 or 2 answer only: ")
                print("Enter 1 for binary to decimal")
                print("Enter 2 for decimal to binary")
                decision = int(input("Enter selection:"))
                print("\n")


#This function will convert a binary number to a decimal number
def binary_decimal ():

    #Get user information
    print("You have selected convert a binary variable to a decimal variable")
    binary = input(str("Enter the binary value you wish to convert to decimal: "))

    #Convert the binary number to a decimal number
    decimal_convert=int(binary ,2)

    #Output the information to the user
    print("The converted binary value " + binary)
    print("Converts to decimal number ")
    print(decimal_convert)
    print("\n")



    return

#This function will convert a decimal to a binary number
def decimal_binary ():

    #Get user information
    print("You have selected convert a decimal variable to a binary variable")
    decimal = int(input("Enter the decimal value you wish to convert to binary: "))

    #Convert the binary number to a decimal number   
    binary_convert=(bin(decimal)[2:])

    #Output the information to the user
    print("The converted decimal value ")
    print(decimal)
    
    print("converts to binary number ")
    print(binary_convert)
    print("\n")

    return


#This is where I call the main function to run the program
main ()