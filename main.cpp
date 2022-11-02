#include <iostream>
#include <string>
#include <vector>

class Solution {
    public:
        std::vector<std::string> fizzBuzz(int n) {
            std::vector<std::string> answer(n);
            for (int i = 1; i <= n; i++){
                if (i % 3 == 0 & i % 5 == 0) 
                    answer[i] = "FizzBuzz";
                else if (i % 3 == 0)
                    answer[i] = "Fizz";
                else if (i % 5 == 0)
                    answer[i] = "Buzz";
                else
                    answer[i] = std::to_string(i);
            }
        return answer;   
        }
};
  
int main()
{
  
  Solution sol; 
  std::vector<std::string> play = sol.fizzBuzz(15);
  for (int i = 1; i <= play.size(); i++){
      std::cout << play[i] << " ";
  }
  std::cout << std::endl;
  
}
