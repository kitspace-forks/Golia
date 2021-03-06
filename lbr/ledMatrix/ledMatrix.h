/***************************************************************************//**
 * @file   ledMatrix.h
 * @author Rhys Thomas
 * @date   2017-03-14
 * @brief
 ******************************************************************************/

#ifndef _LEDMATRIX_H_
#define _LEDMATRIX_H_

// includes
#include <avr/io.h>

/**
 * @class Matrix
 * @brief 
 */
class Matrix
{
public: // methods
    Matrix();
    ~Matrix();
    begin();
    set();
    clear();
    send();
public: // members
private: // methods
private: // members
};

#endif // _LEDMATRIX_H_
