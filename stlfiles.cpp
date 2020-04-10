#include<iostream>
#include<vector>
#include<iterator>
#include<stdio.h>
#include<list> // this is the header file for list
#include<algorithm> // to use the inbuilt algorithms we need to use the algorithms function
#include<map>
#include<unordered_map> // this is for the unordered map
using namespace std;

int main(){
// this is the program about the STL functions that are used in c++ programming like lower & upper bound, pair,map and many more

/* lower bound : - this is a a function that returns a value equal to or greater than the value that is being searched in the vector
upper bound :- this is a function that returns a value greater than the value being searched in the vector
binary search :- we use this to search the value in vector using binary search , this is done in log(n) complexity
NOTE :- we use " greater<int>" function to check the value or sort the value in decreasing order that is in descending order
*/
/* About the STL Libraries :- Standard Template Library is a library. It is one of the most used library used in c++.
1) It separates data and data manipulations, here data structures are called containers and data manipulation is known for algorithms.
2) These two don't interact with each other directly so they use iterators to interact.
3) Here, containers can be of two types sequence :- store in sequence (vector, list, forward list,etc) and associative which are store value as key value pair (map,set, ordered and unordered - sorted and unsorted way).
4) We should use the STL because
*/
vector <int> v{1,2,3,4,5,9,8,7,6,9};
// this is sequence container
int l = v.size();
// vector is a container and containers are accessed by iterators so each vector has its iterators
// iterators are same as pointers
vector <int>::iterator itr = v.begin();
// these iterators return the address the of the pointer pointing
// so we have to use * if we want to use the value

//=======================================================
// list and vector difference is that list is a double linked list and vector is like unlimited array store
// we need to include the header file for list that is list.h
// SYNTAX :- list<int> itr = v.begin();
// list has same functions as vector like : list <int>ls; ls.push_back(10); ls.size(); etc.
// we can use auto in place of data types and list<int>.
//=======================================================

//NORMAL MAPS
// STL MAPS : Maps , multi-maps, ordered and unordered maps,etc;
// we need to include the header file for maps that is <map>
// for creating a map we need to provide the SYNTAX :- map<key,value> mp;
// maps are ordered pair that is the data is sorted according to the key value irrespective of the date type
// to have the map with no sorting order we need unordered map.
// the map iterator in here returns the pair values
// a normal map don't have duplicate value keys.
// maps use red black tree (balanced binary tree) and always stored in sorted order that's y the search is fast
//==================================================
//MULTI MAPS
// multi map does not support mp[9] =100; type value insertion
// it also have sorted order of the key but it allows multiple value in a same value key
// multi map has only insert function to insert the values
// multi map uses insert function and not the mp[6] = 600; method because it will ask for where or which 6 key value data has to be updated



// to iterate the map we use the below code
/* associate container are containers  where data is stored with key value pair.
maps needs key and value , pair is container that has two values. we create pair as given below . map iterator returns value as pair.
therefore we need a pair type of value to store it.
*/

pair <int,int> p = make_pair(10,20);
cout<<"pair values are = "<<p.first<<"-"<<p.second<<endl;

map <int,int> mp ;
mp[4] = 400; // here the key value is 4 and the data is 400
mp[3] = 300;

mp.insert(make_pair(10,100)); // this is a inbuilt function for maps
mp.insert(make_pair(10,900)); // this has no effect on the value of key value 10 data as insert is meant for inserting the value and not for updating it
mp[7] = 700;

mp[10] = 700; // here 10 has overridden value of the key in the insert function
// map is sorted on the order of key
//==========================================================
// multi map
multimap <int, int> mp1;
mp1.insert(make_pair(1,10));
mp1.insert(make_pair(2,20));
mp1.insert(make_pair(3,30));
mp1.insert(make_pair(4,40));
mp1.insert(make_pair(5,50)); // these are the insertion of the value in the multi map
//printing is done as same way as for the normal map
cout<<"MULTI MAP :"<<endl;
for(auto i = mp1.begin();i != mp1.end();i++){
    cout<<i->first<<"-----"<<i->second<<endl;
}// printing of multi map
//==========================================================

//UNORDERED MAPS
// unordered list are used to have key value pair in any order and not is sorted way
// to use them we need to use the header file that is <unordered_map>
// since the unordered map allows [] operator we can update the key value data
// the order can change in the unordered map after every execution
// they are stored as hash table structure
// therefore they are fast then other maps
// it can have multi map properties that is it can have repetitive key value pairs.

unordered_map<int,int> mp2;
mp2.insert(make_pair(11,110));
mp2[12]=120; // here the key value is 12 and the data it stores is 120.

//===========================================================
// to iterate the map that is to along the value in map
// . operator is used to use the class or structure values or functions when we have actual object or its reference
// but when we use " -> " operator then we can say that it is used for the pointers that point to the address of that object to that class,etc.
// we get the value of the map in sorted order only

cout<<"NORMAL MAP VALUE :"<<endl;
for(auto itr= mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<"-----"<<itr->second<<endl; // here the itr has key value pairs address and not the actual value thats y we use this symbol.
}// this is the for loop to traverse a map

//============================================================


// STL FOR VECTORS
// Erase - Remove pair:- they are used to remove the value from the contiguous memory location
/* we use this pair as the erase function takes too much time to erase the value therefore we use these pair of function to reduce the
   time of the removal of the  elements from the vector.
   REMOVE function does not remove unlike the ERASE function but returns the iterator to the position from where we can erase the value
   REMOVE function removes all the occurrence of the number and arranges the vector such that the memory is contiguous and return the ITERATOR from where we can remove
   the value till end
   */
   cout<<"This is the STL for vectors"<<endl;
   vector <int> v1;
   v1.push_back(10),v1.push_back(20),v1.push_back(30),v1.push_back(40),v1.push_back(40),v1.push_back(50),v1.push_back(60),v1.push_back(70);

   for(auto &i:v1)
    cout<<"vector val =>"<<i<<endl;

    cout<<"Size before the remove function =>"<<v1.size()<<endl;
    auto itrbegin = std::remove(v1.begin(),v1.end(),40);
    // since the remove function returns the iterator from where we need to erase
    cout<<"Size after the remove function =>"<<v1.size()<<endl;
    v1.erase(itrbegin,v1.end()); // erase function erase the value till the end ... it also takes the iterator as the perimeter
    cout<<"Size after the erase function =>"<<v1.size()<<endl;

    // the above method takes less time to remove the element from the vector

    for(auto &p :v1)
        cout<<"the value of the vector are => " <<p<<endl;

//======================================================================

//SETS and MULTI SET:


return 0;
}
