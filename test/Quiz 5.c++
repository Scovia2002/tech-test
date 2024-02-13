//Queation 5:Reverse integer//
#include <iostream>
int reverse_digits(int num) {

  bool is_negative = num < 0;
  num = abs(num);

  
  int reversed_num = 0;
  while (num > 0) {
    int digit = num % 10;
    if (reversed_num > INT_MAX / 10 || (reversed_num == INT_MAX / 10 && digit > 7)) {
      return 0; 
    }
    reversed_num = reversed_num * 10 + digit;
    num /= 10;
  
  return is_negative ? -reversed_num : reversed_num;
}


int main() {
  std::cout << reverse_digits(500) << std::endl; 
  std::cout << reverse_digits(-56) << std::endl;  
  std::cout << reverse_digits(-90) << std::endl;  
  std::cout << reverse_digits(91) << std::endl;  
  return 0;
}


#include<iostream>
using namespace std;
bool isvowel(char ch){
  ch =toupper(ch);
  return (ch="A"

}
int countvowels(string str)
{
  int count=o;
  for(int=0; i<str.len
  if(isvowel(str{i})))
  ++count;
}
int main()
{
  string str="abc de";
  cout<<countvowels(str)
  return 0;

}

