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
	vec3f up;						// 摄像机上方向
	vec3f front;                    // 摄像机朝向
	vec3f pos;                      // 摄像机位置
};
