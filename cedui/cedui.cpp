// cedui.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include "cedui.h"
#include <windows.h>
#include <commctrl.h>

int APIENTRY WinMainT(HINSTANCE hInstance, HINSTANCE /*hPrevInstance*/, LPTSTR /*lpCmdLine*/, int nCmdShow);



int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPTSTR    lpCmdLine,
                   int       nCmdShow)
{


    return WinMainT(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}

