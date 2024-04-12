#include <iostream>
using namespace std;
// /*
int main()
{
    int choice;
    cout << "1 - Linear search in array \n";
    cout << "2 - Binary  search in array \n";
    cout << "3 - Linear search in array \n";
    cout << "4 - Linear search in array \n";

    cout << "Enter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:{

        int n;
        cout << "Enter size of array : ";
        cin >> n;
        // int MyArr[n];
        int MtArr[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter value  :";
            cin>>MtArr[i];
        }
        cout<<"Array is => ";
        cout<<"{";
        for (int i = 0; i < n; i++)
        {
            if (i==n-1)
            {
            cout<<MtArr[i];
                /* code */
            }
            else{

            cout<<MtArr[i]<<",";
            }
            
        }
        cout<<"}";
        

        break;
    }

    case 2:

        break;

    case 3:

        break;

    case 4:

        break;

    default:
        break;
    }

    return 0;
}