#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
#import <Cordova/CDVPlugin.h>
#import "ReaderViewController.h"
#import <UIKit/UIKit.h>

@interface PDFReader : CDVPlugin <ReaderViewControllerDelegate>
{
    ReaderViewController* readerViewController;
    NSString* callbackId;
}

@property (nonatomic, retain) ReaderViewController *readerViewController;
@property (strong) NSString* callbackId;
@property (nonatomic, retain) UIButton *buttonOK;
@property (nonatomic, retain) UIButton *buttonCancel;

- (void)open: (CDVInvokedUrlCommand*)command;
- (void)start: (CDVInvokedUrlCommand*)command;
- (void)closePDFReader;
@end
