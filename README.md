# Experiment---7

Aim -> To study and implement C++ Arrays and Strings. <br> 

Software -> Visual Studio Code <br> 
 
Theory -> Array: •  An arry is a fixed-size sequential collection of the elemnts of same data type. It consists of continuous memory locations.<br> 
                 •	The array's indexes begin at 0. Meaning that the first item saved at index 0 is [0]. <br> 
                 •  The final element of an array with size n is kept at index (n-1).     <br> 
          


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
#include<iostream>
using namespace std;

int main() {
    int marks[5], i, j, num, a=0, count=0;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<5;j++) {
        if(marks[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            a=1;
        }
    }
    if(a==0) {
        cout<<"Element not present";
    }
    else if(a==1) {
        cout<<"Element is present: "<<count<<" times";
    }
}

```
(E.1)<br>
```
#include <iostream>
using namespace std;

int main() {
    
  // declare and initialize an array 
  double numbers[] = {7.5, 2.5, 3.6, 5.12, 7.35, 24.27};

  double sum = 0.0;
  double count = 0.0;
  double average;

  cout << "The numbers are: ";

  //  print array elements use of range-based for loop
  for (const double n : numbers) {
    cout << n << "  ";
    //  calculate the sum
    sum += n;
    // count the no. of array elements
    ++count;
  }
  // print the sum
  cout << "\nSum = " << sum << endl;

  // find the average
  average = sum / count;
  cout << "\nTheir Average = " << average << endl;
  return 0;
}

```
(E.2)<br> 
```
``` 
(F)<br>
```
```
(G)<br> 
```
```
(H)<br> 
```
```
(I)<br> 
```
```
(J)<br> 
```
```

Output: <br> 

(A) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7A.png) <br> 

(B) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7B.png) <br> 

(C) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7C.png) <br> 

(D) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7D.png) <br> 

(E.1) <br> 
![]() <br> 

(E.2) <br> 
![]() <br> 

(F) <br> 
![]() <br> 

(G) <br> 
![]() <br> 

(H) <br> 
![]() <br> 

(I) <br> 
![]() <br> 

(J) <br> 
![]() <br> 


Conclusion -> <br> 
