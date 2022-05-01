#include <iostream>

using namespace std;

int main()
{
    int n = 3;
    int arr[3][3];

    cout << "Enter Values : \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    } 

    cout << "Feeded Values : \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
            cout << "\n";

    }
 
    cout << "Getting Values :" << arr[2][2] << "\n";
    return 0;
}
