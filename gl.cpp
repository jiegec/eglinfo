#include <GL/gl.h>
#include <iostream>
#include <string>

using namespace std;

void probeGLVersion(string indent) {
        GLint major = 0, minor = 0;
        glGetIntegerv(GL_MAJOR_VERSION, &major);
        glGetIntegerv(GL_MINOR_VERSION, &minor);
        const GLubyte *version = glGetString(GL_VERSION);
        if (version) {
                cout << indent << "OpenGL version: " << version << "(" << major << "." << minor << ")" << endl;
        } else {
                cout << indent << "OpenGL version: " << major << "." << minor << endl;
        }
        const GLubyte *renderer = glGetString(GL_RENDERER);
        if (renderer) {
                cout << indent << "OpenGL renderer: " << renderer << endl;
        }
}