#pragma once

struct ComplexNum;

void SetNums(ComplexNum& complexnum);

ComplexNum Sum(ComplexNum complexnum1, ComplexNum complexnum2);
ComplexNum Subtraction(ComplexNum complexnum1, ComplexNum complexnum2);
ComplexNum Multiply(ComplexNum complexnum1, ComplexNum complexnum2);
ComplexNum Divid(ComplexNum complexnum1, ComplexNum complexnum2);

void PrintComplexNum(ComplexNum ResultComplexNum);
