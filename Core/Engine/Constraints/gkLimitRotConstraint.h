/*
-------------------------------------------------------------------------------
	This file is part of the Ogre GameKit port.
	http://gamekit.googlecode.com/

	Copyright (c) 2009 Charlie C.
-------------------------------------------------------------------------------
 This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
	 claim that you wrote the original software. If you use this software
	 in a product, an acknowledgment in the product documentation would be
	 appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
	 misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
-------------------------------------------------------------------------------
*/
#ifndef _gkLimitRotConstraint_h_
#define _gkLimitRotConstraint_h_

#include "gkConstraint.h"




// ----------------------------- Limit Rotation ------------------------------
class gkLimitRotConstraint : public gkConstraint
{
public:

	gkLimitRotConstraint();
	virtual ~gkLimitRotConstraint() {}

	bool update(gkGameObject *ob);


	void setLimitX(const Ogre::Vector2& v);
	void setLimitY(const Ogre::Vector2& v);
	void setLimitZ(const Ogre::Vector2& v);

private:

	short mFlag;

	Ogre::Vector2 mXBounds;
	Ogre::Vector2 mYBounds;
	Ogre::Vector2 mZBounds;
};

// ---------------------------------------------------------------------------
GK_INLINE void gkLimitRotConstraint::setLimitX(const Ogre::Vector2& v)
{
	mFlag |= 1;
	mXBounds= v;
}

// ---------------------------------------------------------------------------
GK_INLINE void gkLimitRotConstraint::setLimitY(const Ogre::Vector2& v)
{
	mFlag |= 2;
	mYBounds= v;
}

// ---------------------------------------------------------------------------
GK_INLINE void gkLimitRotConstraint::setLimitZ(const Ogre::Vector2& v)
{
	mFlag |= 4;
	mZBounds= v;
}






#endif//_gkLimitRotConstraint_h_