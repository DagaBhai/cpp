//Write a program to merge two ordered arrays to get a single ordered array. 

#include <iostream>
using namespace std;

void iparr(int arr[], int l){
    for(int i=0;i<l;++i){
        cout<<"enter the element for "<<i<<" position";
        cin>>arr[i];
    }
}

void mergearr(int* arr1, int n1, int* arr2, int n2, int* marr) {
    int i = 0, j = 0, k = 0;

    // Merge while both have elements
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            marr[k++] = arr1[i++];
        } else {
            marr[k++] = arr2[j++];
        }
    }

    // Copy remaining elements (if any)
    while (i < n1) {
        marr[k++] = arr1[i++];
    }
    while (j < n2) {
        marr[k++] = arr2[j++];
    }
}

int main() {
    int n1, n2;

    cout << "Enter size of first sorted array: ";
    cin >> n1;
    int* arr1 = new int[n1];
    iparr(arr1, n1);

    cout << "Enter size of second sorted array: ";
    cin >> n2;
    int* arr2 = new int[n2];
    iparr(arr2, n2);

    int* mergedArr = new int[n1 + n2];

    mergearr(arr1, n1, arr2, n2, mergedArr);

    cout << "Merged sorted array: ";
    for (int i = 0; i < n1 + n2; ++i) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    // Clean up
    delete[] arr1;
    delete[] arr2;
    delete[] mergedArr;

    return 0;
}
