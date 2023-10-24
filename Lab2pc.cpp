#include <iostream>
#include <cstdlib> //for rand()
using namespace std;
class Account{
    long int id;
    char owner_name;
    float balance;
    int pin;
public:
    void set_owner_name(char u_owner_name);
    void set_pin(int u_pin);

    long int get_id();
    char get_owner_name();
    float get_balance();

    Account(); //IMPLICIT CONSTR
    Account(char u_owner_name, int u_pin); //const w parameters
    Account(Account &object); //copy constr

    ~Account(); //destructor

    //methods
    int reset_pin();
    void found_account(float amount);
    float withdraw_money(float amount);

private:
    bool insert_pin();

    void transfer_money(Account &account_1, Account &Account_2, float u_amount) //friend

};

void Account :: set_owner_name(char u_owner_name){
    owner_name=u_owner_name;
}
void Account :: set_pin(int u_pin){
    pin=u_pin;
}

int Account :: get_id(){
    return id;
}
char Account :: get_owner_name(){
    return owner_name;
}
float Account :: get_balance(){
    return balance;
}
//defining constructors
Account :: Account(){
    id= 7403;
    owner_name= "Maria";
    balance=25000;
    pin= 1234    ;   
    cout << "Implicit constructor was called" <<endl;
}
Account :: Account(char u_owner_name, int u_pin){
   owner_name=u_owner_name;
   pin=u_pin;
   cout << "The constructor with parameters was called"<<endl;
}
Account :: Account(Account &object){
    owner_name=object.owner_name;
   pin=object.pin;
   cout << "Copy constructor was called"<<endl;
}
//defining destructors
Account :: ~Account(){
    cout << "Destructor was called"  <<endl;
}

//aditional methods
 int Account :: reset_pin(){
     pin= rand() %10000;
     return pin;
 } –
 void Account :: found_account(float amount){
    balance = balance + amount;
 }

 bool Account :: insert_pin(){
    int x,i=1;
    while(i<=3){
        cin>>x;
        if(pin==x)
         return true;
    }
    return false;
 } –

float Account :: withdraw_money(float amount){
    if( insert_pin()==1 && amount<= balance)
       return amount;
    else 
       return 0;
}
//friend function
void transfer_money(Account &Account_1, Account &Account_2, float u_amount){
     Account_1.withdraw_money(float u_amount);
     Account_2.found_account(float u_amount);
}

int main() {
    Account A1, A2;
    A1.balance=0;
    A2.balance=10000;
    transfer_money(A2,A1,1000);
    A2.found_account(1000);
    return 0;
}   