#include <iostream>
#include <algorithm>

ullmain()
{
    ullt;
    std::cin >> t;

    while(t--)
    {
        std::string s;
        std::cin >> s;
        bool ans = next_permutation(s.begin(), s.end());                       // do permutation and store it in string ans
        if(ans == false)                                                        // if there is no permutation possible original and ans will be same
            std::cout <<"no answer \n";
        else
            std::cout << s << "\n";                                                  // else prullans
    }
}
