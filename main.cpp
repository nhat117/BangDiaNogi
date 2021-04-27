#include <iostream>
#include <string>
#include <fstream>

using namespace std;




class customer {

};

class item {
    private:
        string id;
        string title;
        string rental_type;
        string loan_type;
        int in_stock;
        float rental_fee;
        string rental_status;
    public:
        item (string id, string title, string rental_type, string loan_type, int in_stock, float rental_fee, string rental_status) {
            this->id = id;
            this->title = title;
            this->rental_type = rental_type;
            this->loan_type = loan_type;
            this->in_stock = in_stock;
            this->rental_fee = rental_fee;
            this->rental_status = rental_status;
        }
        
};

class movie_records : item {
    
};

class dvd : item {

};

class video_games: item {

};

struct item_Node {
    item data;
    item_Node* next;
};

struct customer_Node {
    customer data;
    customer_Node* next;
};

int main() {
    // Generating head and tail for linked lists
    customer_Node* head_cus = nullptr;
    customer_Node* tail_cus = nullptr;
    item_Node* head_it = nullptr;
    item_Node* tail_it = nullptr;
    int cus_size = 0;
    int it_size = 0;

    ifstream inp_it("items.txt");
    ifstream inp_cus("customers.txt");
    if (!inp_it.is_open()) {
        cerr << "Database can not be opened!" << endl;
        return 1;
    }
    if (!inp_cus.is_open()) {
        cerr << "Database can not be opened!" << endl;
        return 1;
    }

    

    string inp;
    while (true) {
        cout << "Welcome to Genie's video store\n";
        cout << "Enter an option below.\n";
        cout << "1. Add a new item, update or delete an existing item\n";
        cout << "2. Add new customer or update an existing customer.\n";
        cout << "3. Promote an existing customer.\n";
        cout << "4. Rent an item\n";
        cout << "5. Return an item\n";
        cout << "6. Display all items\n";
        cout << "7. Display out-of-stock items\n";
        cout << "8. Display all customers\n";
        cout << "9. Display group of customers\n";
        cout << "10. Search items or customers\n";
        cout << "Exit.\n";
        cin >> inp;
        if (inp == "Exit") {
            cout << "Program terminated\n";
            return 0;
        }
        else if (inp == "1") {
            continue;
        }
        else if (inp == "2") {
            continue;
        }
        else if (inp == "3") {
            continue;
        }
        else if (inp == "4") {
            continue;
        }
        else if (inp == "5") {
            continue;
        }
        else if (inp == "6") {
            continue;
        }
        else if (inp == "7") {
            continue;
        }
        else if (inp == "8") {
            continue;
        }
        else if (inp == "9") {
            continue;
        }
        else if (inp == "10") {
            continue;
        }
        else {
            cout << "Invalid input!\n";
            continue;
        }
    }
}