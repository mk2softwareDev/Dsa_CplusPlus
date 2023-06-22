#include<iostream>
using namespace std;

// class : class is an user defined data type for variable.
// class is like formal template/system for physical creations that really occupies value
// object is physical instance of class that occupies memory of system (Ram)

class IntroductionTo_oops{
    // access modifiers : operators used to determine level of access OR scope of access to properties of class, namely
    // 1. Member_function()  2. Data_members
        public:
                   // Data_members
                    int number = 10; // initialised data variable
                    constexpr const static auto  s = "total_numbers_in_words";  // since initialised data variable ; compiler can auto deduce data type of it
                    string str = "total_numbers_in_word";
                    char ch = 'z';
                    float fl = 2.0;
                    // Member functions
                    string func(string str){
                        cout<<" string is "<<str<<"\n";
                        return str;
                    }

        private:
                    // Data_members
                    int num2 = 10;
                    constexpr const static auto str2 = "total_numbers_in_words_version_two";
                    char ch2 = 'y';
                    float fl2 = 4.0;
                   // Member functions
                   void func2(string str2){

                   }
         // define getter and setter member functions to access  properties of private access modifier
         // out of scope of class in which it is defined.

        public:
                     float getFloatNums() const{
                               return fl2;
                     }

                    float setFloatNums(float f){
                               fl2 = f;
                    }
};

int main(){
    // create object
    IntroductionTo_oops   object;
    object.setFloatNums(9.0);
    cout<<object.getFloatNums()<<"\n";
}
