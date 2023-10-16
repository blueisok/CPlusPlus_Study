#include<iostream>
using namespace std;

//构造函数（构造函数是一个特殊的成员函数，名字与类名相同,创建类类型对象时由编译器自动调用，以保证
//每个数据成员都有 一个合适的初始值，并且在对象整个生命周期内只调用一次。

//构造函数特性
// 1.函数名与类名相同。
// 2. 无返回值。 
// 3. 对象实例化时编译器自动调用对应的构造函数。
// 4. 构造函数可以重载。
// 5. 如果类中没有显式定义构造函数，则C++编译器会自动生成一个无参的默认构造函数，一旦
// 用户显式定义编译器将不再生成。
//6.构造函数和析构函数，对于内置的类型如int 等不做处理，也就是说调用了构造函数，成员变量依然是随机值，但是
//对于用户自定义的类型会去调用它的构造函数或者析构函数

//析构函数（与构造函数功能相反，析构函数不是完成对对象本身的销毁，局部对象销毁工作是由
//编译器完成的。而对象在销毁时会自动调用析构函数，完成对象中资源的清理工作。）

//析构函数特性
// 1.析构函数名是在类名前加上字符 ~。 
// 2. 无参数无返回值类型。 
// 3. 一个类只能有一个析构函数。若未显式定义，系统会自动生成默认的析构函数。注意：析构函数不能重载
// 4. 对象生命周期结束时，C++编译系统系统自动调用析构函数。
//5.构造函数和析构函数，对于内置的类型如int 等不做处理，也就是说调用了构造函数，成员变量依然是随机值，但是
//对于用户自定义的类型会去调用它的构造函数或者析构函数


// class Date
// {
// public:
//     Date(int year=2010,int month=6,int day=1) //全缺省构造函数
//     {
//         _year=year;
//         _month=month;
//         _day=day;
//     }

//     void Print()
//     {
//         cout<<_year<<'-'<<_month<<'-'<<_day<<endl;
//     }
// private:
//     int _year;
//     int _month;
//     int _day;
// };

// int main()
// {

//     Date d1;
//     Date d2(2023,6,1);

//     d1.Print();
//     d2.Print();
//     return 0;
// }


//拷贝构造特征
// 1. 拷贝构造函数是构造函数的一个重载形式。
// 2. 拷贝构造函数的参数只有一个且必须是类类型对象的引用，使用传值方式编译器直接报错，因为会引发无穷递归调用。
// 3.若未显式定义，编译器会生成默认的拷贝构造函数。 默认的拷贝构造函数对象按内存存储按字节序完成拷贝，
// 这种拷贝叫做浅拷贝，或者值拷贝。


// class Date
// {
// public:
//     Date(int year=2010,int month=6,int day=1)
//     {
//         _year=year;
//         _month=month;
//         _day=day;
//     }
//     Date(const Date& d)  //Date d 这种写法错误，会形成无穷递归 Date(Date& d)=Date(Date *this,Date& d)
//     {
//         _year=d._year;
//         _month=d._month;
//         _day=d._day;
//     }

//     void Print()
//     {
//         cout<<_year<<'-'<<_month<<'-'<<_day<<endl;
//     }
// private:
//     int _year;
//     int _month;
//     int _day;
// };

// int main()
// {
//     Date d1(2023,6,1);
//     Date d2(d1);//用d1这个对象去初始化d2，d2(d1)=d2(&d2,d1)
//     Date d3=d1; //也是拷贝构造，与上面等价
//     d1.Print();
//     d2.Print();


//     return 0;
// }

//运算符重载
//1.赋值运算符只能重载成类的成员函数不能重载成全局函数，原因：赋值运算符如果不显式实现，编译器会生成一个默认的。
// 此时用户再在类外自己实现一个全局的赋值运算符重载，就和编译器在类中生成的默认赋值运算符重载冲突了，故赋值
// 运算符重载只能是类的成员函数。
//2.   .*   ::  sizeof  ?:   .    注意以上5个运算符不能重载。这个经常在笔试选择题中出现。

// class Date
// {
// public:
//     Date(int year=2010,int month=6,int day=1) //全缺省构造函数
//     {
//         _year=year;
//         _month=month;
//         _day=day;
//     }

//     void Print()
//     {
//         cout<<_year<<'-'<<_month<<'-'<<_day<<endl;
//     }
// public:
//     int _year;
//     int _month;
//     int _day;
// };

// bool operator==(const Date& d1,const Date& d2) //也可在类外重载，但是不能在类外重载赋值
// {
//     return  d1._year==d2._year
//           &&d1._month==d2._month
//           &&d1._day==d2._day;
// }

// int main()
// {

