#include <iostream>
#include <string>

using namespace std;

class Publication{
    protected:
        string title;
        string author;
        int year;
    public:
    Publication(string title, string author, int year):
    title(title), author(author), year(year){ }
    Publication(): Publication("No title", "No Author", 0){}

    void print(){
        cout << "Title : " << this->title << endl;
        cout << "Author : " << this->author << endl;
        cout << "Year : " << this->year << endl;
    }
};

class Book: public Publication{
    private:
        string publisher;
        int num_pages;
        int ISBN;
    public:
    Book(string title, string author, int year, string publisher, int num_pages, int ISBN): 
    Publication(title, author, year),num_pages(num_pages), ISBN(ISBN),publisher(publisher){}
    Book(): Book("No title", "No Author", 0, "", 0, 0){}

    void print(bool short_print){
        if(short_print){
          Publication::print();   
        }
        else{
        Publication::print();   
        cout << "Pages : " << this->num_pages << endl;
        cout << "ISBN : " << this->ISBN << endl;
        cout << "Publisher : " << this->publisher<< endl;   
        }
    }

};


int main(){

    Book b("OOP","Feras", 2022, "The Uni of Adelaide", 500, 12465);
    b.print(false);

    return 0;
}