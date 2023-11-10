// unique_ptr的使用，指针p->函数p的使用,函数p->指针p1的使用,在不同空间内转换p的控制权
#include <iostream>
#include <memory>

std::unique_ptr<int> test_ptr(std::unique_ptr<int> p)
{
    std::cout << "move_&p：" << &p << std::endl;
    std::cout << "move_*p：" << *p << std::endl;
    return p;
}

int main(int argc, char *argv[])
{
    std::cout << "unique_ptr的使用，指针p->函数p的使用,函数p->指针p1的使用,在不同空间内转换p的控制权" << std::endl;

    // unique_ptr指针所管理的内存区域为独占状态，当另一个unique_ptr访问当前指针时，当前指针会失效，内存的控制权交给新指针
    std::unique_ptr<int> p = std::make_unique<int>(5);
    std::cout << "no_move_&p：" << &p << std::endl;
    std::cout << "no_move_*p：" << *p << std::endl;
    // 将控制权交给函数参数
    p = test_ptr(move(p));
    std::unique_ptr<int> p1 = std::move(p);
    // cout <<&p;

    if (p1)
    {
        std::cout << "move_&p1：" << &p1 << std::endl;
        std::cout << "move_*p1：" << *p1 << std::endl;
    }
    else
    {
        std::cout << "p1 is empty." << std::endl;
    }
    return 0;
}