// Copyright 1997-2009 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

typedef void (^NSAlertSheetCompletionHandler)(NSInteger result);
/*
@interface NSAlert (Extensions)
- (void)beginSheetModalForWindow:(NSWindow *)window completionHandler:(NSAlertSheetCompletionHandler)completionHandler;
@end
*/
// Runs an NSAlert with an optional completion block. The returnCode passed to the block is based on the NSAlertFirstButtonReturn+N convention.
extern void NSBeginAlertSheetWithBlock(NSString *title, NSString *defaultButton, NSString *alternateButton, NSString *otherButton, NSWindow *docWindow, NSAlertSheetCompletionHandler completionHandler, NSString *msgFormat, ...);
