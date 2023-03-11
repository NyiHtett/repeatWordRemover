#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
using namespace std;


int main()
{
   cout << "Enter a word: ";
   string s;
   cin >> s;
   
    string result = "";
    
    for(int i = 0; i < s.length(); i++){
        string word = s.substr(i,1);
        int count = 0;
        for(int j = 0; j < s.length(); j++){
            if(word == s.substr(j,1)){
                count++;
            }
        }
        if(count == 1){
            result += word;
        }
    }
   cout << result << endl;

   return 0;
}
