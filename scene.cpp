#include "scene.h"

Scene::Scene(QObject *parent) : QGraphicsScene(parent)
{

}

void Scene::createEnv()
{
    for (int ii = 0;ii <= 8 ;ii++ ) {
        for (int jj = 0;jj <= 8 ;jj++ ) {
            addEllipse(jj * 96, ii * 96, 96, 96);
        }
    }

}

Scene::~Scene()
{

}
