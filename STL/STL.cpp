// The STL contains the container, Algorithms, iterators and function
#include<iostream>
#include <vector>
#include<list>
#include<stack>

using namespace std;

int main(){

    // Pairs [ Used when multiple data types are stored ]
    pair<int, int> p ={1, 3};
    cout<< p.first <<" "<< p.second<<endl;
    pair<int, pair<int, int>> pr = {1, {3, 4}};    // multi-multi data type can also be stored
    cout<< pr.first <<" "<<pr.second.second<<" "<<pr.second.first<<endl;

    vector<int> v;   // vector is dynamic array, it is malleable to increase decrease its size as per requirement of compiler
    // add elements in vector
    v.push_back(1);

    // allocating size and elements on vector
    vector<int> vec(5, 20);   // size is 5 and elements value = 20
    vector<pair<int, int>> vect({10}, {5, 20});   // 10 memory blocks + garbage val , 5 memory blocks + 20
    vector<pair<int, int>> Vec(vect);   // vector can store vector but depending on Dimension
  // vector<pair<int, int>> Vec(vec);  // error : since Vec is two dimensional vector and vec is one thus, it will not store


   // iterator
   // syntax data_structure datatype:: iterator it = v.begin() it++
   vector<int>:: iterator it = v.begin();    // iterator stores memory address
   it++;
   cout<< *(it) <<" ";  // accesses value at the address
   // achieve clang-Tidy of iterator
   for(auto it =  v.begin(); it!= v.end(); it++){
       cout<<*(it)<<" ";
   }

   // erase
   // {10, 20, 30, 40, 50}
   v.erase(v.begin()+1, v.begin()+4);  // v.begin(){start, end+last position}

   // insert
   vector<int> vt(2,100);
   vt.insert(vt.begin()+1, 2, 10); // first position ; numbers of values ; values

   // pop
   vt.pop_back(); // erases elements from last

   // clear
   v.clear(); // empties whole vector

   /*
    * LIST (same dynamic data structure like vector but has front operation )
    */

       list<int> ls;
       ls.push_back(3);
       ls.push_front(5);

       // here the list is having less time complexity of the variables, see list involves internal
       // use doubly linked list but vector use linked list internally
       // so the situations are whole new different

   /*
    * STACK ( data structure that is LIFO )
    */

       stack<int> st;
       st.push(1);    //  {1}
       st.push(2);    //  {2, 1}
       st.push(3);    //  {3, 2, 1}
       st.push(4);    //  {4, 3, 2, 1}
       st.push(5);    //  {5, 4, 3, 2, 1}

       cout << st.top();  //  {5}
       st.pop();    //   {4, 3, 2, 1}


}
