/*
dream Renderer
author: forDream
*/

#include"framebuffer.h"

FrameBuffer::FrameBuffer(){}

char* FrameBuffer::GetFrameBuffer()
{
	return this->buffer;
}

void FrameBuffer::SetFrameBuffer(char* buffer)
{
	this->buffer = buffer;
}