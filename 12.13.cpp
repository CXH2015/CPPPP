/**
习题12.13：扩展Screen类以包含move set display操作。通过执行如下表达式来测试类：myScreen.move(4,0).set('#').display(cout);
最简单的方式是参照12.1.3节至12.2节的内容，给出如下程序：
//12-13.cpp
//扩展Screen类以包含move set display操作。
//myScreen.move(4,0).set('#').display(cout);
**/
#include<iostream>
#include<string>
using namespace std;
class Screen{
public:
typedef string::size_type index;
char get() const {return contents[cursor];}
inline char get(index ht,index wd) const;
index get_cursor() const;
Screen(index hght,index wdth, const string &cntnts);
//增加三个成员函数
Screen& move(index r,index c);
Screen& set(char);
Screen& display(ostream &os);
private:
std::string contents;
index cursor;
index height,width;
};
Screen::Screen(index hght,index wdth,const string &cntnts):contents(cntnts),cursor(0),height(hght),width(wdth)
{
}
char Screen::get(index r,index c) const
{
index row=r*width;
return contents[row+c];
}
inline Screen::index Screen::get_cursor() const
{
return cursor;
}
Screen& Screen::set(char c)
{
contents[cursor]=c;
return *this;
}
Screen& Screen::move(index r,index c)
{
index row=r*width;
cursor=row+c;
return *this;
}
Screen& Screen::display(ostream &os)
{
os<<contents;
return *this;
}
int main()
{
//根据屏幕的高度 宽度 和内容的值来创建Screen
Screen myScreen(5,6,"aaaaa\naaaaa\naaaaa\naaaaa\naaaaa\n");
//将光标移至指定位置，设置字符并显示屏幕内容
myScreen.move(4,0).set('#').display(cout);
return 0;
}

