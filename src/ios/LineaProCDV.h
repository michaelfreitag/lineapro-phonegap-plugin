//
//  ZBarCDVPlugin.h
//  Planstery
//
//  Created by Timofey Tatarinov on 27.01.14.
//
//

#import <UIKit/UIKit.h>
#import <Cordova/CDVPlugin.h>

#import "DTDevices.h"

@interface LineaProCDV : CDVPlugin
{
    DTDevices *dtdev;
}

- (void)initDT:(CDVInvokedUrlCommand*)command;
- (void)getConnectionStatus:(CDVInvokedUrlCommand*)command;
- (void)startBarcode:(CDVInvokedUrlCommand*)command;
- (void)stopBarcode:(CDVInvokedUrlCommand*)command;

@end
