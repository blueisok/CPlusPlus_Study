#include <iostream>
using namespace std;

// class Date
// {

// public:
//     Date()
//     {
//         cout<<"Date"<<endl;
//     }

//     ~Date()
//     {
//         cout<<"~Date"<<endl;
//     }

// };

// int main()
// {

//     //new和delete 与malloc、free的区别
//     //1.对于默认类型没有区别，对于自定义类型，new再开空间的同时会调用构造函数，delete在释放空间的时会调用析构函数
//     //2.对于开空间失败，malloc返回0，new会抛出异常
//     //3.malloc、free是函数，new、delete是操作符

//     //对于默认类型
//     int *a=new int(1);
//     cout<<*a<<endl;
//     size_t n=1;
//     int* b=new int[1024*1024*1024*n];

//     size_t n1=100;
//     int* b1=(int*)malloc(sizeof(int)*n1*1024*1024*1024);
//     if(b1==nullptr)
//         cout<<"*b1==0"<<endl;
//     for(int i=0;i<10;i++)
//         b[i]=i;
//     for(int i=0;i<10;i++)
//         cout<<b[i]<<' ';
//     cout<<endl;
//     delete a; 
//     delete []b; 

//     //对于自定义类型
//     Date *a1=new Date;
//     delete a1;

//     return 0;
// }


class A
{
public:
    A(int n=2):
    _n(n)
    {
        
    }

private:
    int _n;

};


int main()
{
    // int* a=(int*)operator new(sizeof(int));  //operator new 用法与malloc一样，效果区别是operator new 开空间失败会抛异常
    // operator delete (a);


    //定位new
    A* p1=new A;
    delete p1;

    //模拟上面过程
    A* p2=(A*)operator new(sizeof(A));//开辟空间
    new(p2)A; //调用构造函数
   // new(p2)A(3); //有参数的写法

    p2->~A(); //调用析构函数
    operator delete(p2); //释放空间

    return 0;
}