#include "devicebaseclass.h"
#include "iostream"

using namespace std;

short DeviceBaseClass::getDeviceID() const
{
    return deviceID;
}

void DeviceBaseClass::setDeviceID()
{

    cin >> deviceID;

}

DeviceBaseClass::DeviceBaseClass()
{

}
