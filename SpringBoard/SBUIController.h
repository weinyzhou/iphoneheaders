/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>

@class UIView, SBZoomView, UIWindow;

@interface SBUIController : NSObject {
	UIWindow* _window;
	UIView* _iconsView;
	UIView* _buttonBarContainerView;
	UIView* _contentView;
	SBZoomView* _zoomLayer;
	id _volumeHandler;
	BOOL _restoringIconList;
	BOOL _lastVolumeDownToControl;
	BOOL _shouldAutoLock;
	float _batteryCapacity;
	float _curvedBatteryCapacity;
	BOOL _isBatteryCharging;
	BOOL _isOnAC;
	BOOL _connectedToUnusableFirewire;
	int _batteryLoggingStartCapacity;
	unsigned char _headsetBatteryCapacity;
	BOOL _isHeadsetCharging;
	BOOL _isHeadsetDocked;
	BOOL _ignoreHeadsetEvents;
}
+(int)displayedLevelForLockScreenBatteryLevel:(int)lockScreenBatteryLevel;
+(id)sharedInstance;
-(void)_indicateConnectedToPower;
-(void)animateAppleDown:(BOOL)down;
-(BOOL)launchedAfterLanguageRestart;
-(void)clearLaunchedAfterLanguageRestart;
-(void)localeChanged;
-(void)languageChanged;
-(void)finishLaunching;
-(void)systemControllerRouteChanged:(id)changed;
-(void)lock:(BOOL)lock;
-(void)lock;
-(void)clearZoomLayer;
-(id)contentView;
-(id)window;
-(void)launchIcon:(id)icon;
-(void)activateApplicationAnimated:(id)animated;
-(void)showZoomLayerWithDefaultImageOfApp:(id)app;
-(void)showZoomLayerWithIOSurfaceSnapshotOfApp:(id)app includeStatusWindow:(id)window;
-(void)scatterIconListAndBar:(BOOL)bar;
-(void)insertAndOrderIconListsForReordering:(BOOL)reordering;
-(void)restoreIconList:(BOOL)list;
-(void)animateApplicationActivation:(id)activation animateDefaultImage:(BOOL)image scatterIcons:(BOOL)icons;
-(void)animateApplicationActivationDidStop:(id)animateApplicationActivation finished:(id)finished context:(void*)context;
-(void)tearDownIconListAndBar;
-(void)animateApplicationSuspend:(id)suspend;
-(void)applicationSuspendAnimationDidStop:(id)applicationSuspendAnimation finished:(id)finished context:(void*)context;
-(void)animateApplicationSuspendFlip:(id)flip;
-(void)applicationSuspendFlipDidStop:(id)applicationSuspendFlip;
-(void)stopRestoringIconList;
-(void)showButtonBar:(BOOL)bar animate:(BOOL)animate action:(SEL)action delegate:(id)delegate;
-(void)finishedFadingInButtonBar;
-(BOOL)clickedMenuButton;
-(void)wakeUp:(id)up;
-(void)handleVolumeEvent:(GSEventRef)event;
-(void)updateBatteryState:(id)state;
-(float)batteryCapacity;
-(int)batteryCapacityAsPercentage;
-(float)curvedBatteryCapacity;
-(int)curvedBatteryCapacityAsPercentage;
-(BOOL)isBatteryCharging;
-(BOOL)isOnAC;
-(void)ACPowerChanged;
-(void)setIsConnectedToUnusableFirewireCharger:(BOOL)unusableFirewireCharger;
-(BOOL)isConnectedToUnusableFirewireCharger;
-(void)noteStatusBarHeightChanged:(float)changed duration:(double)duration;
-(BOOL)isHeadsetDocked;
-(BOOL)isHeadsetBatteryCharging;
-(unsigned char)headsetBatteryCapacity;
-(void)handleAccessoryAvailabilityChange:(GSEventRef)change removal:(BOOL)removal;
-(void)handleAccessoryEvent:(GSEventRef)event;
@end
