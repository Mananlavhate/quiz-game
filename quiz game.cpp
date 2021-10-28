#include<iostream>

void start_game();
void end_game(int score);

using namespace std;

int main() {

    string user_input;
    cout<< "====================== WELCOME ======================"<<endl;
    cout<< "if you want to play game then enter 'play' to start: ";

    cin >>user_input;

    if(user_input == "play") {
        start_game();
    } else {
        end_game(0);
    }
}

void start_game() {
    
    char answer;
    int score = 0;
    
    cout<<"\n Who is the CEO of google:"<<endl;
    cout<<"a) Bill Gates"<<endl;
    cout<<"b) Jeff Bezos"<<endl;
    cout<<"c) Sulemen"<<endl;
    cout<<"d) Sundar Pichai"<<endl;
    
    cout<<"Please enter 'a','b','c','d' and press enter: ";
    cin>> answer;
    
    if (answer=='d') {
        cout<<"\nCongrats you choose right answer!"<<endl;
        score++;
    } else {
        cout<<"\nOpps!! you choose wrong answer"<<endl;
    }
    
    cout<<"\n Who is the PM of India:"<<endl;
    cout<<"a) Narendra Modi"<<endl;
    cout<<"b) Rahul Gandhi"<<endl;
    cout<<"c) Ram Nath Kovind"<<endl;
    cout<<"d) Amit Shah"<<endl;
    
    cout<<"Please enter 'a','b','c','d' and press enter: ";
    cin>> answer;
    
    if (answer=='a') {
        cout<<"\nCongrats you choose right answer!"<<endl;
        score++;
    } else {
        cout<<"\nOpps!! you choose wrong answer"<<endl;
    }
    
    end_game(score);
}

void end_game(int score) {
    
    cout<< "\nThanks for playing"<<endl;
    cout<< "Your score is "<< score <<endl;
    
}