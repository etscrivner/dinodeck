#if ANDROID

#include <GLES/gl.h>
#include <GLES/glext.h>

#elif __APPLE__

#include <OpenGL/gl.h>
#define glOrthof glOrtho

#elif __linux__

#include "GLee.h"
#include <GL/gl.h>

#define glOrthof glOrtho
#else

#include "GLee.h"
#include <gl/gl.h>

#define glOrthof glOrtho
#define GL_CLAMP_TO_EDGE 0x812F
#endif
