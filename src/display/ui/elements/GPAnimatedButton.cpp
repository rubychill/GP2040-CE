#include "GPAnimatedButton.h"

void GPAnimatedButton::draw() {
    bool buttonState = this->_dirInput ? getProcessedGamepad()->state.dpad & this->_inputMask != 0 : getProcessedGamepad()->state.buttons & this->_inputMask != 0;
    const unsigned char *frame;

    if (buttonState) {
        if (_prevButtonState == false) {
            this->_frameStartTime = getMillis();
        }
        
        if (getMillis() - this->_frameStartTime > 1000 / this->_framerate) {
            this->_currentFrame++;
            if (this->_currentFrame >= this->_numFrames) {
                this->_currentFrame = 0;
            }
        }
        getRenderer()->drawSprite((uint8_t*)this->_frameData[this->_currentFrame], this->_sizeX, this->_sizeY, 0, this->x, this->y, 1);
    } else {
        this->_currentFrame = 0;
        getRenderer()->drawSprite((uint8_t*)this->_idleFrameData, this->_sizeX, this->_sizeY, 0, this->x, this->y, 1);
    }
    
    this->_prevButtonState = buttonState;
}