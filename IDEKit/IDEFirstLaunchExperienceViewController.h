/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

@class DVTObservingToken, IDELicenseAgreementViewController, IDEPackageInstallerViewController, IDEWelcomeWindowTransitionHelper, NSImageView, NSView;

@interface IDEFirstLaunchExperienceViewController : NSViewController
{
    IDELicenseAgreementViewController *_licenseViewController;
    IDEPackageInstallerViewController *_packageInstallerViewController;
    IDEWelcomeWindowTransitionHelper *_transitionHelper;
    NSImageView *_appImageView;
    NSView *_currentView;
    DVTObservingToken *_agreementStatusObserver;
    BOOL _needToInstallPackages;
    BOOL _didShowLicense;
}

+ (void)setTitle:(id)arg1 forRightAnchoredButton:(id)arg2;
+ (id)sharedFirstLaunchExperienceViewController;
+ (BOOL)needToQuitAfterFLE;
- (void).cxx_destruct;
- (void)_restartXcode;
- (BOOL)_needToRestartXcode;
- (void)_replaceView:(id)arg1 withView:(id)arg2;
- (void)_doneWithFirstLaunchExperience;
- (void)_setCurrentView:(id)arg1;
- (void)_handlePackageInstallationComplete;
- (void)_showPackagesToInstallIfNecessary;
- (void)_showLicenseIfNecessary;
- (BOOL)_firstLaunchExperienceNeeded;
- (BOOL)showFirstLaunchExperienceModallyIfNecessary;
- (id)initWithDefaultNib;

@end

