/**
 * \file fileCapture.cpp
 * \brief Add Comment Here
 *
 * \date Apr 9, 2010
 * \author alexander
 */
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <QtCore/QDebug>
#include <QtCore/QRegExp>
#include <QtCore/QtCore>

#include "global.h"

#include "fileCapture.h"
#include "bufferFactory.h"

/* File capture interface */
FileCaptureInterface::FileCaptureInterface(string pathFmt, bool isVerbose)
    : ImageFileCaptureInterface(&pathFmt, isVerbose)
{
    cout << "Starting capture form file with pattern:" << mPathFmt << "\n";
}

FileCaptureInterface::FramePair FileCaptureInterface::getFrame()
{
    FramePair result;

    string name0 = getImageFileName(mCount, 0);
    string name1 = getImageFileName(mCount, 1);

    mVerbose = true;
    if (mVerbose) {
        printf("Grabbing frame from file: %s (%s)\n"
               , name0.c_str()
               , mIsRgb ? "rgb" : "gray");
    }

    if (mIsRgb) {
        result.rgbBufferLeft = BufferFactory::getInstance()->loadRGB24Bitmap(name0);
        result.bufferLeft    = result.rgbBufferLeft->toG12Buffer();

        result.rgbBufferRight = BufferFactory::getInstance()->loadRGB24Bitmap(name1);
        result.bufferRight    = result.rgbBufferRight->toG12Buffer();

    } else {
        result.bufferLeft = BufferFactory::getInstance()->loadG12Bitmap(name0);
        result.bufferRight = BufferFactory::getInstance()->loadG12Bitmap(name1);
    }


  /*  if (result.bufferLeft)
    {
        if (mVerbose) {
            printf("Grabbing frame from file: %s\n", name1.c_str());
        }

        result.bufferRight = BufferFactory::getInstance()->loadG12Bitmap(name1);
    }*/

    if (result.bufferLeft == NULL && result.bufferRight == NULL)
    {
        result.freeBuffers();
        if (mVerbose) {
            printf("Files not found, resetting to first image in the sequence.\n");
        }
        resetImageFileCounter();
        return getFrame();
    }

    increaseImageFileCounter();
    return result;
}

ImageCaptureInterface::CapErrorCode FileCaptureInterface::initCapture()
{
    return ImageCaptureInterface::SUCCESS;
}

ImageCaptureInterface::CapErrorCode FileCaptureInterface::startCapture()
{
    return ImageCaptureInterface::SUCCESS;
}

FileCaptureInterface::~FileCaptureInterface()
{}
