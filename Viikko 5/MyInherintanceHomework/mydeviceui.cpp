#include "mydeviceui.h"
#include "iostream"

using namespace std;

MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse;
    objectDeviceTouchPad = new DeviceTouchPad;
    objectDeviceDisplay = new DeviceDisplay;
    ShowMenu();

}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    objectDeviceMouse = nullptr;
    cout << "Device mouse information deleted" << endl;
    delete objectDeviceTouchPad;
    objectDeviceTouchPad = nullptr;
    cout << "Device touchpad information deleted" << endl;
    delete objectDeviceDisplay;
    objectDeviceDisplay = nullptr;
    cout << "Device display information deleted" << endl;
    cout << "Program closed" << endl;
}

void MyDeviceUI::ShowMenu()
{
    while(true){
    int valinta;
    cout << "DEVICE MENU" << endl;
    cout << "===========" << endl;
    cout << "1: Set Mouse Information" << endl;
    cout << "2: Set Touch Pad Information" << endl;
    cout << "3: Set Display Information" << endl;
    cout << "4: Show Devices Information" << endl;
    cout << "5: Finish" << endl;
    cout <<  "" << endl;
    cout << "Choose: " ;
    cin >> valinta;
    cout  << ""<< endl;



    if(valinta == 1){
        uiSetMouseInformation();
    }else if (valinta == 2){
        uiSetTouchPadInformation();
    }else if (valinta== 3){
        uiSetDisplayInformation();
    }else if (valinta == 4){
        uiShowDeviceInformation();
    }else if (valinta == 5){
        break;
    }}

}

void MyDeviceUI::uiSetMouseInformation()
{

    cout << "SET MOUSE INFORMATION" << endl;
    cout << "======================" << endl;
    cout << "Set Mouse Device ID: ";
    objectDeviceMouse->setDeviceID();
    cout << "Set Mouse Primary Button: ";
    objectDeviceMouse->setPrimaryButton();
    cout << endl;

}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout << "SET TOUCHPAD INFORMATION" << endl;
    cout << "======================" << endl;
    cout << "Set Touchpad Device ID: ";
    objectDeviceTouchPad->setDeviceID();
    cout << "Set Touchpad Sensitivity: ";
    objectDeviceTouchPad->setTouchPadSensitivity();
    cout << endl;
}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout << "SET DISPLAY INFORMATION" << endl;
    cout << "======================" << endl;
    cout << "Set Display Device ID: ";
    objectDeviceDisplay->setDeviceID();
    cout << "Set Display Resolution: ";
    objectDeviceDisplay->setDisplayResolution();
    cout << endl;
}


void MyDeviceUI::uiShowDeviceInformation()
{

    cout << "Device Information: " << endl;
    cout << "====================" <<endl;
    cout << "Mouse Device ID: ";
    cout << objectDeviceMouse->getDeviceID() << endl;;
    cout << "Mouse Primary Button: ";
    cout << objectDeviceMouse->getPrimaryButton() << endl;
    cout <<"=========================================" << endl;
    cout << "Touchpad Device ID: ";
    cout << objectDeviceTouchPad->getDeviceID() << endl;
    cout << "Touchpad Sensitivity";
    cout << objectDeviceTouchPad->getTouchPadSensitivity() << endl;
    cout <<"=========================================" << endl;
    cout << "Display Device ID: ";
    cout << objectDeviceDisplay->getDeviceID() << endl;
    cout << "Display resolution: ";
    cout << objectDeviceDisplay->getDisplayResolution() << endl;
    cout << endl;



}


