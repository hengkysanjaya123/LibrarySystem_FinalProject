#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book
{
	public:
		Book();
		Book(string name, string author, int stock);
		
		void setName(string name);
		string getName();
		
		void setAuthor(string author);
		string getAuthor();
		
		void setStock(int stock);
		int getStock();
		
		void setRating(float rating);
		float getRating();

        int getId();

	private:
        int id;
		string name;
		string author;
		int stock;
		float rating;
		static int counter = 0;
};

#endif
