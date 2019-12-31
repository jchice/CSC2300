#if !defined PASSWORD_H
#define PASSWORD_H

//complete the includes
#include "Text.h"
#include "ListArray.h"
using namespace CSC1310;


class Password
{
   private:
      ListArray<String>* viable_words;  //the list of words that can still be the password
      ListArray<String>* all_words;  //the original list of words
      int len;  //the length of the first word entered is stored to check that all subsequent words have the same length

      //a private helper method to report the number of character matches between two Strings
      int getNumMatches(String* curr_word, String* word_guess);

   public:
      Password();   //constructor for Password class
      ~Password();  //Deconstructor for Password class.  Passing a string to delete individula words
      void addWord(String* word); //add a word to the list of possible passwords
      void guess(int try_password, int num_matches); //Index of guess word in the list of all words (1-based), number of matches reported by Fallout 3, update viable passords list
      int getNumberOfPasswordsLeft(); //return # of possible passwords
      void displayViableWords();  //Display the current list to the guess next
      int bestGuess(); //best word in the original list to guess next
      String* getOriginalWord(int index); //get word from the original list of all passwords
};

#endif
