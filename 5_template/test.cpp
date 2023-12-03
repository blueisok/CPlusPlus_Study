#include <iostream>
using namespace std;

//函数模板
template<class T>
//template<typename T> //这两种方式都可以


void Swap(T& a,T& b)
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a1=1;
    int a2=2;
    double a3=1.3;
    double a4=1.2;
    Swap(a1,a2); //隐式实例化
    Swap<int>(a1,a2); //显示实例化
    Swap(a3,a4);
    cout<<a1<<endl;
    cout<<a2<<endl;
    cout<<a3<<endl;
    cout<<a4<<endl;

    return 0;
}


// template<typename T>

// class vector
// {

// public:
//     vector():
//     _a(nullptr),
//     _size(0),
//     _capacity(0)
//     {

//     }

//     void PushBack(const T& x)
//     {
//         //增容
//         if(_capacity==_size)
//         {
//             int newcapacity=_capacity?_capacity*2:10;
//             int* temp=new T[newcapacity];
//             memcpy(temp,_a,_size);
//             _capacity=newcapacity;
//             delete _a;
//             _a=temp;
//         }

//         _a[_size]=x;
//         _size++;
//     }

//     void PopBack();


//     size_t Size()
//     {
//         return _size;
//     }

//     T& operator[](int i)
//     {
//         return _a[i];
//     }


//     ~vector()
//     {
//         delete _a;
//     }

// private:
//     T *_a;
//     size_t _size;
//     size_t _capacity;
// };

// template<class T>
// void vector<T>::PopBack()  //类内声明，类外定义
// {
//     _size--;
//     _a[_size]=0;

// }

// int main()
// {
//     vector<int> v1;
//     v1.PushBack(1);
//     v1.PushBack(2);
//     v1.PushBack(3);
//     v1.PushBack(4);
//     v1.PushBack(5);
//     v1.PopBack();
//     v1.Size();

//     return 0;
// }