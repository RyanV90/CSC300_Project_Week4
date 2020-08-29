#ifndef BARCODESCANNER_H
#define BARCODESCANNER_H

class BarCodeScanner {

public:
	BarCodeScanner();
	bool unableToFindItem();
	void setIsOperational(bool);
	bool getIsOperational() const;

private:
	bool isOperational;
};

#endif // !BARCODESCANNER_H