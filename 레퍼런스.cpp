#include <iostream>
//참조자(레퍼런스)
int main()
{
  //기본 레퍼런스 문법
  int a=2;
  int &b=a;
  std::cout<<b<<std::endl;

  //배열들의 레퍼런스
  int arr[3]={1,2,3};
  int(&ref)[3]=arr;

  ref[2]=4;//레퍼런스를 통하여 배열에 숫자 4를 넣는다.

  std::cout<<ref[0]<<ref[1]<<ref[2]<<std::endl;//ref 출력
  arr[2]=18;
  std::cout<<arr[0]<<arr[1]<<arr[2]<<std::endl;//arr 출력
}