#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int main(){
    string grade;
    int ran;
    cout << "Press Enter 3 times to reveal your future.";
    for(int i=0;i<3;i++){
         cin.get();
    }
    srand(time(0));
    ran = rand()%9 ;
    switch (ran)
    {
    case 0: grade="A"; break;
    case 1: grade="B+"; break;
    case 2: grade="B"; break;
    case 3: grade="C+"; break;
    case 4: grade="C"; break;
    case 5: grade="D+"; break;
    case 6: grade="D"; break;
    case 7: grade="F"; break;
    default: grade="W"; break;
    }
    cout << "You will get " << grade << " in this 261102.\n";
   
    
}

