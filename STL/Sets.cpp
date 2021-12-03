/*
-------------------------------------------------------------------------------------------------------------------------------------------------------
                                                            S T L   T U T O R I A L S
-------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include<bits/stdc++.h> // - STL Library Header File
using namespace std;    // C++ Default Library containing all necessary function and other stuffs

int main(){

    /*
    ---------------------------------------------------------------------------------------------------------------------------------------------------
                                                    C O N T A I N E R - 3   :   S E T S
    ---------------------------------------------------------------------------------------------------------------------------------------------------
    */ 

    //                                                  3.A   :   O R D E R E D   S E T
    
    // Ordered Set is a container in STL that stores only unique elements in an increasing order i.e element at index 0 will be the lowest and element at index (size - 1) will be the largest
    
    // Declaring and Initialising Set
    set<int> s;                                                     // creates an empty set 
    set<int> s1 = {1, 2, 3, 4, 5, 6, 7};                            // creates a set of 3 elements -> {1, 2, 3} : It will not take the common elements
    set<int> s2 = {1, 2, 3};
    
    // Declaring a iterator sit for all set of type int
    set<int>::iterator sit;
    
    // -------------------------------------------------------------------------------------------------------------------------------------------
    
    // Traversing the set
    
    // 1.a - Traditional way (it is here pointer)
    for(sit = s1.begin(); sit != s1.end(); sit++){
        cout << *sit << " ";                                        // returns all s1 elements -> 1 2 3 4 5 6 7
    }
    cout << endl;
    
    // 1.b - It by default starts from first and goes till the last -> for each loop (it is here actual element)
    for(auto sit: s1){
        cout << sit << " ";                                         // returns all s1 selements -> 1 2 3 4 5 6 7 
    }
    cout << endl;
    
    // -------------------------------------------------------------------------------------------------------------------------------------------
    
    // Operations on Set
    
    // 2. Inserting into a set                                      -> using insert function : Insertion of an element in a set takes O(logn) time
    for(int i=0; i < 5; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    
    for(auto sit: s){
        cout << sit << " ";                                         // returns all s1 selements -> 1 2 3 4 5 6 7 
    }
    cout << endl;
    
    // 3. Deleting an element or a range of elements from a set     -> using erase function : Deletion of an element in a set takes O(logn) time 
    
    s.erase(s.begin());                                             //  Deletes the element at the mentioned position -> s.erase(index) {Single element} => s = {31, 34, 54, 65} 
    s.erase(31);                                                    //  Searches the element and deletes that element -> s.erase(element) {Single element} => s = {34, 54, 65}           
    
    for(auto sit: s){
        cout << sit << " ";                                         // returns all s selements -> 34 54 65
    }
    cout << endl;
    
    auto start = s1.begin();
    auto end = s1.begin();
    end ++;
    end ++;
    s1.erase(start, end);                                           //  Deletes the range of elements -> s.erase(start, end) { The range is of type [) } => s = {65}
    
    for(auto sit: s1){
        cout << sit << " ";
    }
    
    // 4. find                                                      -> returns the iterator position (index) of the mentioned element if present elese return index of end() => size + 1 index
    auto position1 = s2.find(2);                                    // returns 4
    auto position2 = s2.find(8);                                    // returns s1.end() => {8}
    cout << &position1 << " " << &position2 << " " << endl;         // Size of int is 4
    
    // Other Operations
    cout << s1.size() << " " << endl;                               // Returns the size of the set
    cout << s1.max_size() << " " << endl;                           // Returns the maximum size of the set possible
    
    auto begin = s2.begin();
    auto finish = s2.end();
    s2.erase(begin, finish);                                        // Erasing the entire set -> Clearing the set
    
    s2.empty() ? cout << "Set 2 empty" << endl : cout << "Set 2 not empty" << endl;

    // ====================================================================================================================================================

    //                                                  3.B   :   U N O R D E R E D   S E T

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // UnOrdered Set is a container in STL that also stores only unique elements but the order is not fixed -> An element can be present at any position
    // The Advantage of using UnOrdered set is: All operations of UnOrdered set takes a time complexity of O(1) in average case
    // All Operations of ordered set are same for UnOrdered set

    unordered_set<int> us;

    // ====================================================================================================================================================

    //                                                  3.C   :   M U L T I S E T

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // Multiset is a container in STL that allows us to store duplicate elements but being an set of ordered type - It also arranges all the values in an increasing fashion
    // All Operations of multiset also takes a time complexity of O(logn) in all cases 

    multiset<int> ms;

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // Difference in Mulitset for erase 

    // This works same as that of ordered set
    s.erase(s.begin());                                             //  Deletes the element at the mentioned position -> s.erase(index) {Single element} => s = {31, 34, 54, 65} 

    // In this case, since multiset may contain duplicate values of given element -> Hence it deletes all occurences of that element
    s.erase(31);                                                    //  Searches the element and deletes that element -> s.erase(element) {Single element} => s = {34, 54, 65}           
    
    for(auto sit: s){
        cout << sit << " ";                                         // returns all s selements -> 34 54 65
    }
    cout << endl;
    
    // This again works same as that of ordered set
    auto start = s1.begin();
    auto end = s1.begin();
    end ++;
    end ++;
    s1.erase(start, end);                                           //  Deletes the range of elements -> s.erase(start, end) { The range is of type [) } => s = {65}
    
    for(auto sit: s1){
        cout << sit << " ";
    }

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // Difference in Find
    
    // For an element present in the multiset, it will return the iterator position for the first occurence ofo that element
    auto position1 = s2.find(2);                                    

    // For an element not present in the multiset, It works same as ordered set
    auto position2 = s2.find(8);                                    // returns s1.end() => {8}
    cout << &position1 << " " << &position2 << " " << endl;         // Size of int is 4

    return 0;
}