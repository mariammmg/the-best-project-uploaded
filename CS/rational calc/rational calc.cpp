#include <iostream>
#include <string>
using namespace std;
void input()
{

    float first_operand, second_operand;
    int length;
    char expression[80];
    string new_string = " ";
    string second_string = " ";

    char operation;
    int index, count;
    count = 0;

    cout << "Please enter the expression : ";
    cin >> expression;
    length = 5;

    for (int i = 0; i < length; i++)

    {
        if (expression[i] == '/')
        {
            count++;
            if (count == 2)
            {
                index = i;
                cout << index;
                operation = expression[i];
            }
        }

        cout << expression[i];

        if (expression[i] == '+')
        {
            index = i;
            cout << "Index of a plus is: " << index << endl;
            operation = expression[i];


        }

    }
    for (int j = 0; j < index; j++)
    {
        new_string = new_string + expression[j];
    }
    first_operand = stof(new_string);
    cout << "Float of frist : " << first_operand << endl;

    for (int k = index + 1; expression[k] != '\0'; k++)
    {
        second_string = second_string + expression[k];
    }
    second_operand = stof(second_string);

    cout << "Float of second_operand: " << second_operand << endl;




}




int main()
{
    input();
    return 0;
}