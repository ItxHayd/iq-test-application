#include "mcqs.h"

// TOD0: FILL mcqs.h with about 30/40 mcqs in that specific format

#include <iostream>
#include <cstdlib> // for random
#include <ctime> // seeding random
#include <cctype> // for toupper
using namespace std;

int main(){
    int score = 0;
    srand(time(0));
    string contestent;

    cout<<"Enter contestent name: ";
    getline(cin,contestent);
    
    // TOD0:  BASIC  DISPLAY 
    // TOD0 : Modes(trivia , iq , typing) (optional)
    // TOD0 : Timer (optional)(at last)
    // TOD0 : DISPLAY Instructions
    
    // TOD0: 3 chances (lives)
    
    int chances = 3;
    while (chances > 0 ){
        //LOOP 
        char answer;
        int index = rand()%3;

        // TOD0 : Dispalying RANDOM Questions
        cout<<questions[index].question <<endl;

        // TOD0 : Dispalying Their options
        
        cout<<"A. ";
        cout<<questions[index].options[0];
        cout<<endl;
        cout<<"B. ";
        cout<<questions[index].options[1];
        cout<<endl;
        cout<<"C. ";
        cout<<questions[index].options[2];
        cout<<endl;
        cout<<"D. ";
        cout<<questions[index].options[3];
        cout<<endl;

        // TOD0 : Matching  options

        cout<<"Enter Your Answer : ";
        cin>>answer;

        if(toupper(answer) == questions[index].ans){
            score++;
            cout<<" Correct! "<<endl;

        }
        else{
            chances--;
            cout<<"Incorrect. Remaining Lives: "<<chances<<endl;
        }




      
        
        //
        
        
    }
    
    cout<<endl<<endl;
    cout<<"Contestent's Name: "<<contestent;
    cout<<endl<<"Your score is : "<<score;
    
    // TOD0 : Updating Score to Another file
  
}