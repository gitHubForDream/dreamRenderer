/*
dream Renderer
author: forDream
*/

#pragma once
#include"core\framebuffer.h"
#include<Windows.h>

class Win32
{
public:
	Win32();
	void InitWindow();
	void Draw(){}
private:
	void RegisterWindow();
	bool InitInstance();
	void InitGraph();
	void MessageLoop();
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	const wchar_t* class_name = L"dream Renderer";
	const wchar_t* title_name = L"dream Renderer";
	FrameBuffer frame_buffer;
	HWND hWnd;
};