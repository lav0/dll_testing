// test_for_dll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include <conio.h>

typedef int (*function1)();
typedef void (*function2)();
typedef double (*function3)(double);

int _tmain(int argc, _TCHAR* argv[])
{
  HMODULE hGetProcIDDLL = LoadLibrary(
    "D:\\projects_collateral\\projects\\testings\\DllTest\\Release\\DllTest.dll"
  );

  if (hGetProcIDDLL == NULL) {
    std::cout << "cannot locate the .dll file" << std::endl;
    //return EXIT_FAILURE;
  } else {
    std::cout << ".dll has been called" << std::endl;
  }

  function1 five = (function1)::GetProcAddress(hGetProcIDDLL, "get_five");
  if (!five) {
    std::cout << "could not locate the function 1" << std::endl;
  } else {
    int i_number = five();
    std::cout << "unbelievable!" << " " << i_number << std::endl;
  }

  function2 funci = (function2)::GetProcAddress(hGetProcIDDLL, "funci");
  if (!funci) {
    std::cout << "could not locate the function 2" << std::endl;
  } else {
    std::cout << "unbelievable!" << std::endl;
  }

  function3 get_square = (function3)::GetProcAddress(hGetProcIDDLL, "get_square");
  if (!get_square) {
    std::cout << "could not locate the function 3" << std::endl;
  } else {
    std::cout << "unbelievable!" << " " << get_square(9.2) << std::endl;
  }

  std::cout << "end" << std::endl;
  _getche();

  FreeLibrary(hGetProcIDDLL);
	return 0;
}

