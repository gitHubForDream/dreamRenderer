/*
dream Renderer
author: forDream
*/

#pragma once
#include"geometry.h"

class CCamera
{
public:
	CCamera() {}
private:
	vec3f up;						// ������Ϸ���
	vec3f front;                    // ���������
	vec3f pos;                      // �����λ��
};
