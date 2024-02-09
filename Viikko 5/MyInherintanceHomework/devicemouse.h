#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H
#include "devicebaseclass.h"

class DeviceMouse:public DeviceBaseClass
{
public:
    DeviceMouse();
    short getPrimaryButton() const;
    void setPrimaryButton();

private:
    short primaryButton;
};

#endif // DEVICEMOUSE_H
