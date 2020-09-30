/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

/** \file
 * \ingroup freestyle
 */

#pragma once

extern "C" {
#include <Python.h>
}

#include "../scene_graph/FrsMaterial.h"

using namespace Freestyle;

#ifdef __cplusplus
extern "C" {
#endif

///////////////////////////////////////////////////////////////////////////////////////////

extern PyTypeObject FrsMaterial_Type;

#define BPy_FrsMaterial_Check(v) \
  (PyObject_IsInstance((PyObject *)v, (PyObject *)&FrsMaterial_Type))

/*---------------------------Python BPy_FrsMaterial structure definition----------*/
typedef struct {
  PyObject_HEAD FrsMaterial *m;
} BPy_FrsMaterial;

/*---------------------------Python BPy_FrsMaterial visible prototypes-----------*/

int FrsMaterial_Init(PyObject *module);
void FrsMaterial_mathutils_register_callback();

///////////////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif
