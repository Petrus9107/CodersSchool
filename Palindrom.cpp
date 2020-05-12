#include <iostream>
#include <deque>
#include <string>
#include <vector>


bool isPalindrome (const std::string & text){

    if (text == ""){
        std::cout << "Text is empty." << std::endl;
        return false;

    }else {

        std::deque<char> deque;
        std::copy(text.begin(), text.end(), std::front_inserter(deque));
        std::string tmpStr(deque.begin(), deque.end());

        return(text == tmpStr);

    }

}



int main(void){

    bool result;

    std::vector<std::string> textVector{"Ala ma kota", "ala", "kajak", "neveroddoreven", "abacada"};
    for (auto& text : textVector){
        result = isPalindrome(text);
        std::cout << text << "  ---> " << std::boolalpha << result << std::endl;
    
    }
  
}



