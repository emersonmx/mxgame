/*
  Copyright (C) 2013 Emerson Max de Medeiros Silva

  This file is part of mxgame.

  mxgame is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  mxgame is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with mxgame.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MXGAME_UTIL_OGRE_BULLET_UTIL_HPP_
#define MXGAME_UTIL_OGRE_BULLET_UTIL_HPP_

#include <LinearMath/btQuaternion.h>
#include <LinearMath/btVector3.h>

#include <OgreQuaternion.h>
#include <OgreVector3.h>

namespace mxgame {
namespace vector {

inline Ogre::Vector3 Convert(const btVector3& vector) {
    return Ogre::Vector3(vector.x(), vector.y(), vector.z());
}

inline btVector3 Convert(const Ogre::Vector3& vector) {
    return btVector3(vector.x, vector.y, vector.z);
}

} /* namespace vector */

namespace quaternion {

inline Ogre::Quaternion Convert(const btQuaternion& quaternion) {
    return Ogre::Quaternion(quaternion.w(), quaternion.x(), quaternion.y(),
                            quaternion.z());
}

inline btQuaternion Convert(const Ogre::Quaternion& quaternion) {
    return btQuaternion(quaternion.x, quaternion.y, quaternion.z, quaternion.w);
}

} /* namespace quaternion */

namespace color {

inline Ogre::ColourValue Convert(const btVector3& color) {
    return Ogre::ColourValue(color.x(), color.y(), color.z());
}

inline btVector3 Convert(const Ogre::ColourValue& color) {
    return btVector3(color.r, color.g, color.b);
}

} /* namespace color */
} /* namespace mxgame */
#endif /* MXGAME_UTIL_OGRE_BULLET_UTIL_HPP_ */

