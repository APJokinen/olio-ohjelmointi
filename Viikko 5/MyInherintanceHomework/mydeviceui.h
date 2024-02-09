#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicemouse.h"
#include "devicetouchpad.h"
#include "devicedisplay.h"

class MyDeviceUI
{
private:
    DeviceMouse * objectDeviceMouse;
    DeviceTouchPad * objectDeviceTouchPad;
    DeviceDisplay * objectDeviceDisplay;

public:
    MyDeviceUI();
    ~MyDeviceUI();
    void ShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();
};

#endif // MYDEVICEUI_H
