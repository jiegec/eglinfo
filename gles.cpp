#include <GLES/gl.h>
#include <iostream>
#include <string>

using namespace std;

void printGLESString(string indent, GLenum e, const char *name) {
        const GLubyte *s = glGetString(e);
        if (s) {
                cout << indent << "OpenGL ES " << name << ": " << s << endl;
	} else {
		cout << indent << "OpenGL ES " << name << ": unknown" << endl;
	}
}

void probeGLESVersion(string indent) {
        printGLESString(indent, GL_VERSION, "version");
        printGLESString(indent, GL_RENDERER, "renderer");
        printGLESString(indent, GL_VENDOR, "vendor");
        printGLESString(indent, GL_EXTENSIONS, "extension");
}