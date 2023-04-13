// import library windows.h, glut.h, dan freeglut.h
// untuk membuat program OpenGL GUI di Windows
#include <windows.h>
#include <GL/freeglut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

// fungsi reshape() untuk mengatur properti viewport dan proyeksi pada layar ke center
void reshape(int w, int h)
{
    glViewport(50, 125, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 750, 0, 750);
}

// aktivasi anti-aliasing
void init() {
	glEnable(GL_LINE_SMOOTH);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glHint(GL_LINE_SMOOTH_HINT | GL_POLYGON_SMOOTH_HINT, GL_DONT_CARE);
	glClearColor (1.0,0.0,0.0,1.0);
	glLineWidth (3);
}

// mendefinisikan fungsi display() yang akan menampilkan obyek-obyek pada layar
void display()
{
	// mengatur warna background layar menjadi putih
    glClearColor(1,1,1,1); 
    
    // membersihkan buffer layar
    glClear(GL_COLOR_BUFFER_BIT);

    // maple leaf
    // memulai menggambar objek berupa polygon
    glBegin(GL_POLYGON);

	// mengatur warna objek yang akan digambar menjadi hex #d40404 red
	glColor3f(0.831, 0.016, 0.016);

	// menentukan vertex 1-5 objek
    glVertex2f(349, 132);
    glVertex2f(431, 151);
    glVertex2f(399, 191);
    glVertex2f(449, 299);
    glVertex2f(420, 295);
    
    // menentukan vertex 6-10 objek
    glVertex2f(409, 349);
    glVertex2f(382, 316);
    glVertex2f(362, 333);
    glVertex2f(346, 275);
    glVertex2f(315, 358);
    
    // menentukan vertex 11-15 objek
    glVertex2f(298, 339);
    glVertex2f(250, 388);
    glVertex2f(248, 322);
    glVertex2f(218, 322);
    glVertex2f(255, 260);
    
    // menentukan vertex 16-20 objek
    glVertex2f(200, 275);
    glVertex2f(255, 255);
    glVertex2f(150, 245);
    glVertex2f(200, 205);
    glVertex2f(170, 195);
    
    // menentukan vertex 21-26 objek 
    glVertex2f(288, 160);
    glVertex2f(261, 93);
    glVertex2f(333, 173);
    glVertex2f(352, 82);
    glVertex2f(362, 83);
    glVertex2f(344, 120);
    
    // akhir program vertex polygon
    glEnd();
    
    // membuat tulisan Hilmi Afifi Al-Atsari
    glPushMatrix();
    glColor3f(0, 0, 0);
    glRasterPos2f(220, 425);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)"HILMI AFIFI AL-ATSARI");
    glPopMatrix();
    glFlush();
}

// script untuk membuat window aplikasi, memanggil fungsi, dan add text
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(750, 750);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Red Maple Leaf - Canadian Flag");
	init();
	glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();

	// mengakhiri program
    return 0;
}
