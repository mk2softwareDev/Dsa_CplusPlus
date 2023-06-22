#include<bits/stdc++.h>
#include<vector>
using namespace std;

// lets try using another approach to shrink to < O(n)

// using Recursion
int RecSum_evenOdd(int array[], int size){   // do not declare const int array as will be accessible by any number of arrays in input
    /* Logic
     * if size = length , return base case
     */
    int countNum = 0;
    // Base case
    if(countNum == size){
        return
    }

}

int main(){
    int arr[10];
    int num;
    // take input elements for array
    cout<<" number of elements in array "<<"\n";
    cin>>num;
    for(int i = 0; i<num; i++){
        cin>>arr[i];  // array numbers
    }
    int size = sizeof(arr)/sizeof(arr[0]);

    // evenSum and oddSum
    // initialise evenSum and oddSum
    int evenSum = 0;
    int oddSum = 0;
    int val = num;
    for(int i = 0; i<val; i++){                        // <=o(n) - worst case complexity
        if(arr[i]%2 == 0){  // if even numbers then countEven++ else countOdd++
            evenSum = evenSum + arr[i];
        }
        else{
            oddSum = oddSum + arr[i];
        }
    }
    cout<<" EvenSum is "<<evenSum<<"\n";
    cout<<" OddSum is "<<oddSum<<"\n";
}


