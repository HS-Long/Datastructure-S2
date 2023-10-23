
#include<iostream>

using namespace std;

int power(int m , int n){


if(n == 0){

    return 1;
}if( n == 1){


return m;
}else{


return (power(m , n-1)) * m;

}
}
main(){
    cout << "=======***** TP-13 Recursive function *****========\n";
    cout << "Problem-1-a:=========================================\n\n";
   int m , n;
  int sum;
   cout << "Pleas Enter m: " ; cin >> m;
   cout << "Pleas Enter n: " ; cin >> n;
  sum = power(m , n);
  cout << "The result for m^n = " << sum << endl;;

  cout << "End Problem-1========================================\n";

}




#include<iostream>

using namespace std;


//1^2 + 2^2 + 3^2 + ... => (1*1) + (2*2) + (3*3)


int SumSquare(int n){


if(n == 0){

    return 0;
}if( n == 1){


return 1;
}else{


return (n*n) + SumSquare(n-1);

}
}
main(){
    cout << "=======***** TP-13 Recursive function *****========\n";
    cout << "Problem-1-b:=========================================\n\n";
  int m , n;
  cout << "Enter value of n: " ;cin >> n;
  m = SumSquare(n);
  cout << "1^2 + 2^2 + 3^2 + ... +n^2" <<  " = " << m;
  cout << "\nEnd Problem-1========================================\n";

}


#include<iostream>

using namespace std;

int coutDigits(int n){

if(n < 10){

    return 1;
}else {

 return 1+coutDigits(n/10);

}

}

main(){
    cout << "=======***** TP-13 Recursive function *****========\n";
    cout << "Problem-1-c:=========================================\n\n";
   int n , sum;
   cout << "Enter value of n: " ; cin >>n;
   sum = coutDigits(n);
   cout << "Count of digits " << n << " = " << sum;


  cout << "\nEnd Problem-1========================================\n";

}

/* Count the number of digits of a number using recursion */
#include <iostream>
#include<windows.h>
using namespace std;

void displayStar(int);
void displayNumbersFromNto1(int);
void displayNumbersFrom1toN(int);

int main()
{


    cout << "=====***** TP-13 Recursive *****=====\n";
    cout << "Problem_02:==================================================\n\n";

    int choice;
    int n, k;
    while(10>5){
    cout << "Menu: \n";
    cout << "\t 1. Display n stars.\n";
    cout << "\t 2. Display number from n to 1.\n";
    cout << "\t 3. Display number from 1 to n.\n";
    cout << "Please choose the menu below: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Input n: ";
        cin >> n;
        cout << endl;
        displayStar(n);
    }
    else if (choice == 2)
    {
        cout << "Input n: ";
        cin >> n;
        cout << endl;
        displayNumbersFromNto1(n);
    }
    else if (choice == 3)
    {
        cout << "Input n: ";
        cin >> n;
        cout << endl;
        displayNumbersFrom1toN(n);
    }
    else
    {
        cout << "Invalid Number!";
        break;
    }
}
    cout << "\n\n";
    cout << "END Problem_02:==============================================\n\n";

    return 0;
}

void displayStar(int n)
{
    if (n)
    {
        cout << "*  ";
    }
    displayStar(n - 1);
}

void displayNumbersFromNto1(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << "  ";
    }
    displayNumbersFromNto1(n - 1);
}

void displayNumbersFrom1toN(int n)
{
  if(n>=0){
    displayNumbersFrom1toN(n - 1);
    cout << n << "  ";

  } Sleep(500);
}
#include<iostream>
#include<windows.h>
using namespace std;

int multiplyArrayElement(int [ ], int );

main(){
        cout << "=====***** TP-13 Recursive *****=====\n";
        cout << "Problem_03:==================================================\n\n";
int s = 7;
int myarr[s] = {1,2,3,4,5,6,7};
cout << "Multiple array elements =  " << multiplyArrayElement(myarr, s);
}
int multiplyArrayElement(int arr[ ], int s){
     Sleep(200);
    if(s > 0){
        cout << arr[s-1] << " ";

     return arr[s-1] * multiplyArrayElement(arr, s - 1);

    }
    else
   {
    cout << arr[s] << " ";
   return arr[s];

   }

}


#include<iostream>

using namespace std;

int countCharAppear(string , char );

main(){
        cout << "=====***** TP-13 Recursive *****=====\n";
        cout << "Problem_04:==================================================\n\n";
  string str;
  char c;
  int Times;
  bool found = false;

  cout << "serch for the time a character appears is a string" << endl;
  cout << "Enter a string " ;
  getline(cin >> ws , str);
  cout << "Enter a character: ";
  cin >> c;
  Times = countCharAppear(str , c);
  if(Times != 0){
    found = true;
  }
  if(found){
    if(Times == 1)
    cout << "Number of times " << c << "appears in " << str << " is " << Times << "time";
    else
     cout << "Number of times " << c << "appears in " << str << " is " << Times << "time";
     cout << endl;
  }
else
cout << "character " << c << "is not found " << str << endl;

}
int countCharAppear(string str, char c){

if(str.length()==0)
return 0;
else{
    if(str [0]== c){
     return 1 + countCharAppear(str.substr(1) , c );

    }
    else
    return countCharAppear(str.substr(1) , c );
}

    cout << "\n\n";
    cout << "END Problem_04:==============================================\n\n";
}
#include<iostream>

using namespace std;

int sumDigit(int );


int main(){
        cout << "=====***** TP-13 Recursive *****=====\n";
        cout << "Problem_05:==================================================\n\n";
int num;
int x;
cout << " Enter a number : " ; cin >> num;
  x = sumDigit(num);
  cout << "The sum of digits "<< num << " = "<< x;

}
int sumDigit(int n){

  if(n < 10){
     return n;
  }
  else {
    return (n % 10 +  sumDigit( n / 10));
     }
    cout << "\n\n";
    cout << "END Problem_05:==============================================\n\n";
}

