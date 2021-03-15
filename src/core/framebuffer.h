/*
dream Renderer
author: forDream
*/
#pragma once

class FrameBuffer
{
public:
	FrameBuffer();
	char* GetFrameBuffer();
	void SetFrameBuffer(char* buffer);
private:
	char* buffer;
	int width;
	int height;
};
