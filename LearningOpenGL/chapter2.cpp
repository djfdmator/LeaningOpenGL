#include"glut.h"

#define drawOneLine(x1, y1, x2, y2) glBegin(GL_LINES); glVertex2f((x1), (y1)); glVertex2f((x2), (y2)); glEnd();
#define drawOnePolygon(x1, y1, x2, y2) glBegin(GL_POLYGON); glVertex2f((x1), (y1)); glVertex2f((x1), (y2)); glVertex2f((x2), (y2)); glVertex2f((x2), (y1)); glEnd();

void init(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glShadeModel(GL_FLAT);
}

void display(void)
{
	//int i;
	//glClear(GL_COLOR_BUFFER_BIT);
	//glColor3f(1.0f, 1.0f, 1.0f);

	////Line
	//glEnable(GL_LINE_STIPPLE);

	//glLineStipple(1, 0x0101);
	//drawOneLine(50.0, 125.0, 150.0, 125.0);
	//glLineStipple(1, 0x00FF);
	//drawOneLine(150.0, 125.0, 250.0, 125.0);
	//glLineStipple(1, 0x1C47);
	//drawOneLine(250.0, 125.0, 350.0, 125.0);

	//glLineWidth(5.0);
	//glLineStipple(1, 0x0101);
	//drawOneLine(50.0, 100.0, 150.0, 100.0);
	//glLineStipple(1, 0x00FF);
	//drawOneLine(150.0, 100.0, 250.0, 100.0);
	//glLineStipple(1, 0x1C47);
	//drawOneLine(250.0, 100.0, 350.0, 100.0);
	//glLineWidth(1.0);

	//glLineStipple(1, 0x1C47);
	//glBegin(GL_LINE_STRIP);
	//for (i = 0; i < 7; i++)
	//{
	//	glVertex2f(50.0 + ((GLfloat)i * 50.0), 75.0);
	//}
	//glEnd();

	//for (i = 0; i < 6; i++)
	//{
	//	drawOneLine(50.0 + ((GLfloat)i * 50.0), 50, 0, 50.0 + ((GLfloat)(i + 1) * 50.0), 50.0);
	//}

	//glLineStipple(5, 0x1C47);
	//drawOneLine(50.0, 25.0, 350.0, 25.0);
	//glDisable(GL_LINE_STIPPLE);

	//Polygon
	glFrontFace(GL_CW);
	//glEnable(GL_CULL_FACE);

	//glCullFace(GL_FRONT_AND_BACK);
	//default
	glColor3f(0.0f, 1.0f, 1.0f);
	drawOnePolygon(500.0, 250.0, 550.0, 300.0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
	glColor3f(1.0f, 0.0f, 1.0f);
	drawOnePolygon(600.0, 250.0, 650.0, 300.0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glColor3f(1.0f, 1.0f, 0.0f);
	drawOnePolygon(700.0, 250.0, 750.0, 300.0);

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	//glCullFace(GL_BACK);
	glPolygonMode(GL_BACK, GL_FILL);
	glColor3f(1.0f, 0.0f, 0.0f);
	drawOnePolygon(500.0, 150.0, 550.0, 200.0);
	glPolygonMode(GL_BACK, GL_POINT);
	glColor3f(0.0f, 1.0f, 0.0f);
	drawOnePolygon(600.0, 150.0, 650.0, 200.0);
	glPolygonMode(GL_BACK, GL_LINE);
	glColor3f(0.0f, 0.0f, 1.0f);
	drawOnePolygon(700.0, 150.0, 750.0, 200.0);

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	//glCullFace(GL_FRONT);
	glPolygonMode(GL_FRONT, GL_FILL);
	glColor3f(0.0f, 1.0f, 1.0f);
	drawOnePolygon(500.0, 50.0, 550.0, 100.0);
	glPolygonMode(GL_FRONT, GL_POINT);
	glColor3f(1.0f, 0.0f, 1.0f);
	drawOnePolygon(600.0, 50.0, 650.0, 100.0);
	glPolygonMode(GL_FRONT, GL_LINE);
	glColor3f(1.0f, 1.0f, 0.0f);
	drawOnePolygon(700.0, 50.0, 750.0, 100.0);
	
	//glDisable(GL_CULL_FACE);

	glFrontFace(GL_CCW);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glEdgeFlag(GL_TRUE);
	glVertex2f(350.0, 100.0);
	glEdgeFlag(GL_TRUE);
	glVertex2f(400.0, 100.0);
	glEdgeFlag(GL_FALSE);
	glVertex2f(375.0, 150.0);
	glEnd();

	GLubyte fly[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x03, 0x80, 0x01, 0xC0, 0x06, 0xC0, 0x03, 0x60,
   0x04, 0x60, 0x06, 0x20, 0x04, 0x30, 0x0C, 0x20,
   0x04, 0x18, 0x18, 0x20, 0x04, 0x0C, 0x30, 0x20,
   0x04, 0x06, 0x60, 0x20, 0x44, 0x03, 0xC0, 0x22,
   0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
   0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
   0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
   0x66, 0x01, 0x80, 0x66, 0x33, 0x01, 0x80, 0xCC,
   0x19, 0x81, 0x81, 0x98, 0x0C, 0xC1, 0x83, 0x30,
   0x07, 0xe1, 0x87, 0xe0, 0x03, 0x3f, 0xfc, 0xc0,
   0x03, 0x31, 0x8c, 0xc0, 0x03, 0x33, 0xcc, 0xc0,
   0x06, 0x64, 0x26, 0x60, 0x0c, 0xcc, 0x33, 0x30,
   0x18, 0xcc, 0x33, 0x18, 0x10, 0xc4, 0x23, 0x08,
   0x10, 0x63, 0xC6, 0x08, 0x10, 0x30, 0x0c, 0x08,
0x10, 0x18, 0x18, 0x08, 0x10, 0x00, 0x00, 0x08 };

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(fly);
	glRectf(225.0, 25.0, 325.0, 125.0);
	glDisable(GL_POLYGON_STIPPLE);

	glFlush();
}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 350);
	glutInitWindowPosition(200, 200);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}