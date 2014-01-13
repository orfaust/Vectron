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

#ifndef AAMAP_H
#define AAMAP_H

#include "stdafx.h"

#include "Input.h"
#include "Shader.h"
#include "Wall.h"
#include "Zone.h"

class Aamap {

public:
    forward_list<AamapObject*> objects;
	static bool toolActive;
    Aamap();
    void render();
    void update();

    void resize(double factor);

    //This is true when a tool is in use

private:
    //Made static so that my function pointers will work
    //The alternative was a static function and this being static
    //I took the path of least static
    static AamapObject *curObj;
    static double sizeFactor;

    glm::mat4 VP;
    Shader *zoneShader;
};

#endif