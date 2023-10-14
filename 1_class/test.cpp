#include <iostream>
using namespace std;

// struct student  //struct 在C++中增加了可以定义类的语法，默认无限定符情况下，类内的属性和方法是公开的
// {

//     void Init(string name,int age)
//     {
//         _name=name;
//         _age=age;
//     }


//     string _name;
//     int _age;
// };

// int main()
// {

//     student s1;
//     s1.Init("zhanshan",10);
//     cout<<s1._age<<' '<<s1._name<<endl;
//     s1._age=20;
//     s1._name="wan";

//     return 0;
// }


//类有两种定义方法的形式，第一种是边声明边定义，这个情况可能会被编译器当作内联函数
//第二种是在类内声明，类可以放在头文件中，定义放在源文件中，定义时要类名加::再加函数头

// class Student  //class 定义的类，无限定符情况下，属性和方法是私有的
// {
//     void Init(string name,int age);


//     string _name;
//     int _age;
// };

// void Student::Init(string name,int age)
// {
//     _name=name;
//     _age=age;
// }

// int main()
// {
//     Student s1;
// //    s1.Init("zhan",10);
// //  s1._age=20;
// //  s1._name="li";
//     return 0;
// }


//类的大小，成员函数不占空间，放在公共的代码段，大小是成员变量之和（要考虑内存对齐），对于空类，占一个字节，标识类
//内存对齐规则
//1. 第一个成员在与结构体偏移量为0的地址处。
// 2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
// 注意：对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
// VS中默认的对齐数为8
//  3. 结构体总大小为：最大对齐数（所有变量类型最大者与默认对齐参数取最小）的整数倍。
// 4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整
// 体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。

// class A1
// {
//     void Init(int b,int c)
//     {
//         _b=b;
//         _c=c;
//     }

//     char _b;
//     int _c;
// };



// class A2
// {
//     void Init()
//     {
        
//     }
// };

// class A3
// {
//     char c;
//     int d;
//     char e;
// };

// int main()
// {
//     A1 a1;
//     A2 a2;
//     A3 a3;
//     cout<<sizeof(a1)<<endl;  //8
//     cout<<sizeof(a2)<<endl;  //1
//     cout<<sizeof(a3)<<endl;  //12
//     return 0;
// }


//this 指针
// C++编译器给每个非静态的成员函数增加了一个隐藏的指针参数，让该指针指向当前对象(函数运行时调用该函数的对象)
//在函数体中所有“成员变量”的操作，都是通过该指针去访问。

// this指针本质上是“成员函数”的形参，当对象调用成员函数时，将对象地址作为实参传递给
// this形参。所以对象中不存储this指针。

// class Date
// {
// public :
//     void Init(int year,int month,int day)
//     {
//        this-> _year=year;  //this 可省略
//        this-> _month=month;
//        this->_day=day;
//     }
//     void Print()
//     {
//         cout<<_year<<' '<<_month<<' '<<_day<<endl;
//     }
// private:
//     int _year;
//     int _month;
//     int _day;
// };

// int main()
// {
//     Date d1,d2;
//     d1.Init(2021,9,1); //在传递实参时隐含的传递了对象的地址
//     d2.Init(2022,9,1);
//     d1.Print();
//     d2.Print();
//     return 0;
// }

class test
{
public:
    void Print()
    {
        cout<<_a<<endl; //调用函数时隐含的传递了this指针，对象为空，函数间接访问了空指针
    }
private:
    int _a;
};

class test1
{
public:
    void Print() //this没有间接访问空指针
    {
        cout<<"output"; 
    }

};

int main()
{
    test* t1=nullptr;
    test1* t2=nullptr;
    //t1->Print(); //运行错误

    t2->Print();//正确
    return 0;
}


