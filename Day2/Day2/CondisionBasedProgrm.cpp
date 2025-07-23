#include <iostream>
#include <string>
using namespace std;

int main()
{
    int choice;
    cout << "Enter program number (1-10): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        // 1. Simple if-else (Check if number is positive or negative)
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num >= 0)
            cout << "Number is positive" << endl;
        else
            cout << "Number is negative" << endl;
        break;
    }

    case 2:
    {
        // 2. Multiple if-else (Grade calculator)
        int marks;
        cout << "Enter marks (0-100): ";
        cin >> marks;
        if (marks >= 90)
            cout << "Grade A" << endl;
        else if (marks >= 80)
            cout << "Grade B" << endl;
        else if (marks >= 70)
            cout << "Grade C" << endl;
        else if (marks >= 60)
            cout << "Grade D" << endl;
        else
            cout << "Grade F" << endl;
        break;
    }

    case 3:
    {
        // 3. Nested if (Check if number is divisible by both 2 and 3)
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num % 2 == 0)
        {
            if (num % 3 == 0)
                cout << "Number is divisible by both 2 and 3" << endl;
            else
                cout << "Number is divisible by 2 only" << endl;
        }
        else
        {
            cout << "Number is not divisible by 2" << endl;
        }
        break;
    }

    case 4:
    {
        // 4. Switch case (Calculator)
        int a, b;
        char op;
        cout << "Enter two numbers and operator (+,-,*,/): ";
        cin >> a >> op >> b;
        switch (op)
        {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            cout << "Result: " << (float)a / b << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
        }
        break;
    }

    case 5:
    {
        // 5. Logical operators (Voting eligibility)
        int age;
        bool hasID;
        cout << "Enter age and ID status (1/0): ";
        cin >> age >> hasID;
        if (age >= 18 && hasID)
            cout << "Eligible to vote" << endl;
        else
            cout << "Not eligible to vote" << endl;
        break;
    }

    case 6:
    {
        // 6. Multiple conditions (Season finder)
        int month;
        cout << "Enter month number (1-12): ";
        cin >> month;
        if (month >= 3 && month <= 5)
            cout << "Spring" << endl;
        else if (month >= 6 && month <= 8)
            cout << "Summer" << endl;
        else if (month >= 9 && month <= 11)
            cout << "Fall" << endl;
        else
            cout << "Winter" << endl;
        break;
    }

    case 7:
    {
        // 7. Nested switch (Menu system)
        int mainChoice, subChoice;
        cout << "Enter main menu (1-2) and sub menu (1-2): ";
        cin >> mainChoice >> subChoice;
        switch (mainChoice)
        {
        case 1:
            switch (subChoice)
            {
            case 1:
                cout << "Selected: Main 1, Sub 1" << endl;
                break;
            case 2:
                cout << "Selected: Main 1, Sub 2" << endl;
                break;
            default:
                cout << "Invalid sub choice" << endl;
            }
            break;
        case 2:
            switch (subChoice)
            {
            case 1:
                cout << "Selected: Main 2, Sub 1" << endl;
                break;
            case 2:
                cout << "Selected: Main 2, Sub 2" << endl;
                break;
            default:
                cout << "Invalid sub choice" << endl;
            }
            break;
        default:
            cout << "Invalid main choice" << endl;
        }
        break;
    }

    case 8:
    {
        // 8. Ternary operator (Find largest of two numbers)
        int x, y;
        cout << "Enter two numbers: ";
        cin >> x >> y;
        int max = (x > y) ? x : y;
        cout << "Larger number is: " << max << endl;
        break;
    }

    case 9:
    {
        // 9. Complex condition (Triangle type checker)
        int a, b, c;
        cout << "Enter three sides of triangle: ";
        cin >> a >> b >> c;
        if (a == b && b == c)
            cout << "Equilateral Triangle" << endl;
        else if (a == b || b == c || a == c)
            cout << "Isosceles Triangle" << endl;
        else
            cout << "Scalene Triangle" << endl;
        break;
    }

    case 10:
    {
        // 10. Multiple logical operators (Password validator)
        string password;
        cout << "Enter password: ";
         cin>>password;

        if (password.length() >= 8 && password.length() <= 16)
            cout << "Valid password length" << endl;
        else
            cout << "Invalid password length (should be 8-16 characters)" << endl;
        break;
    }

    default:
        cout << "Invalid program number" << endl;
    }

    return 0;
}