#include "BarCodeScanner.h"

BarCodeScanner::BarCodeScanner()
{
	isOperational = true;
}

bool BarCodeScanner::unableToFindItem()
{
	return false;
}

void BarCodeScanner::setIsOperational(bool isOperational)
{
	this->isOperational = isOperational;
}

bool BarCodeScanner::getIsOperational() const
{
	return isOperational;
}