#include "Repo.h"

Repo::Repo()
{
	this->repo = {};
}

void Repo::store(string title, string genre, int year, int rating, string trailer)
{
	repo.push_back(Movie(title, genre, year, rating, trailer));
}

void Repo::remove(string title)
{
	bool found = false;
	int size_t = repo.size();
	int p = 0;
	for (int i = 0; i < size_t; i++)
	{
		if (repo[i].getTitle() == title)
		{
			p = i;
		}
	}
	if (found)
	{
		repo.erase(repo.begin() + p);
	}
}

void Repo::updateLikes(string title)
{
	int size_t = repo.size();
	int i = 0;
	while (i < size_t)
	{
		if (repo[i].getTitle() == title)
		{
			int like = repo[i].getLikes();
			like++;
			repo[i].setLikes(like);
		}
		i++;
	}
}

void Repo::updateGenre(string title, string genre)
{
	int size_t = repo.size();
	int i = 0;
	while (i < size_t)
	{
		if (repo[i].getTitle() == title)
		{
			repo[i].setGenre(genre);
		}
		i++;
	}
}

void Repo::updateTrailer(string title, string trailer)
{
	int size_t = repo.size();
	int i = 0;
	while (i < size_t)
	{
		if (repo[i].getTitle() == title)
		{
			repo[i].setTrailer(trailer);
		}
		i++;
	}
}

void Repo::updateYear(string title, int year)
{
	int size_t = repo.size();
	int i = 0;
	while (i < size_t)
	{
		if (repo[i].getTitle() == title)
		{
			repo[i].setYear(year);
		}
		i++;
	}
}

bool Repo::search_to_genre(string genre) 
{
	bool found = false;
	int size_t = repo.size();
	int i;
	for (i = 0; i < size_t; i++)
	{
		if (repo[i].getGenre() == genre)
		{
			found = true;		
		}
	}

	if (found)
	{
		for (i = 0; i < size_t; i++)
		{
			if (repo[i].getGenre() == genre)
			{
				cout << repo[i].getTitle() << " " << repo[i].getGenre() << " " << repo[i].getYear() << " " << repo[i].getLikes() << endl;
			}
		}
	}
	else
	{
		for (int i = 0; i < size_t; i++)
		{
			cout << repo[i].getTitle() << " " << repo[i].getGenre() << " " << repo[i].getYear() << " " << repo[i].getLikes() << endl;
		}
	}
	return found;
}

void Repo::getRepo()
{
	int size_t = repo.size();
	for (int i = 0; i < size_t; i++)
	{
		cout << repo[i].getTitle() << " " << repo[i].getGenre() << " " << repo[i].getYear() << " " << repo[i].getLikes() << endl;
	}
}

