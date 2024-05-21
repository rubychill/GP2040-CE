#ifndef _GPSPRITEBUTTON_H_
#define _GPSPRITEBUTTON_H_

#include "GPWidget.h"
#include "enums.pb.h"

class GPSpriteButton : public GPWidget {
    public:
        GPSpriteButton(const unsigned char* releasedSpriteData, const unsigned char* pressedSpriteData) { this->_releasedSpriteData = releasedSpriteData; this->_pressedSpriteData = pressedSpriteData; }
        void draw();
        GPSpriteButton* setSize(uint16_t sizeX, uint16_t sizeY) { this->_sizeX = sizeX; this->_sizeY = sizeY; return this; }
        GPSpriteButton* setInputMask(int16_t inputMask) { this->_inputMask = inputMask; return this; }
        void setDirInput(bool dirInput) { this->_dirInput = dirInput; }
    private:
        uint16_t _sizeX = 0;
        uint16_t _sizeY = 0;
        int16_t _inputMask = -1;
        bool _dirInput = false;

        const unsigned char *_releasedSpriteData;
        const unsigned char *_pressedSpriteData;
};

#endif