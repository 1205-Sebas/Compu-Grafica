#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

class Triangulos
{
public:
	Triangulos();

	void dibujarTriangulos(float x, float y, float z);
};

