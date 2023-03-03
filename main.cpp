#include <iostream>

using namespace std;

class Stack
{
private:
    int arr[5];
    int top;

public:

    Stack()
    {
        top = -1;
        for(int i = 0; i<5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpthy()
    {
        if(top == -1)
            return true;
            else
                return false;
    }

    bool isFull()
    {
        if(top == 4)
            return true;
            else
                return false;
    }

    void push(int val)
    {
        if(isFull())
        {
            cout << "stack overflow"<<endl;
        }
        else
        {
            top++;
            arr[top] = val;
            cout << "number added "<<endl;
        }
    }

    int Pop()
    {
        if(isEmpthy())
        {
            cout << "stack is empty can not pop value"<<endl;
            return 0;
        }
        else
        {
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue;
        }

    }

    int Count()
    {
        return (top + 1);
    }

    int peek(int position)
    {
        if(isEmpthy())
        {
            cout << "stack underflow"<<endl;
        }
        else
        {
            return arr[position];
        }
    }

    void Change(int position, int value)
    {
        arr[position] = value;
        cout << "value updated successfully"<<endl;
    }

    void display()
    {
            cout << "stack values"<<endl;
            for(int i =4; i>=0; i++)
            {
                cout << arr[i]<<endl;
            }

    }

};

int main()
{
    Stack s1;

    int position,option,value;

    do
    {
        cout << "select an operation to perform on stack"<<endl;

        cout << "1; Add number to stack"<<endl;
        cout << "2; remove number from stack"<<endl;
        cout << "3; check if stack is empty"<<endl;
        cout << "4; check if stack is full"<<endl;
        cout << "5; view value at position"<<endl;
        cout << "6; update a value"<<endl;
        cout << "7; Show last value added "<<endl;
        cout << "8; Display stack"<<endl;
        cout << "9; clear screen"<<endl;
        cin>>option;

        switch(option)
        {
        case 1:
            cout << "enter a value to add"<<endl;
            cin>>value;
            s1.push(value);
            break;
        case 2:
            cout << "value removed"<<endl;
            s1.Pop();
            break;
        case 3:
            s1.isEmpthy();
            break;
        case 4:
            s1.isFull();
            break;
        case 5:
            cout << "enter position to view"<<endl;
            cin>>position;
            s1.peek(position);
            break;
        case 6:
            cout << "enter position and value to update"<<endl;
            cin>>value;
            cin>>position;
            s1.Change(position,value);
            break;
        case 7:
            cout << "show last value added "<<endl;
            s1.Pop();
            break;
        case 8:
            cout << "values in stack "<<endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << "invalid input program ended"<<endl;
            break;

        }

    }while(option!=0);



    return 0;
}
