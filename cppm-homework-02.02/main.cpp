//
//  main.cpp
//  cppm-homework-02.02
//
//  Created by a1ex on 6/17/23.
//

#include <iostream>
#include <string>

struct BankAccount
{
    int accountNumber;
    std::string name;
    int balance;
};

void NewBalance (struct BankAccount& Person)
{
    int newBalance = 0;
    std::cout << "Please enter your new balance: ";
    std::cin >> newBalance;
    std::cout << '\n';
    Person.balance = newBalance;
}



int main(int argc, const char * argv[])
{
  

        BankAccount Person;
        
        std::cout << "Please enter your account number: ";
        std::cin >> Person.accountNumber;
        std::cout << '\n';
        std::cout << "Please the owner's name: ";
        std::cin >> Person.name;
        std::cout << '\n';
        std::cout << "Please enter your current balance: ";
        std::cin >> Person.balance;
        std::cout << '\n';
        
    NewBalance(Person);
    
    std::cout << "Your account is: " << Person.accountNumber  << ", " << Person.name << ", " << Person.balance << std::endl;

        
        
    return 0;
}
