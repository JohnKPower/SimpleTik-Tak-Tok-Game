// INCLUDE the header file

#include<iostream>
using namespace std;

// main function definition
int main()
{
    char a[3][3] = {}; //declare char matrix - double dimensional
    char ch1 = 'X', ch2 = 'O'; // declare characters variables

    int i, pos1, pos2, pos3, pos4, c = 0, f = 0; // declare integer variables
    cout << "  ___ ___ ___" << "\n"; //print statement on console
    cout << " |   |   |   |" << "\n";   //print statement on console

    cout << " |___|___|___| " << "\n"; //print statement on console
    cout << " |   |   |   |" << "\n";   //print statement on console

    cout << " |___|___|___| " << "\n";   //print statement on console
    cout << " |   |   |   |" << "\n"; //print statement on console

    cout << " |___|___|___| " << "\n";   //print statement on console
    cout << endl; //next line

    cout << "\n\n***LET'S START***\n\n";   //print statement on console

    for (i = 1; i <= 5; i++) //for loop between 0 - 5 range. runs 5 times, if yes, control move inside loop, otherwise exit
    {
        cout << "Enter a row 0,1, or 2 for Player X :";      //print statement on console
        cin >> pos1; //enter value from console
        cout << "Enter a column 0,1, or 2 for Player X :";      //print statement on console
        cin >> pos2; //enter value from console

        a[pos1][pos2] = 'X'; // add 'X' value to double dimensional matrix
        c = c + 1; //increment c by 1
        //displaying the board after updating
        cout << "  ___ ___ ___" << "\n";   //print statements , all the variables on console
        cout << " |   |   |   |" << "\n";    //print statements ,
        cout << " | " << a[0][0] << " | " << a[0][1] << " | " << a[0][2] << " |" << "\n";    //print all the variables stored in array on console
        cout << " |___|___|___| " << "\n";    //print statements
        cout << " |   |   |   |" << "\n";    //print statements
        cout << " | " << a[1][0] << " | " << a[1][1] << " | " << a[1][2] << " |" << "\n"; //print all the variables stored in array on console
        cout << " |___|___|___| " << "\n"; //print statements
        cout << " |   |   |   |" << "\n"; //print statements
        cout << " | " << a[2][0] << " | " << a[2][1] << " | " << a[2][2] << " |" << "\n";    //print all the variables stored in array on console
        cout << " |___|___|___| " << "\n";    //print statements
        cout << endl; //next line
        if ((a[0][0] == ch1 && a[0][1] == ch1 && a[0][2] == ch1) || (a[1][0] == ch1 && a[1][1] == ch1 && a[1][2] == ch1)
            || (a[2][0] == ch1 && a[2][1] == ch1 && a[2][2] == ch1) || (a[0][0] == ch1 && a[1][0] == ch1 && a[2][0] == ch1)
            || (a[0][1] == ch1 && a[1][1] == ch1 && a[2][1] == ch1) || (a[0][2] == ch1 && a[1][2] == ch1 && a[2][2] == ch1)
            || (a[0][0] == ch1 && a[1][1] == ch1 && a[2][2] == ch1) || (a[0][2] == ch1 && a[1][1] == ch1 && a[2][0] == ch1))

            //if all the values in if statement are equal based on the opertaors, control move inside IF-Block
        {
            cout << "X Player won!!!!\n\n"; //print statement
            f = 1; //assign 1 value to f variable
            break; //break the statement , control move out of for loop and reaches to last if // statement , where f==0 is compared
        }
        if (c < 9) { // if c is less than 9, control move insides IF BLOCK
            cout << "Enter a row 0,1, or 2 for Player 0 :"; //print statement
            cin >> pos3; //enter input from user
            cout << "Enter a column 0,1, or 2 for Player 0 :"; //print statement
            cin >> pos4; //enter input from user

            c = c + 1; //increment c by 1
            a[pos3][pos4] = 'O'; // assign 'O' value to a[][] double dimensional array
            //displaying the board after updating
            cout << "  ___ ___ ___" << "\n"; //print statement
            cout << " |   |   |   |" << "\n";    //print statement
            cout << " | " << a[0][0] << " | " << a[0][1] << " | " << a[0][2] << " |" << "\n"; //print all the variables stored in array on console
            cout << " |___|___|___| " << "\n";    //print statement
            cout << " |   |   |   |" << "\n";    //print statement
            cout << " | " << a[1][0] << " | " << a[1][1] << " | " << a[1][2] << " |" << "\n"; //print all the variables stored in array on console
            cout << " |___|___|___| " << "\n";    //print statement
            cout << " |   |   |   |" << "\n";   //print statement
            cout << " | " << a[2][0] << " | " << a[2][1] << " | " << a[2][2] << " |" << "\n"; //print all the variables stored in array on console
            cout << " |___|___|___| " << "\n";   //print statement
            cout << endl; //next line

        }

        if ((a[0][0] == ch2 && a[0][1] == ch2 && a[0][2] == ch2) || (a[1][0] == ch2 && a[1][1] == ch2 && a[1][2] == ch2)
            || (a[2][0] == ch2 && a[2][1] == ch2 && a[2][2] == ch2) || (a[0][0] == ch2 && a[1][0] == ch2 && a[2][0] == ch2)
            || (a[0][1] == ch2 && a[1][1] == ch2 && a[2][1] == ch2) || (a[0][2] == ch2 && a[1][2] == ch2 && a[2][2] == ch2)
            || (a[0][0] == ch2 && a[1][1] == ch2 && a[2][2] == ch2) || (a[0][2] == ch2 && a[1][1] == ch2 && a[2][0] == ch2))

            //if all the values in if statement are equal based on the opertaors, control move inside IF-Block
        {
            cout << "O Player won!!!!\n\n"; //print statement

            f = 1; // assign value 1 to f variable

            break;   //break the statement , control move out of for loop and reaches to last if // statement , where f==0 is compared
        }

    } // end of for loop
    if (f == 0) // if f is equal to 0 , control moves inside IF-block
        cout << "Its a Draw!!!!\n\n"; // print statement
    cout << "THANK YOU FOR PLAYING!";    // print statement


} //End main function