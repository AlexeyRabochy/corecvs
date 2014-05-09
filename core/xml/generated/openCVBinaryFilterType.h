#ifndef OPENCV_BINARY_FILTER_TYPE_H_
#define OPENCV_BINARY_FILTER_TYPE_H_
/**
 * \file openCVBinaryFilterType.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

/**
 * Helper namespace to hide OpenCVBinaryFilterType enum from global context.
 */

namespace OpenCVBinaryFilterType {

/** 
 * \brief OpenCV Binary Filter Type 
 * OpenCV Binary Filter Type 
 */
enum OpenCVBinaryFilterType {
    /** 
     * \brief Canny 
     * Canny 
     */
    CANNY = 0,
    /** 
     * \brief Last virtual option to run cycles to
     */
    OPENCV_BINARY_FILTER_TYPE_LAST
};


static inline const char *getName(const OpenCVBinaryFilterType &value)
{
    switch (value) 
    {
     case CANNY : return "CANNY"; break ;
     default : return "Not in range"; break ;
     
    }
    return "Not in range";
}

} //namespace OpenCVBinaryFilterType

#endif  //OPENCV_BINARY_FILTER_TYPE_H_
