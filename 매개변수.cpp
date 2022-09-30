#include <iostream>
// 매개변수
int Adder(int num1 = 1, int num2 = 2); //디폴트 값 설정

int main(void)
{
    std::cout << Adder() << std::endl;  // 인자값이 없으면 디폴트 값으로 실행된다.
    std::cout << Adder(5) << std::endl; // 인자값이 1개가 있으니 num1에 인자값을 전달하고 나머지는 디폴트 값으로 실행된다.
    std::cout << Adder(3, 5) << std::endl; //인자값이 2개가 있으니 인자값으로 함수가 돌아간다.
    
    return 0;
}

int Adder(int num1, int num2)
{
    return num1 + num2;
}