#include <GLES2/gl2.h>
#include <iostream>
#include <string>

using namespace std;

void probeGLESVersion(string indent) {
        const GLubyte *ver = glGetString(GL_VERSION);
	if (ver) {
		cout << indent << "OpenGL ES version: " << ver << endl;
	} else {
		cout << indent << "OpenGL ES version: unknown" << endl;
	}
}