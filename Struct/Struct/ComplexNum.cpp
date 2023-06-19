#include <iostream>
#include <math.h>

using namespace std;

struct ComplexNum {
	double re;
	double im;
};

void SetNums(ComplexNum& complexnum) {
	cout << "Enter real num: ";
	cin >> complexnum.re;

	cout << "Enter real imaginary num: ";
	cin >> complexnum.im;
}

ComplexNum Sum(ComplexNum complexnum1, ComplexNum complexnum2) {
	ComplexNum ResultComplexNum;
	ResultComplexNum = { complexnum1.re + complexnum2.re, complexnum1.im + complexnum2.im };
	return ResultComplexNum;
}

ComplexNum Subtraction(ComplexNum complexnum1, ComplexNum complexnum2) {
	ComplexNum ResultComplexNum;
	ResultComplexNum = { complexnum1.re - complexnum2.re, complexnum1.im - complexnum2.im };
	return ResultComplexNum;
}

ComplexNum Multiply(ComplexNum complexnum1, ComplexNum complexnum2) {
	ComplexNum ResultComplexNum;
	ResultComplexNum = { complexnum1.re * complexnum2.re - complexnum1.im * complexnum2.im,
						 complexnum1.re * complexnum2.im + complexnum1.im * complexnum2.re };
	return ResultComplexNum;
}

ComplexNum Divid(ComplexNum complexnum1, ComplexNum complexnum2) {
	ComplexNum ResultComplexNum;
	ResultComplexNum = { (complexnum1.re * complexnum2.re + complexnum1.im * complexnum2.im) / (pow(complexnum2.re, 2) + pow(complexnum2.im, 2)),
						 (complexnum1.im * complexnum2.re - complexnum1.re * complexnum2.im) / (pow(complexnum2.re, 2) + pow(complexnum2.im, 2)) };
	return ResultComplexNum;
}

void PrintComplexNum(ComplexNum ResultComplexNum) {
	if (ResultComplexNum.im >= 0)
		cout << "Result = " << ResultComplexNum.re << " + " << ResultComplexNum.im << 'i' << endl;
	else
		cout << "Result = " << ResultComplexNum.re << " - " << ResultComplexNum.im * -1 << 'i' << endl;
}