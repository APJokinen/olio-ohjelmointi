#include "devicetouchpad.h"
#include "iostream"

using namespace std;

short DeviceTouchPad::getTouchPadSensitivity() const
{
    return touchPadSensitivity;
}

void DeviceTouchPad::setTouchPadSensitivity()
{

    cin >> touchPadSensitivity;

}

DeviceTouchPad::DeviceTouchPad()
{
    deviceID=0;
    touchPadSensitivity=0;
}
