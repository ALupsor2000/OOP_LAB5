#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Movie
{
private:
	string title;
	string genre;
	int year;
	int likes;
	string trailer;

public:

	//Constructor film
	Movie(string title, string genre, int year, int likes, string trailer);

	//Functie care returneaza titlul
	string getTitle();

	//Procedura care seteaza titlul
	void setTitle(string title);

	//Functie care returneaza genul
	string getGenre();

	//Procedura care seteaza genul
	void setGenre(string genre);

	//Functie care returneaza anul filmului
	int getYear();

	//Procedura care seteaza anul
	void setYear(int year);

	//Functie care returneaza ratingul
	int getLikes();

	//Procedura care seteaza ratingul
	void setLikes(int likes);

	//Functia care returneaza linkul trailerului
	string getTrailer();
	
	//Procedura care seteaza linkul trailerul
	void setTrailer(string trailer);
};