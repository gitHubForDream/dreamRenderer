/*
dream Renderer
author: forDream
*/

#include"win32.h"
#include<iostream>

Win32::Win32()
{
}

void Win32::InitWindow()
{
	this->RegisterWindow();

	bool is_inited;
	is_inited = this->InitInstance();
	if (!is_inited)
	{
		return;
	}

	this->InitGraph();
	this->MessageLoop();
}

void Win32::RegisterWindow()
{
	WNDCLASS wcex;

	wcex.style = CS_BYTEALIGNCLIENT;
	wcex.lpfnWndProc = (WNDPROC)(WndProc);
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = GetModuleHandle(NULL);
	wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = this->class_name;

	ATOM atom = RegisterClass(&wcex);
}

bool Win32::InitInstance()
{
	HWND hWnd = CreateWindow(this->class_name, this->title_name, WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, GetModuleHandle(NULL), NULL);

	if (!hWnd)
	{
		return false;
	}

	this->hWnd = hWnd;
	ShowWindow(hWnd, SW_SHOWNORMAL);
	return true;
}

LRESULT CALLBACK Win32::WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_COMMAND:
		break;
	case WM_PAINT:
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}

	return 0;
}

void Win32::MessageLoop()
{
	MSG msg;
	
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}

void Win32::InitGraph()
{
	HDC hdc = GetDC(this->hWnd);
	HDC compatible_hdc = CreateCompatibleDC(hdc);
	ReleaseDC(this->hWnd, hdc);

	BITMAPINFO bitmap_info;
	LPVOID void_ptr;
	HBITMAP hbitmap = CreateDIBSection(compatible_hdc, &bitmap_info, DIB_RGB_COLORS, &void_ptr, 0, 0);

	SelectObject(compatible_hdc, hbitmap);
	this->frame_buffer.SetFrameBuffer((char*)void_ptr);
}
