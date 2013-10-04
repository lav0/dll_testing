// DllTest.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#define DllExport __declspec(dllexport)

extern "C" __declspec(dllexport) int get_five()
{
  return 5;
}

extern "C" void __declspec(dllexport) funci()
{

}

extern "C" double __declspec(dllexport) get_square(double a_d)
{
  return a_d * a_d;
}

extern "C" HRESULT __declspec(dllexport) DllRegisterServer()
{
  HKEY hKey;
  LPCTSTR   szPath = LPCTSTR ("D:\projects_collateral\\projects\\testings\\DllTest\\Release");
  RegCreateKeyEx(HKEY_CURRENT_USER, szPath, 0, NULL, REG_OPTION_VOLATILE, KEY_WRITE, NULL, &hKey, NULL);
  return S_OK;
}

extern "C" HRESULT __declspec(dllexport) DllUnregisterServer()
{

  return S_OK;
}