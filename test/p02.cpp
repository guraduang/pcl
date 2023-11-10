#include<iostream>
#include<memory>
class B;//类的前置声明

class  A
{
public:
   A()  	
   {
   	std::cout << "构造A类对象！" << std::endl;
   }
   ~A( )  
   {
   	std::cout << "析构A类对象！" << std::endl;
   }
    std::shared_ptr<B>  m_pb; //指向B的内存
};


class  B
{
public:
   B()
   {
   	std::cout << "构造B类对象！" << std::endl;
   }
   ~B()
   {
   	std::cout << "析构B类对象！" << std::endl;
   }
   std::shared_ptr<A>  m_pa;//指向A的内存
};

int main()
{ 
    //陷阱1，不要把栈内存地址赋给  scoped_ptr, scoped_array, shared_ptr
/*	int   a = 100;
   std::shared_ptr<int >  p(&a);//运行时出错
   cout << p.use_count() << endl;  

   //陷阱2，shared_ptr不能多次引用同一原始指针，否则同一内存会被delete多次
   A  *pA = new  A;

   std::shared_ptr<A>  p1(pA);
   cout << p1.use_count() << endl; 

   //std::shared_ptr<A>  p2(pA); //这里p2并不知道p1的存在
   std::shared_ptr<A>  p2(p1);//正确写法
   cout << p2.use_count() << endl;
   //p1 p2在对象析构时，会各自delete pA，从而报错
   

   //陷阱3：shared_ptr循环引用导致内存泄露。 
   std::shared_ptr<A> pA(new  A);
   std::shared_ptr<B> pB(new  B);
   cout << pA.use_count() << "   ,   " << pB.use_count() << endl;

   pA->m_pb = pB;// 此刻 ，pB指向的内存引用计数为2
   pB->m_pa = pA;//此刻 ，pA指向的内存引用计数为2
   cout << pA.use_count() << "   ,   " << pB.use_count() << endl;
   //此刻，pA，pB都析构时，都只会将引用计数-1， 各自剩余引用计数为1，则不会释放
   //从而导致A，B内存泄漏

   */

   //陷阱4：  shared_ptr管理的内存必须是new出来的
   A  *pA = (A *)malloc(sizeof(A)); 
   std::shared_ptr<A>  p(pA); //这样肯定有问题的

   getchar();
   return 0;
}