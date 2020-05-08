#include "Movie.h"

Movie::Movie(string title, string genre, int year, int likes, string trailer)
{
	this->title = title;
	this->genre = genre;
	this->year = year;
	this->likes = likes;
	this->trailer = trailer;
}

string Movie::getTitle()
{
	return title;
}

void Movie::setTitle(string title)
{
	this->title = title;
}


string Movie::getGenre()
{
	return genre;
}

void Movie::setGenre(string genre)
{
	this->genre = genre;
}

int Movie::getYear()
{
	return year;
}

void Movie::setYear(int year)
{
	this->year = year;
}

int Movie::getLikes()
{
	return likes;
}

void Movie::setLikes(int likes)
{
	this->likes = likes;
}

string Movie::getTrailer()
{
	return trailer;
}

void Movie::setTrailer(string trailer)
{
	this->trailer = trailer;
}