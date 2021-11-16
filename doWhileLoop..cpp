#include <iostream>
using namespace std;

int main ()
{

int num1;
int num2;
int sum;



cout << "Please enter a number:";
cin >> num1;
cout << "Please enter another number:";
cin >> num2;

//sum of the two numbers
sum = num1+num2;

cout << "sum is:" << sum <<endl;
while (num1||num2!='0'){
cout << "Please enter a number:";
cin >> num1;
cout << "Please enter another number:";
cin >> num2;
}
return 0;
}