#include <iostream>
#include <string>
#include <fstream>

using namespace std;

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
        item(string id, string title, string rental_type, string loan_type, int in_stock, float rental_fee) {
            setId(id);
            setTitle(title);
            setRentalType(rental_type);
            setLoanType(loan_type);
            setStock(in_stock);
            setFee(rental_fee);
            if (in_stock > 0) {
                rental_status = "Available";
            } 
            else {
                rental_status = "Borrowed";
            }
        }
        void setId(string id) {
            if (string.length() != 9) {
                cout << "Invalid ID" << endl;
                return;
            }
            char letter;
            int unique, year;
            sscanf(string.c_str(), "%c%i-%i", &letter, &unique, &year);
            if (letter != 'I') {
                cout << "Invalid ID" << endl;
                return;
            }
            else if (unique < 0 || unique > 999) {
                cout << "Invalid ID" << endl;
                return
            }
            else if (year < 0 || year > 2021) {
                cout << "Invalid ID" << endl;
                return;
            }
            else this->id = id;
        }
        void setTitle(string title) {
            this->title = title;
        }
        void setRentalType(string rental_type) {
            if (rental_type != "Record" || rental_type != "DVD" || rental_type != "Game") {
                cout << "Invalid rental type" << endl;
                return;
            }
            else this->rental_type = rental_type;
        }
        void setLoanType(string loan_type) {
            if (loan_type != "2-day" || loan_type != "1-week" ){
                cout << "Invalid loan type" << endl;
                return;
            }
            else this->loan_type = loan_type;
        }
        void setStock(int in_stock) {
            this->in_stock = in_stock;
        }
        void setFee(int rental_fee) {
            this->rental_fee = rental_fee;
        }
};

class movie_records : item {
    private:
        string genre;
    public:
        movie_records(string id, string title, string rental_type, string loan_type, int in_stock, float rental_fee, string genre) : item(id, title, rental_type, loan_type, in_stock, rental_fee) {

         }
        void setGenre(string genre) {
            if (genre != "Action" || genre != "Horror" || genre != "Drama" || genre != "Comedy") {
                cout << "Invalid genre" << endl;
                return;
            }
            else this->genre = genre;
        }
};

class dvd : movie_records {

};

class game : item {

};