//     Date d1;
//     Date d2;
//     d1.Print();
//     d2.Print();
//     cout<<boolalpha<<(d1==d2)<<endl; //boolalpha 显示bool值，而不是0或者1
//     return 0;
// }


// class Date
// {
// public:
//     Date(int year=2010,int month=6,int day=1) //全缺省构造函数
//     {
//         _year=year;
//         _month=month;
//         _day=day;
//     }
//     bool operator==(const Date& d) //相当于 bool operator==(Date* this,const Date& d)
//     {
//         return _year==d._year
//             && _month==d._month
//             && _day==d._day;
//     }
//     void Print()
//     {
//         cout<<_year<<'-'<<_month<<'-'<<_day<<endl;
//     }
// public:
//     int _year;
//     int _month;
//     int _day;
// };



// int main()
// {

//     Date d1;
//     Date d2(2023,6,1);
//     d1.Print();
//     d2.Print();
//     cout<<boolalpha<<(d1==d2)<<endl;  //d1==d2 相当于 d1.operator==(d2)
//     return 0;
// }


//实现一个日期计算器

class Date
{
public:

    
    Date(int year=0,int month=1,int day=1)
    {
        if(year>=0&&month>0&&month<13&&day<=GetDay(year,month)) //合法性判断
        {
            _year=year;
            _month=month;
            _day=day;
        }
        else
        {
            _year=-1;
            _month=-1;
            _day=-1;
            cout<<"非法日期输入"<<endl;
        }
    }

    int GetDay(int year,int month)
    {
        static int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        if(month==2&&((year%4==0)&&(year%100!=0)||year%400==0))
        {
            return 29;
        }
        return arr[month];    
    }

    void Print()
    {
        cout<<_year<<'-'<<_month<<'-'<<_day<<endl;
    }
    //关系运算
    bool operator==(const Date& d)
    {
        return _year==d._year
            && _month==d._month
            && _day==d._day;
    }
    bool operator>(const Date& d)
    {
        if(_year>d._year)
            return true;
        else if(_year==d._year&&_month>d._month)
            return true;
        else if(_year==d._year&&_month==d._month&&_day>d._day)
            return true;
        
        return false;
    }
    bool operator>=(const Date& d)
    {
        return (*this>d)||(*this==d);
    }
    bool operator<(const Date& d)
    {
        return !(*this>d);
    }
    bool operator<=(const Date& d)
    {
        return (*this<d)||(*this==d);
    }
    bool operator!=(const Date& d)
    {
        return !(*this==d);
    }

    //时间运算
    Date& operator=(const Date& d)
    {
        _year=d._year;
        _month=d._month;
        _day=d._day;
        return *this;
    }
    Date operator+(int day)
    {
        Date temp(*this);
        temp._day+=day;
        while(temp._day>GetDay(temp._year,temp._month))
        {
            temp._day-=GetDay(temp._year,temp._month);
            temp._month++;
            if(temp._month==13)
            {
                temp._month=1;
                temp._year++;
            }
        }
        return temp;
    }

    Date& operator+=(int day)
    {
        this->_day+=day;
        while(_day>GetDay(this->_year,_month)) //这里省略了this
        {
            _day-=GetDay(_year,_month);
            _month++;
            if(_month==13)
            {
                _month=1;
                _year++;
            }
        }

        return *this;
    }

    Date operator-(int day)
    {
        Date temp(*this);
        temp._day-=day;
        while(temp._day<=0)
        {
            temp._month--;
            if(temp._month==0)
            {
                temp._month=12;
                temp._year--;
            }
            temp._day+=GetDay(temp._year,temp._month);
        }

        return temp;
    }
    Date& operator-=(int day)
    {
        _day-=day;
        while(_day<=0)
        {
            _month--;
            if(_month==0)
            {
                _month=12;
                _year--;
            }
            _day+=GetDay(_year,_month);
        }

        return *this;
    }

    Date& operator++() //前置加加
    {
        return (*this)+=1;
    }
    Date operator++(int) //后置加加
    {
        Date temp(*this);
        (*this)+=1;
        return temp;
    }
    Date& operator--()
    {
        return (*this)-=1;
    }
    Date operator--(int)
    {
        Date temp(*this);
        (*this)-=1;
        return temp;
    }


private :
    int _year;
    int _month;
    int _day;
};


int main()
{
    Date d1;
    Date d2(2023,8,31);
    // Date d3(2023,3,10);
    // cout<<boolalpha<<(d1<d2)<<endl;
    // cout<<boolalpha<<(d2<=d1)<<endl;
    
    // d1.Print();
    // d1=d2-1000;
    // d2.Print();
    // d1.Print();
    Date d3(2023,8,31);
    if(d3++>d2)
    {
        cout<<"d3>d2"<<endl;
    }

   // d3++;
    d3.Print();
    // ++d3;
    // d3.Print();
    
    return 0;
}