/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>
#import <Preferences/PSBaseView.h>

@class PSRootController, NSString, UIView, PSSpecifier;

@interface PSViewController : NSObject <PSBaseView>
{
    id <PSBaseView> _parentController;	// 4 = 0x4
    PSRootController *_rootController;	// 8 = 0x8
}

+ (BOOL)isOverlay;	// IMP=0x31765e6c
- (id)initForContentSize:(CGSize)fp8;	// IMP=0x31765ba8
@property(readonly) NSString* navigationTitle;
@property(readonly) id navigationItem;
- (void)pushNavigationItemWithTitle:(NSString*)fp8;	// IMP=0x31765c5c
- (void)insertNavigationItem:(id)fp8 atIndex:(int)fp12;	// IMP=0x31765c88
- (void)insertNavigationItem:(id)fp8 atIndexFromEnd:(int)fp12;	// IMP=0x31765cb4
- (void)pushNavigationItem:(id)fp8;	// IMP=0x31765ce0
- (void)popNavigationItem;	// IMP=0x31765d0c
- (void)popNavigationItemWithAnimation:(BOOL)fp8;	// IMP=0x31765d38
- (void)hideNavigationBarButtons;	// IMP=0x31765d68
- (void)showNavigationBarButtons:(id)fp8:(id)fp12;	// IMP=0x31765d94
- (void)showLeftButton:(id)fp8 withStyle:(int)fp12 rightButton:(id)fp16 withStyle:(int)fp20;	// IMP=0x31765dc0
- (void)setNavigationBarEnabled:(BOOL)fp8;	// IMP=0x31765e04
- (void)setPrompt:(NSString*)fp8;	// IMP=0x31765e34
- (void)navigationBarButtonClicked:(int)fp8;	// IMP=0x31765e60
@property(readonly) UIView* view;
@property(assign) PSRootController* parentController;
@property(assign) id<PSBaseView> rootController;
- (void)setPreferenceValue:(id)fp8 specifier:(PSSpecifier*)fp12;	// IMP=0x31765ec4
- (id)readPreferenceValue:(id)fp8;	// IMP=0x31765ef0
- (void)viewDidBecomeVisible;	// IMP=0x31765f1c
- (void)viewWillBecomeVisible:(void *)fp8;	// IMP=0x31765f20
- (void)viewWillRedisplay;	// IMP=0x31765f24
- (void)viewTransitionCompleted;	// IMP=0x31765f28
- (void)suspend;	// IMP=0x31765f2c
- (void)didLock;	// IMP=0x31765f30
- (void)willUnlock;	// IMP=0x31765f34
- (void)didUnlock;	// IMP=0x31765f38
- (void)didWake;	// IMP=0x31765f3c
- (void)pushController:(id)fp8;	// IMP=0x31765f40
- (void)handleURL:(id)fp8;	// IMP=0x31765f6c
- (BOOL)popController;	// IMP=0x31765f98
- (BOOL)popControllerWithAnimation:(BOOL)fp8;	// IMP=0x31765fa0
- (id)methodSignatureForSelector:(SEL)fp8;	// IMP=0x31765fa8
- (void)forwardInvocation:(id)fp8;	// IMP=0x31766038

@end

