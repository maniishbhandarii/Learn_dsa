#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;

    cout << *(&a) << endl;
    cout << *(ptr) << endl;
    cout << ptr << endl;
    cout << *(ptr2) << endl;


    //subtract pointers
    int b = 10;
    int c = 20;

    int* ptr3 = &b;
    int* ptr4 = &c;


    cout<<"ptr3 = "<<ptr3<<endl;
    cout<<"ptr4 = "<<ptr4<<endl;
    cout<<"ptr3 - ptr4 = "<<ptr3 - ptr4<<endl;
    return 0;
}