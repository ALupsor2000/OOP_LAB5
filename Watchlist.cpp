#include "Watchlist.h"

Watchlist::Watchlist()
{
	this->watchlist = {};
}

void Watchlist::store(string title, string genre, int year, int rating, string trailer)
{
	watchlist.push_back(Movie(title, genre, year, rating, trailer));
}

void Watchlist::remove(string title)
{
	bool found = false;
	int size_t = watchlist.size();
	int p = 0;
	for (int i = 0; i < size_t; i++)
	{
		if (watchlist[i].getTitle() == title)
		{
			p = i;
		}
	}
	if (found)
	{
		watchlist.erase(watchlist.begin() + p);
	}
}

void Watchlist::getList()
{
	int size = watchlist.size();
	for (int i = 0; i < size; i++)
	{
		cout << watchlist[i].getTitle() << " " << watchlist[i].getGenre() << " " << watchlist[i].getYear() << " " << watchlist[i].getLikes() << endl;
	}
}

