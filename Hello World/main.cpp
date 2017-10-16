//
//  main.cpp
//  Hello World
//
//  Created by Gaurav Sharma on 15/10/17.
//  Copyright © 2017 Gaurav Sharma. All rights reserved.
//

#include <iostream>
#include "add.cpp"

//int main(int argc, const char * argv[]) {
//    int x= 10;
//    // << can be used multiple times in order to add multiple inputs to cout function
//    // To move to new line we can use '\n' or std::endl
//    std::cout << "I scored 83% in class " << x << std::endl;
//    return 0;
//}

//int main(){
//    std::cout << "Enter your age ? " << std::endl;
//    int age = 0 ;
//    std::cin >> age;
//    std::cout << "Your age is : " << age << std::endl;
//    return 0;
//}


//void doNothing () {
//    std::cout << "This function does nothing but shit" << std::endl;
//}

//int main() {
//    doNothing();
//    //std::cout << doNothing();
//    return 0;
//}

// This function has two integer parameters, one named x, and one named y
// The values of x and y are passed in by the caller
//void printValues(int x, int y)
//{
//    std::cout << x << std::endl;
//    std::cout << y << std::endl;
//}

//int main()
//{
//    printValues(6, 7); // This function call has two arguments, 6 and 7 -- to be noted the values being passed is called arguments and the function will receive these arguments as parameters.
//
//    return 0;
//}

// Program to return double of a number entered as input by user
//
//int doubleNumber(int num) {
//    return num * 2;
//}
//
//int main() {
//    int num;
//    std::cout << "Enter the number to be doubled" << std::endl;
//    std::cin >> num;
//    std::cout << "Double of "<< num << " is " << doubleNumber(num) << std::endl;
//    return 0;
//}

//int add(int int);

int main() {
    std::cout << "3 + 4 = " << add(3, 4) << std::endl;
    return 0;
}


