#include <iostream>

using namespace std;
void alphabetSoup();

int main()
{

    alphabetSoup();

    return 0;
}

void alphabetSoup(){

   string userInput;

   cout << "Put the word:";
   cin >> userInput;

   int temporarValue;
   int imitation[userInput.length()];
   string actualLetter[userInput.length()];

   //Initializing the number of letters in ASCII

   for(int a = 0;a < userInput.length();a++){

        for(int b = 97;b < 123;b++){

            char ch(b);

            if(userInput.at(a) == ch){

                imitation[a] = b;

            }

        }

   }

   cout << endl << "Word in Alphabet order:";

   //Sorting the numbers and initializing the actual letters

   for(int c = 0;c < userInput.length();c++){

        for(int d = c + 1;d < userInput.length();d++){

                if(imitation[c] > imitation[d]){

                    temporarValue = imitation[c];

                    imitation[c] = imitation[d];

                    imitation[d] = temporarValue;

                }

        }

        char cht(imitation[c]);

        actualLetter[c] = cht;

        cout << actualLetter[c];

   }

   cout << endl;

}
