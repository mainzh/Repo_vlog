#include <iostream>

using namespace std;

class student
{
public:
    student();    //构造函数
    student(int b);    //重载构造函数
    virtual ~student();    //虚析构函数

    char name[56];
    int age;

    virtual void test();    //虚函数
    virtual void test(int a);    //重载虚函数

    virtual void testa(){};    //纯虚函数
private:
    int haha;
};

student::student()
{
    cout << "Hello!" << endl;
};

student::student(int b)
{
    cout << b << endl;
};

student::~student()
{
    cout << "Bye!" << endl;
};

void student::test()    //student:: 表示属于这个类里面的函数。不加则会表示普通函数
{
    haha = 150;
    cout << haha << endl;
};

void student::test(int a)    //student:: 表示属于这个类里面的函数。不加则会表示普通函数
{
    cout << a << endl;
};

class mystudent:public student
{
public:
    int grade;

    void test();
};

void mystudent::test()    //student:: 表示属于这个类里面的函数。不加则会表示普通函数
{
    /* 在子类里面对父类定义的虚函数进行覆盖式的替换 */
    cout << 123 << endl;
};

int main()
{
    cout << "Hello World!" << endl;

    /* 直接定义对象 */
    student my;    //student 就是类，my 就是对象
    my.age = 18;
    cout << my.age << endl;    //打印
    my.test();
    my.test(0);

    /* 在堆里面定义对象 */
    student *my1 = new student;
    my1->age = 19;
    cout << my1->age << endl;    //打印
    my1->test();
    my1->test(0);
    delete my1;    //删除在堆里定义的对象，目的是释放堆的内存

    /* 在堆里面定义对象，并且给对象指针传递参数 */
    student *my2 = new student(10);
    delete my2;

    mystudent my3;
    my3.grade = 99;
    my3.age = 8;
    cout << my3.grade << endl;    //打印
    cout << my3.age << endl;    //打印
    my3.test();    //因为在子类中重写了test()函数，所以这里应该打印值为123，而不是父类中的test()函数打印值150

    return 0;
}
