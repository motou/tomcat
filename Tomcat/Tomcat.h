//
//  Tomcat.h
//  Tomcat
//
//  Created by Zhen Wang on 13-3-11.
//  Copyright (c) 2013年 Zhen Wang. All rights reserved.
//

#import <PreferencePanes/PreferencePanes.h>
#import <CoreFoundation/CoreFoundation.h>

@interface Tomcat : NSPreferencePane {

	IBOutlet NSButton *btnAction;
	

	IBOutlet NSTextFieldCell *statusDescription;
	IBOutlet NSTextFieldCell *status;
	IBOutlet NSButton *btnAutoStart;

	IBOutlet NSTextFieldCell *tomcatPath;
}

- (void)mainViewDidLoad;
- (IBAction)clickAction:(NSButton *)sender;

@end
