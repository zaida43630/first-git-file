#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

int h;
class account
{
    string name;
    double balance;
    int account_no;

public:
    void set_name_balance(string str, double sbalance, int saccount_no)
    {
        name = str;
        account_no = saccount_no;
        balance = sbalance;
    }
    void draw_money(int dmoney)
    {
        if (dmoney > balance)
        {
            h = 1;
        }
        else
        {
            balance -= dmoney;
        }
    }
    void credit_money(int cmoney)
    {
        balance += cmoney;
    }
    void display()
    {
        cout << endl
             << "Welcome! this is your account___ " << endl
             << endl;
        cout << "Account no  :  " << account_no << endl
             << endl;
        cout << "Name  :  " << name << endl
             << endl;
        cout << "Your account balance  :  " << balance << endl
             << endl;
    }
    void ac_operation()
    {
        string wrc;
        int money;
    label1:
        cout << "What do you want deposit(d) or with draw(w) : _";
        cin >> wrc;
        if (wrc != "deposit" && wrc != "d" && wrc != "credit" && wrc != "draw" && wrc != "w" && wrc != "width draw" && wrc != "cash")
        {
            cout << endl
                 << "There is not '" << wrc << "' in options" << endl
                 << endl;
            cout << "Please enter again." << endl
                 << endl;
            goto label1;
        }
        cout << endl

             << "Enter amount in rupees  _";
        cin >> money;
        cout << endl
             << "Processing...................." << endl;
        Sleep(5 * 1000);
        if (wrc == "deposit" || wrc == "d" || wrc == "credit")
        {
            credit_money(money);
        }
        else
        {
            draw_money(money);
        }
        if (h == 1)
        {
            cout << endl
                 << "Your account balance is lower than transaction money" << endl
                 << endl
                 << "Please! Enter money under balance"
                 << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "Your transaction has been succeed......." << endl;
            cout << endl
                 << "Now your balance is  _" << balance << endl
                 << endl;
        }
    }
};
int main()
{
    int accountno;
    account ayan, zaid, mohd, zaid_ansari, ahtesham, sharukh_khan, altaf_saifi, mohd_alam, haseen_malik, abdul_basit, abdul_zain, samar, samar_ansari;

    ayan.set_name_balance("Ayan Ansari", 34000, 1000);
    zaid.set_name_balance("Zaid", 20000, 1001);
    mohd.set_name_balance("Mohd", 30000, 1002);
    zaid_ansari.set_name_balance("Zaid Ansari", 15000, 1003);
    ahtesham.set_name_balance("Ahtesham", 70000, 1004);
    sharukh_khan.set_name_balance("Sharukh khan", 25000, 1005);
    altaf_saifi.set_name_balance("Altaf Saifi", 35000, 1006);
    mohd_alam.set_name_balance("Mohd Alam", 50000, 1007);
    haseen_malik.set_name_balance("Haseen Malik", 15000, 1008);
    abdul_basit.set_name_balance("Abdul Basit", 40000, 1009);
    abdul_zain.set_name_balance("Abdul Zain", 5000, 1010);
    samar.set_name_balance("Samar", 62000, 1011);
    samar_ansari.set_name_balance("Samar Ansari", 15000, 1012);

label:
    h == 0;
    cout << endl
         << "Enter account number : _";
    cin >> accountno;

    switch (accountno)
    {
    case 1000:
        ayan.display();
        ayan.ac_operation();
        break;
    case 1001:
        zaid.display();
        zaid.ac_operation();
        break;
    case 1002:
        mohd.display();
        mohd.ac_operation();
        break;
    case 1003:
        zaid_ansari.display();
        zaid_ansari.ac_operation();
        break;
    case 1004:
        ahtesham.display();
        ahtesham.ac_operation();
        break;
    case 1005:
        sharukh_khan.display();
        sharukh_khan.ac_operation();
        break;
    case 1006:
        altaf_saifi.display();
        altaf_saifi.ac_operation();
        break;
    case 1007:
        mohd_alam.display();
        mohd_alam.ac_operation();
        break;
    case 1008:
        haseen_malik.display();
        haseen_malik.ac_operation();
        break;
    case 1009:
        abdul_basit.display();
        abdul_basit.ac_operation();
        break;
    case 1010:
        abdul_zain.display();
        abdul_zain.ac_operation();
        break;
    case 1011:
        samar.display();
        samar.ac_operation();
        break;
    case 1012:
        samar_ansari.display();
        samar_ansari.ac_operation();
        break;
    }
    string more_t;
    cout << "Enter 'more' for more transection : ";
    cin >> more_t;
    if (more_t == "more" || more_t == "m")
    {
        system("cls");
        goto label;
    }
    
    return 0;
}