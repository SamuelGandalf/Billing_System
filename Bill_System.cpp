#include <iostream>
#include <fstream>

using namespace std;

class Shop {
    private:
        int Product_Code;
        float Product_Name;
        float Discount;
        float Price;
    public:
        void Main_Menu();
        void Admin();
        void ShopKeeper();
        void Customer();
        void Add();
        void List_Items();
        void Modify();
        void Delete();
        void Reciept();
};

void Shop::Main_Menu() {
    m:
    //this displays the start up menu of the application
    int Option;
    string Email;
    string Password;
    cout << "\t\t\t\t ____AMISOFT SUPERMARKET____\n";
    cout << "\t\t\t\t ########################### \n\n";
    cout << "\t\t\t\t\t\t\t __Main Menu__ \n";
    cout << "\t\t\t\t 1. Shop Admin \n";
    cout << "\t\t\t\t 2. Shopkeeper \n";
    cout << "\t\t\t\t 3. Customer \n";
    cout << "\t\t\t\t 4. Exit Apllication ";
    cout << "\t\t\t\t Please Select An Option To Continue:  \n";
    cin >> Option;

    string Default_Email = "samuel@hotmail.com";
    string Default_Password = "admin";
    switch (Option) {     
        case 1:
            cout << " \t Please Login... \n";
            cout << " \t Enter Email: \n";
            cin >> Email;
            cout << "\t Enter Password: \n";
            cin >> Password;

            if (Default_Email == Email && Default_Password == Password) {
                Admin();
            }
            else {
                cout << "Invalid Email or Password!";
            }
            break;
        case 2:
            ShopKeeper();
            break;
        case 3:
            Customer();
            break;
        case 4:
            exit(0);
        default:
            cout << "Please Select From The Options Given!";
    }
    goto m;
}

void Shop::Admin() {
    m:
    int Option;
    cout << "\t\t\t ___Shop Administrator's Menu___\n\n";
    cout << "\t\t\t What Will You Like To Do? \n";
    cout << "\t\t\t 1. Add New Products ";
    cout << "\t\t\t 2. List Existing Products ";
    cout << "\t\t\t 3. Modify or Edit Existing Products ";
    cout << "\t\t\t 4. Delete Products ";
    cout << "\t\t\t 5. Remove Shopkeeper's Privilages ";
    cout << "\t\t\t 6. Back to Main Menu \n\n";
    cout << "\t\tPlease Select an Option(Only numbers): ";
    cin >> Option;

    switch (Option) {
        case 1:
            Add();
            break;
        case 2:
            List_Items();
            break;
        case 3:
            Modify();
            break;
        case 4:
            Delete();
            break;
        case 5:
            ShopKeeper();
            break;
        case 6:
            Main_Menu();
            break;
        default:
            cout << "Please Enter a Valid Option!\n";       
    }
    goto m;
}

void Shop::ShopKeeper() {

}

void Shop::Customer() {
    m:
    int Option;
    cout << "\t\t\t\t ____CUSTOMER____\n\n";
    cout << "\t\t\t\t 1. Buying Products \n";
    cout << "\t\t\t\t 2. Back to Menu \n";
    cout << "Please Select an Option: \n";
    cin >> Option;

    switch (Option) {
        case 1:
            Reciept();
            break;
        case 2:
            Main_Menu();
            break;
        default:
            cout << "Please Enter a Valid Option!\n";
    }
    goto m;
   
}
void Shop::Add() {
    fstream Products_Data;
    int tokens = 0;
    string name;
    int code;
    float prs;
    float dis;
    


    cout << "\n\n\t\t\t ___Add The New products___ \n";
    cout << "\n\n\t\t\t Enter the Product Name: \n";
    cin >> Product_Name;
    cout << "\n\n\t\t\t Enter Product Code: \n";
    cin >> Product_Code;
    cout << "\n\n\t\t\t Enter the Price of the Product: \n";
    cin >> Price;
    cout << "\n\n\t\t\t Enter Discount Amount on product: \n";
    cin >> Discount;

    Products_Data.open("Products_db.txt", ios::in); //this will open the products database in read mode only
    if (!Products_Data) {//this checks to be sure it exists,if it doesnt exist then it will open  new one and append text to it
        Products_Data.open("Products_db.txt", ios::app | ios::out); //opens the file in write mode and append text to it
        Products_Data << " " << Product_Name << " " << Product_Code << " " << Price << "  " << Discount <<"\n";
        Products_Data.close();
    }
    else {
        Products_Data >> name >> code >> prs >> dis;
    }


}
void Shop::List_Items() {

}
void Shop::Modify() {

}
void Shop::Delete() {

}
void Shop::Reciept() {

}
int main()
{
    
}

