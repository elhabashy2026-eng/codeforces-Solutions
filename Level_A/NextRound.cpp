#include <iostream>
using namespace std;

int main()
{
   int NumberOfParticipants;
   int Stantard;
   int NumberAllowed[55];
   int NumberOfPassed = 0;
   
   cin >> NumberOfParticipants;
   cin >> Stantard;

     for(int i = 0 ; i < NumberOfParticipants ; i++){
        cin >> NumberAllowed[i];
     }
        
     for(int j = 0 ; j < NumberOfParticipants ; j++){
       if(NumberAllowed[j] >= NumberAllowed[Stantard - 1] && NumberAllowed[j] > 0){
         NumberOfPassed += 1;
       }
     }
     cout << NumberOfPassed;

   return 0;
}
