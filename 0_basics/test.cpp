#include <iostream>
using namespace std;

// namespace ljb
// {
//     int a=10;
//     int c=20;
//     int Add(int left,int right)
//     {
//         return left+right;
//     }

//     struct listnode
//     {
//         listnode *next;
//         int val;
//     };
//     namespace blue
//     {
//         int d=20;
//         int Mul(int left ,int right)
//         {
//             return left*right;
//         }
//     }
// }
// using ljb::Add;
// int main()
// {
//     int a=36;
//     int c=14;

    
//     cout<<Add(a,c)<<endl;


// }


// void fun(int a=10) //缺省参数，没有传入值是默认为，现在初始化的值
// {
//     cout<<"a value is "<<a<<endl;
// }
// //半缺省，只能从右往左，不可以间隔，定义函数和声明函数不能同时缺省，可声明缺省，定义不缺省
// void fun2(int a,int b=10,int c=30) 
// {
//     cout<<"a value is "<<a<<endl;
//     cout<<"a value is "<<b<<endl;
//     cout<<"a value is "<<c<<endl;

// }


// int main()
// {
//     int a=10;
//     int b=0;
//     char* name;
//     double age;
//     // cout<<"please input b value"<<endl;
//     // cin>>b;
//     // cout<<"please input name and age"<<endl;
//     // cin>>name>>age;
//     // cout<<b<<endl;
//     // cout<<name<<' '<<age<<endl;
    
//     fun(20);
//     fun();
//     return 0;
// }

// int fun(int a,int b)
// {
//     int c=0;
//     c=a+b;
//     return c;  //返回变量时，返回的不是c,而是会生成一个临时变量，它会拷贝c的值，再返回，临时变量有常性
// }

// int& fun1(int a,int b) //引用可以做返回值，但是返回的值要是静态变量或者全局变量，不然不安全
// {
//     static int c=0;
//     c=a+b;
//     return c;  
// }

// int main()
// {

//     // const int a=10;
//     // int &b=a;  //权限的放大，不可以，指针和引用都不可以放大可读权限，但缩小权限允许

//     int a=10;
//     int d=20;
//     const int &b=a; //权限的缩小
//     int &c=a;
//     c=20;
//     cout<<"a= "<<a<<endl; //就b变成了可读，a和c还是可读可写，不可以通过b改变值,但是可以通过a和c
//     cout<<"b= "<<b<<endl;
    
//     const int& e=fun(a,b); //引用接收时，必须加const,因为返回的是临时变量具有常性

//     return 0;
// }


//范围for,可以遍历数组或者类

void Print_C() //正常for循环
{
    int arr[]={1,2,3,5,6};

    for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
    {
        arr[i]*=2;
    }

    for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    
}

void Print()
{
    int arr[]={1,2,3,5,6};
    for(auto& e:arr)
    {
        e*=2;
    }
    for(auto e:arr)
    {
        cout<<e<<' ';
    }
    cout<<endl;
}

int main()
{
    Print_C();
    Print();
    return 0;
}
