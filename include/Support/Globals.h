/**
 * @file Globals.h
 * @author Erik Ström
 * @brief Declaration of global variables.
 * @version 0.1
 * @date 2018-10-29
 * 
 * @todo Change global variable naming and usage of namespace std throughout 
 *  the application.
 */

#ifndef GLOBALS_H
#define GLOBALS_H

#include <string>
#include "SupportStructures.h"

using namespace std;

/**
 * @addtogroup Globals Global variables
 * @brief Global variables used in the application.
 * @{
 */

/**
 * @brief The actual width and height of the used world
 */
extern Dimensions WORLD_DIMENSIONS;

/**
 * @brief Name of file to read from when using external population seed.
 */
extern string fileName;
/** @} */

#endif