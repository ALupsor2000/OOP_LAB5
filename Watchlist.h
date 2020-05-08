#pragma once

#include "Movie.h"


class Watchlist
{

private:

	vector<Movie> watchlist;

public:

	//Constructor lista filme utilizator;
	Watchlist();

	void store(string title, string genre, int year, int rating, string trailer);

	void remove(string title);

	void getList();
};