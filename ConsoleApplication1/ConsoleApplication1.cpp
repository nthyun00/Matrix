// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Matrix.h"


int main()
{
	try
	{

		return 0;
	}
	catch (Matrix::ErrorType e)
	{
		if (e == Matrix::sizeError)
			std::cout << "Size Error!" << std::endl;
		else if (e == Matrix::nullptrException)
			std::cout << "Null Pointer Execption!" << std::endl;
		else if (e == Matrix::wrongIndex)
			std::cout << "wrong Index Reference!" << std::endl;
	}
}

