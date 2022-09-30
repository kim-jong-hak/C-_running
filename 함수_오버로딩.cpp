// 함수의 매개변수의 선언이 다르면 동일한 이름의 함수도 정의가 가능하다.
// 이러한 형태의 함수 정의를 함수 오버로딩이라고 한다.
#include <iostream>
void Swap(int *a,int *b);
void Swap(char *a, char *b);
void Swap(double *a, double *b);
int main()
{
	int num1 = 20;
	int num2 = 30;
	Swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;
	char ch1 = 'A';
	char ch2 = 'Z';
	Swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double db1 = 1.16;
	double db2 = 3.14;
	Swap(&db1, &db2);
	std::cout << db1 << ' ' << db2 << std::endl;
	
	return 0;
}
void Swap(int *a,int *b)
{
  int ab;
  ab=*a;
  *a=*b;
  *b=ab;
}
void Swap(char *a,char *b)
{
  char ab;
  ab=*a;
  *a=*b;
  *b=ab;
}
void Swap(double *a,double *b)
{
  double ab;
  ab=*a;
  *a=*b;
  *b=ab;
}