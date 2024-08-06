# Experiment---7

Aim -> <br> 

Software -> Visual Studio Code <br> 

Theory -> <br> 

Code: <br> 

(A) <br> 
```
#include<iostream>
using namespace std; 

// Program to print an array. 
int main() {
    int i;
    int a1[5]={19, 20, 5, 6, 7};
    int a2[5]={5,6,9,0,6};
    cout<<"Array is: ";

    for(i=0; i<5; ++i) {
        cout<<"Array is: "<<a1[i]<<" "<<"\n";
    }
    for(i=0; i<5; ++i) {
        cout<<"Array is: "<<a2[i]<<" "<<"\n";
    }
    return 0;
}
```
(B) <br> 
```
#include <iostream>
#define S 4
using namespace std;

int main() {
    int array1[S];
    //take input from user
    cout << "Enter " << S << " elements of array: ";
    for (int index = 0; index < S; index++) {
        cin >> array1[index];
    }
  cout << endl;

    // display entered array ekements
    for (int j : array1) {
        cout << j << "  ";
    }

   return 0;
}

```
(C) <br>
```
int main() {
    int i,n;
    cout<<"Enter the size of array: ";
    cin>> n;
    int a[n]; 
    //create array
    for(i=0;i<n;i++)
    {
        cout<<"Enter elements "<<i+1<<": ";
        cin>>a[i];
    }
    //display input array
     cout<<"Array entered by the user is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"";
    }

    //reverse array
    cout<<"\n Reverse of the entered array is: "; 
    for (i=n-1; i>=0; i--) {
        cout<<a[i]<<"";
    }
    return 0; 
}
```
(D) <br> 
```
```
(E)<br>
```
```
(F)<br>
```

```

Output: <br> 

(A) <br> 
![]() <br> 

(B) <br> 
![]() <br> 

(C) <br> 
![]() <br> 

(D) <br> 
![]() <br> 

(E) <br> 
![]() <br> 

(F) <br> 
![]() <br> 
