#include "SortedListLinked.h"
#include "CD.h"
using CSC1310::CD;
#include "ListArray.h"
using CSC1310::ListArray;
#include "ListArrayIterator.h"
using CSC1310::ListArrayIterator;
#include <iostream>
using namespace std;

void addCDs(ListArray<CD>* list, ListBox<CD>* lb)
{
   ListArrayIterator<CD>* iter = list->iterator();
   //DO THIS
   //iterate over and add the cds to the list box (use lb->addItem)
   while(iter->hasNext())
   {
     list = lb->addCDs(iter)
     iter++;
   }



   delete iter;
}

void deleteCDs(ListArray<CD>* list)
{
   ListArrayIterator<CD>* iter = list->iterator();

   //DO THIS
   //iterate over and delete the cds
   while(iter->hasNext())
   {
     list = lb->removeCDs(iter)
     iter++;
   }




   delete iter;
}

int main(int argc, char* argv[])
{
   ListArray<CD>* cds = CD::readCDs("cds.txt");
   //DO THIS
   //create and test the sorted linked list



   return 0;
}
