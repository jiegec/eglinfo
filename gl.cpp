#include <GL/gl.h>
#include <iostream>
#include <string>

using namespace std;

void probeGLVersion(string indent) {
        GLint major = 0, minor = 0;
        glGetIntegerv(GL_MAJOR_VERSION, &major);
        glGetIntegerv(GL_MINOR_VERSION, &minor);
        cout << indent << "OpenGL version: " << major << "." << minor << endl;
}