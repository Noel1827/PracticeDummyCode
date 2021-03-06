#include <iostream>
#include <vector>
#include "Library.h"

using namespace std;

/*
* EXERCISE A(20 pts):
* Binary Algorithm to find the index of a given target. Requires array to be sorted.
* Divides the array in half and only checks for the half containing the value while discarding the rest.
* The value is either the middle of the sub-array or in one of the two halves.
*
* By diving the vector in half each iteration, the complexity is at the most O(log(n))
* which beats the linear search at O(n)
*
* @param bookshelf = Target vector
* @param target - Target Element
* @return - Index of Target Element (-1 if not found)
*/
int Library::binarySearch(vector<Book> bookshelf, Book target)
{
    return binarySearchHelper(bookshelf, target, 0, bookshelf.size() - 1); // TEMP RETURN
}

/*
 * Helper method for Binary Search
*/
int Library::binarySearchHelper(vector<Book> bookshelf, Book target, int left, int right)
{

    if(left > right){
        return -1;
    }
    int middle = (left + right)/ 2;

    if (target.getId() < bookshelf[middle].getId())
    {
        return binarySearchHelper(bookshelf, target, left, middle - 1);
    }
    else if (target.getId() > bookshelf[middle].getId())
    {
        return binarySearchHelper(bookshelf, target, middle + 1, right);
    }
    else return middle;
    
}
/*
 * EXERCISE B(20 points):
 * Implement a iterative Bubble Sort for a vector books
 *
 * @param bookshelf - Vector to be sorted
 * @return A sorted copy fo the bookshelf array
 */
vector<Book> Library::bubbleSort(vector<Book> bookshelf) {
    vector<Book> unsortedBookshelf = bookshelf;
    bool swap = false;
    for( int i = 0; i < unsortedBookshelf.size() - 1; i++){
        for(int j = 0; j < unsortedBookshelf.size() - 1 - i; j++){
        if(unsortedBookshelf[j].compareTo(unsortedBookshelf[j + 1]) > 0){
                    swap = true;
                    Library::swap(unsortedBookshelf,j,j + 1);
        }
        else swap = false;
    }
    }
    // ADD YOUR CODE
    return  unsortedBookshelf;

}



/*
 * EXERCISE C(20 points):
 * Implement a recursive Insertion Sort for the vector of books using a helper method
 * HINT: USE A HELPER METHOD
 * @param bookshelf - Vector to be sorted
 * @return A sorted copy of the bookshelf vector
 */
vector<Book> Library::insertionSort(vector<Book> bookshelf) {
    return insertionSortHelper(bookshelf, 1);
}
vector<Book> Library::insertionSortHelper(vector<Book> bookshelf, int insertIndex) {
    // ADD YOUR CODE
    if(insertIndex == bookshelf.size()){
        return bookshelf;
    }
    // int i = insertIndex;


    while(insertIndex > 0 && bookshelf[insertIndex-1].compareTo(bookshelf[insertIndex]) > 0){
        Library::swap(bookshelf, insertIndex, insertIndex-1);
        insertIndex--;
    }

    return insertionSortHelper(bookshelf, insertIndex + 1);
}

int main() {
    vector<Book> emptyShelf = {};

    vector<Book> bookshelf = {Book(0, "Somebody once told me", "Shrek", 2001, 1000),
                              Book(14, "Hey, now, you're an all-star, get your game on, go play", "Sadly no Bee Movie reference", 2001, 1000),
                              Book(1, "the world is gonna roll me", "Donkey", 2001, 1000),
                              Book(3, "She was looking kind of dumb", "Puss in boots", 2001, 1000),
                              Book(4, "with her finger and her thumb", "Dragon", 2001, 1000),
                              Book(10, "So much to do, so much to see", "Princess Charming", 2001, 1000),
                              Book(6, "Well, the years start coming and they don't stop coming", "Pinocchio", 2001, 1000),
                              Book(7, "Fed to the rules and I hit the ground running", "Doris", 2001, 1000),
                              Book(17, "And all that glitters is gold", "Cookie", 2001, 1000),
                              Book(8, "Didn't make sense not to live for fun", "Lord Farquaad", 2001, 1000),
                              Book(9, "Your brain gets smart but your head gets dumb", "Fairy Godmother", 2001, 1000),
                              Book(11, "So what's wrong with taking the back streets?", "Captain Hook", 2001, 1000)};

    vector<Book> bookshelf2 = Library::bubbleSort(bookshelf);
    for(int i = 1; i < bookshelf.size(); i++) {
        if (bookshelf2[i - 1].compareTo(bookshelf2[i]) < 0) {
            cout << bookshelf2[i-1].getId() << endl;
        }
    }

    vector<Book> bookshelf3 = Library::insertionSort(bookshelf);
    for(int i = 1; i < bookshelf.size(); i++) {
        if(bookshelf3[i-1].compareTo(bookshelf3[i]) < 0) {
            cout << bookshelf3[i-1].getId() << endl;
        }
    }

    // After sorting we can do binarySearch 
    cout << Library::binarySearch(emptyShelf, Book(0, "Somebody once told me", "Shrek", 2001, 1000)) << endl;
    cout << Library::binarySearch(bookshelf2, Book(10, "So much to do, so much to see", "Princess Charming", 2001, 1000)) << endl;
}
