/*
 * MouseFigure.h
 *
 *  Created on: Sep 6, 2013
 *      Author: Alles Rebel
 */

#ifndef MOUSEFIGURE_H_
#define MOUSEFIGURE_H_

#include "Figure.h"

class MouseFigure: public Figure {
public:
	MouseFigure(int x, int y, Surface& image, SDL_Surface* screen,
	         Gravity gravityEnabled, bool leader = false, double speed = 5,
	         double gravity = 1, double jumpStrength = 1, int numClips = 1,
	         int levelWidth = -1, int levelHeight = -1, Resolves resolve = BOUNDARY,
	         Surface* p1 = NULL, Surface* p2 = NULL, Surface* p3 =
	         NULL, Surface* p4 = NULL);
	~MouseFigure();

	void handleInput(SDL_Event&);

	virtual bool checkCollision(CircFigure* other);
	virtual bool checkCollision(RectFigure* other);

	//Level Container - all objects in the level are stored here
	void setContainer(vector<Figure*>* src);

	vector<Figure*>* container;

};

#endif /* MOUSEFIGURE_H_ */