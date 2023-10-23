#include <iostream>
using namespace std;
struct Phone{
string serialNumber;
string brand;
string model;
int year;
double price;
};
//function to show all phone info
void showPhoneInfo(Phone p[], int Size){
    for(int i = 0; i< Size ; i++){
  cout << "Serial Number: "<< p[i]. serialNumber << endl;
 cout <<"Brand: " << p[i].brand << endl;
 cout << "Model: "<< p[i].model << endl;
 cout << "Year: " << p[i].year << endl;
 cout << "Price: " << p[i].price << endl;
}
}
//function to show phone info serial number
void showPhoneInfo(Phone p[], int Size, string serialNumber){
for(int i = 0; i < Size ; i++){
   if(p[i].serialNumber == serialNumber){
cout << "Serial Number: " << p[i]. serialNumber << endl;
cout << "Brand: " << p[i].brand << endl;
cout << "Model: "<< p[i].model <<endl;
cout << "Year: " <<p[i].year << endl;
cout << "Price:  "<< p[i].price << endl;
  }
    }
     }
//main function
int main(){
string serialNumber;
int choice;
int Size=8;
  Phone p[Size]=
{{"SN1234",   "Samsung ", "Galaxy S20", 2020, 699},
  {"SN5678" , "Apple   " , " iPhone 12", 2020, 799},
  {"SN9012" , "Google  ", "pixel 5" , 2020 ,699},
  {"SN3456",  "OnePlus " , "OnePlus 9 Pro" , 2021 , 899},
  {"SN7890" , "Sony    ", "Xperia 1 III", 2821, 1199},
  {"SN2345" , "Xiaomi  ", "Mi 11", 2021, 699},
  {"SN6789" , "Xiaomi  ", "Redmi Note 10" , 2021, 299},
  {"SN8901" , "Samsung ", "Galaxy A52", 2023 , 499}};
do{
cout  << "In\t**Menu**\n";
 cout << "1. display all phone. \n";
cout << "2. display phone by serial number. \n";
cout << "3. exit. \n";
cout << "Enter your choice: ";
cin >> choice;
   if(choice == 1){
   showPhoneInfo(p, Size);
   }
else if (choice == 2){
cout << "Enter serial number: " ;
cin >> serialNumber;
showPhoneInfo(p, Size, serialNumber);
}
else if(choice == 3){
cout << "Thank you for using this program. In";
}
else{
   cout << "Invalid choice.\n";
}
} while (choice != 3);
return 0;

}



