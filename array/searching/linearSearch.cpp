#include <iostream>

using namespace std;

void printArray(int arr[], int size){
    cout << "Feeded Array : ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}

bool linearSearch(int arr[], int size, int toFind){
    for(int i=0; i<size; i++){
        if(toFind == arr[i]){
            cout << "Element found at index : " << i << endl;
            return true;
        }
    }

    cout << "Element not found" << endl;
    return false;
}

int main(){

    int arr[15] ;

    int n;
    cout << "Enter Size of Array : " ;
    cin >> n;

    cout << "Input Array Elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    printArray(arr, n);

    int toFind;
    cout << "Enter an element to find index of : ";
    cin >> toFind;

    linearSearch(arr, n, toFind);

}
