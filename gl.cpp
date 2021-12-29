#include <GL/gl.h>
#include <iostream>
#include <string>

using namespace std;

void printGLString(string indent, GLenum e, const char *name) {
        const GLubyte *s = glGetString(e);
        if (s) {
                cout << indent << "OpenGL " << name << ": " << s << endl;
	} else {
		cout << indent << "OpenGL " << name << ": unknown" << endl;
	}
}

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

        printGLString(indent, GL_RENDERER, "renderer");
        printGLString(indent, GL_VENDOR, "vendor");
        printGLString(indent, GL_SHADING_LANGUAGE_VERSION, "shading language version");
        printGLString(indent, GL_EXTENSIONS, "extension");
}