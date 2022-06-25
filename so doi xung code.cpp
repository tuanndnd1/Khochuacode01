#include <iostream>
using namespace std;
int main()
{
int num, reverse_num = 0, temp_num;
cout<< "Enter a number:";
cin >>num;
    temp_num=num;
    while(num !=0)
    {
///temp_num=num%10;
//reverse_num=(reverse_num*10)+temp_num;
//num=num/=10;	

reverse_num=reverse_num*10;
     
reverse_num=reverse_num+num% 10;
     
num=num/10;
    }
    if(temp_num==reverse_num)
    {
        cout<<"That number is palindrone";
    }
    else
    {
        cout<<"that number is not a palindrone";
    }
return 0;
}

