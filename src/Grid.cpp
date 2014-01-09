/*
********************************************************************************
Vectron - map editor for Armagetron Advanced.
Copyright (C) 2014 	Tristan Whitcher 	(tristan.whitcher@gmail.com)
				   	David Dubois 		(ddubois@jotunstudios.com)
********************************************************************************

This file is part of Vectron.

Vectron is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Vectron is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Vectron.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "Grid.h"

const float DEG2RAD = 3.14159/180;

int Grid::spacing = 10;

void Grid::draw(int width, int height) {

	glColor3f(0.84f, 0.84f, 0.92f);
    glBegin(GL_LINES);

    for(int i=0; i < width; i+= Grid::spacing) {
    	glVertex2f(i, 0);
    	glVertex2f(i, height);
    }

    for(int j=0; j < height; j+= Grid::spacing) {
    	glVertex2f(0, j);
    	glVertex2f(width, j);
    }

    glEnd();
    
}
