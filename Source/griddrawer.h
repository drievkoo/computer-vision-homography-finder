#ifndef GRIDDRAWER
#define GRIDDRAWER

#include <QGLWidget>
#include <QtGui>
#include <QtOpenGL>
#include <GL/glu.h>
#include <opencv2/core/core.hpp>
#include "virtualgrid.h"

class GridDrawer : public QGLWidget
{
    Q_OBJECT

public:
    GridDrawer(QWidget *parent = 0):QGLWidget(parent){
        setFormat(QGLFormat(QGL::DoubleBuffer | QGL::DepthBuffer));
    }
    ~GridDrawer(){

    }
    cv::Mat drawGrid(cv::Mat image,VirtualGrid grid,cv::Point3d rotation,cv::Point3d translation){
        throw std::exception("Not implemented yet.");
        GLfloat rotation[3];
        GLfloat translation[3];
        QColor lineColor;
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        return cv::Mat();
    }

protected:
    void initializeGL(){
        qglClearColor(Qt::black);
        glShadeModel(GL_FLAT);
        glEnable(GL_DEPTH_TEST);
        glEnable(GL_CULL_FACE);
    }

    void resizeGL(int width, int height){
        /*glViewport(0, 0, width, height);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        GLfloat x = GLfloat(width) / height;
        glFrustum(-x, +x, -1.0, +1.0, 4.0, 15.0);
        glMatrixMode(GL_MODELVIEW);*/
    }

    void paintGL(){
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        draw();
    }

    void mousePressEvent(QMouseEvent *event){
        //lastPos = event->pos();
    }

    void mouseMoveEvent(QMouseEvent *event){
        /*GLfloat dx = GLfloat(event->x() - lastPos.x()) / width();
        GLfloat dy = GLfloat(event->y() - lastPos.y()) / height();
        if (event->buttons() & Qt::LeftButton) {
            rotationX += 180 * dy;
            rotationY += 180 * dx;
            updateGL();
        } else if (event->buttons() & Qt::RightButton) {
            rotationX += 180 * dy;
            rotationZ += 180 * dx;
            updateGL();
        }
        lastPos = event->pos();*/
    }

    void mouseDoubleClickEvent(QMouseEvent *event){
        /*int face = faceAtPosition(event->pos());
        if (face != -1) {
            QColor color = QColorDialog::getColor(faceColors[face], this);
            if (color.isValid()) {
                faceColors[face] = color;
                updateGL();
            }
        }*/
    }

private:
    void draw(){
        /*glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glTranslatef(0.0, 0.0, -10.0);
        glRotatef(rotationX, 1.0, 0.0, 0.0);
        glRotatef(rotationY, 0.0, 1.0, 0.0);
        glRotatef(rotationZ, 0.0, 0.0, 1.0);

        for (int i = 0; i < 4; ++i) {
            glLoadName(i);
            glBegin(GL_TRIANGLES);
            qglColor(lineColor);
            for (int j = 0; j < 3; ++j) {
                glVertex3f(coords[i][j][0], coords[i][j][1],
                           coords[i][j][2]);
            }
            glEnd();
        }*/
    }
};

#endif // GRIDDRAWER

