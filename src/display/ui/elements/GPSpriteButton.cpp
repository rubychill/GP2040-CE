#include "GPSpriteButton.h"

void GPSpriteButton::draw() {
    bool buttonState = false;
    if (this->_dirInput) {
        buttonState = (getProcessedGamepad()->state.dpad & this->_inputMask) != 0;
    } else {
        buttonState = (getProcessedGamepad()->state.buttons & this->_inputMask) != 0;
    }

    if (buttonState) {
        getRenderer()->drawSprite((uint8_t*)this->_pressedSpriteData, this->_sizeX, this->_sizeY, 0, this->x, this->y, 1);
    } else {
        getRenderer()->drawSprite((uint8_t*)this->_releasedSpriteData, this->_sizeX, this->_sizeY, 0, this->x, this->y, 1);
    }
}