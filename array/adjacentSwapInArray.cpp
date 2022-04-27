/* 
  Q. Swap adjacent elements of an array. E.g.
  I/P : 1 2 3 4 5 6 7 8
  O/P : 2 1 4 3 6 5 8 7
*/  
  
#include <iostream>

using namespace std;

void printArray(int arr[], int size){
    cout << "Feeded Array : ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void adjacentSwap(int arr[], int n){

    int temp= 0;

    for(int i=0; i<n-1; i++){
        int j = i + 1;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
    }

    cout << "Swapped Array : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

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

    adjacentSwap(arr, n);

    return 0;
}
