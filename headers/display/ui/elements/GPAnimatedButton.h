#ifndef _GPANIMATEDBUTTON_H_
#define _GPANIMATEDBUTTON_H_

#include "GPWidget.h"
#include "enums.pb.h"

class GPAnimatedButton : public GPWidget {
    public:
        GPAnimatedButton(const unsigned char* idleFrameData, const unsigned char** frameData) { this->_idleFrameData = idleFrameData; this->_frameData = frameData; }
        void draw();
        GPAnimatedButton* setSize(uint16_t sizeX, uint16_t sizeY) { this->_sizeX = sizeX; this->_sizeY = sizeY; return this; }
        GPAnimatedButton* setInputMask(int16_t inputMask) { this->_inputMask = inputMask; return this; }

        void setNumFrames(uint16_t numFrames) { this->_numFrames = numFrames; }
        void setFramerate(uint16_t framerate) { this->_framerate = framerate; }
        void setDirInput(bool dirInput) { this->_dirInput = dirInput; }
    private:
        uint16_t _sizeX = 0;
        uint16_t _sizeY = 0;
        int16_t _inputMask = -1;
        uint16_t _framerate = 0;
        uint16_t _currentFrame = 0;
        uint32_t _frameStartTime = 0;
        bool _prevButtonState = false;
        bool _dirInput = false;

        const unsigned char *_idleFrameData;
        const unsigned char **_frameData;
        uint16_t _numFrames;
};

#endif