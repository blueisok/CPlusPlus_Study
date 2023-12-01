#include <iostream>
using namespace std;

//初始化列表

//  1.每个成员变量在初始化列表中只能出现一次(初始化只能初始化一次)
//  2.类中包含以下成员，必须放在初始化列表位置进行初始化：
// 引用成员变量
// const成员变量
// 自定义类型成员(且该类没有默认构造函数时

// class Date
// {

// public:
//     Date(int year,int month,int day)
//     :_year(year)
//     ,_month(month)
//     ,_day(day)
//     {

//     }

//     void Print()
//     {
//         cout<<_year<<' '<<_month<<' '<<_day<<endl;
//     }

// private:
//     int  _year;
//     int  _month;
//     int  _day;
// };


// int main()
// {
//     Date d1(2020,10,9);
//     d1.Print();

//     return 0;
// }

// class A
// {
// public:
//     A(int a)
//     {

//     }
// };

// class B
// {

// public:
//     //定义
//     B(int& year,int n)
//     :_year(year),
//     _month(10),
//     a(n)
//     {

//     }

// private :   
//     //声明
//     int& _year;
//     const int _month;
//     A a; //没有默认构造函数，（默认构造函数，不需要传初值就可以创建对象）
// };

// int main()
// {
//     int year=2020;
//     B b(year,20);
//     return 0;
// }


//成员变量在类中声明次序就是其在初始化列表中的初始化顺序，与其在初始化列表中的先后次序无关

// class Date
// {
// public:
//     Date(int a)
//     :_a(a)
//     ,_b(_a)
//     {

//     }
//     void Print() 
//     {
//         cout<<_a<<' '<<_b<<endl;
//     }

// private :
//     int _b;
//     int _a;
// };

// int main()
// {
//     Date d1(10);
//     d1.Print();  //输出10 和随机值，因为是先进行_b(_a)的赋值，再进行_a(a)
//     return 0;
// }



