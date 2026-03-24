#include <vector>
#include <limits>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <iostream>


//using text_t = std::string; best so you dont have to keep typing std::string;
// std:: cin >> name; is best for single word answers for user input
// std::getline(std::cin, name); is best for more than one word answers for user input
// To prevent user input buffers we use std::getline(std::cin >> std::ws, name);
// z; means you are declaring something but not yet assigning it( z can be any variable such as age, name, ect...)
// z = means you are assigning it(  z can be any variable such as age, name, ect...)
// z = std::max/min(x,y) will print out the max/min number between the two variables(x,y)
// z = pow(2, 3); will print 2^3=8 need to #include <cmath>
// z = sqrt(9); will print the square root of 9, need to #include <cmath>
// z = abs(-3); will print out 3, this is the absolute value
// z = round(int(number with a decimal)); will round the number to the nearest whole number | could also use z = ceil/floor (int(number with a decimal)); to round up a number up(ceil) or down(floor) no matter the decimal place
// switch(){} = alternative to using many else if statements | compare one value against matching cases and it will print a different message | case 'l':
// default: = kinda like an else statement, if user dosnt put right input it will print out a message
// char = holds single letters


using std::cout;
int main(){
    std::string name;
    char option;
    int q1;
    int q2;
    int q3;
    int q4;
    int score;

    cout << "Hello user please state your name: ";
    getline(std::cin, name);
    cout << '\n' << "Hello " << name << " would you like to play a quick question game? (Type Y for yes/ Type N for no): ";
    std::cin >> option;
        switch(option){

            case 'Y':
                cout << "Glad that you want to play my question game lets continue!!" << '\n';
                cout <<"Okay so first question, what's 10 * 1000?(Please dont use commas):  ";
                std::cin >> q1;
                    if(q1 == 10000){

                        cout << "Awsome!! thats correct now theres 2 more questions left" << '\n';
                        score = score +1;
                    }
                    else{
                        cout << "Sorry man but thats incorrect, at least you got 3 more question left" << '\n';
                    }
                    cout << "Okay now question two, if you have 10 apples and you loose 3, how many do you have left?:  ";
                    std::cin >> q2;
                        if(q2 == 7){
                            cout << "Thats correct!! Two more questions left" << '\n';
                            score = score + 1;
                        }
                        else{
                            cout << "Incorrect, two more questions left" << '\n';
                        }
                            cout << "If you were making 120k each year after paying taxes, how much are you making after taxes?: ";
                            std::cin >> q3;
                                if( q3 == 10000){
                                    cout << "Good Stuff!! now you have one more question left" << '\n';
                                    score = score + 1;
                                }
                                else{
                                    cout << "That's sadly not correct, but lets continue " << '\n';
                                }
                                cout << "Whats 100/2?: ";
                                std::cin >> q4;
                                    if(q4 == 50){
                                        cout <<" Thats correct!! you're officially done with the quiz please view score under " << '\n';
                                        score = score + 1;
                                    }
                                    else{
                                        cout << "Unfortunately thats incorrect, but at least your done with the quiz now please view score under" << '\n';
                                    }
                                    cout << "Your score was " << score << '\n';
                                        if(score == 4 || score == 3){
                                            cout << "You passed the mini quiz game!! thank you sooo much for playing!!";
                                        }
                                        else{
                                            cout << "Sadly you failed the quiz, please either close the tab or restart the program to try again!! ";
                                        }
                                            

        
                break;
            case 'N':
                cout << "Sorry to hear that you dont want to play my question game please close this tab";
                break;
            default:
                cout << "Please type either Y to play or N to not play, please restart this program and try again";



        }

    return 0;
}
