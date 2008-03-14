/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardInput.h>

#import "WebCaretChangeListenerProtocol.h"

@class NSArray, NSMutableDictionary, NSString, NSTimer, UIAutocorrectInlinePrompt, UIDelayedAction, UIKBInputManager, UIKeyboardLayout, UITextTraits;

@interface UIKeyboardImpl : UIView <WebCaretChangeListener>
{
    id <UIKeyboardInput> m_delegate;
    UITextTraits *m_defaultTextTraits;
    NSString *m_preferenceName;
    NSArray *m_suggestions;
    NSString *m_autocorrection;
    UIKBInputManager *m_inputManager;
    UIAutocorrectInlinePrompt *m_autocorrectPrompt;
    unsigned int m_markedTextLength;
    NSString *m_acceptedText;
    NSMutableDictionary *m_autocorrectionHistory;
    NSMutableDictionary *m_keyedLayouts;
    UIKeyboardLayout *m_layout;
    Class m_preferredLayoutClass;
    NSTimer *m_autoDeleteTimer;
    unsigned int m_autoDeleteCount;
    unsigned short m_autoDeleteShiftCharacter;
    UIDelayedAction *m_longPressAction;
    int m_orientation;
    UIView *m_caretView;
    NSTimer *m_caretTimer;
    struct CGPoint m_keyPoint;
    int m_changeCount;
    struct __CFRunLoopObserver *m_observer;
    struct CGColor *m_caretColor;
    struct __CFCharacterSet *m_textTrimmingSet;
    id m_editingDelegate;
    id m_textSuggestionDelegate;
    int m_autoCapsType;
    int m_autoCorrectionType;
    int m_initialSelectionBehavior;
    unsigned int m_caretWidth;
    int m_preferredKeyboardType;
    int m_returnKeyType;
    int m_textDomain;
    int m_textLoupeVisibility;
    BOOL m_autoEnablesReturnKey;
    BOOL m_secureTextEntry;
    BOOL m_singleCompletionEntry;
    BOOL m_autoCapitalizationPreference;
    BOOL m_autoCorrectionPreference;
    BOOL m_autoCorrect;
    BOOL m_autoDeleteOK;
    BOOL m_autoShifted;
    BOOL m_initializationDone;
    BOOL m_defaultsNeedSynchronization;
    BOOL m_shift;
    BOOL m_shiftLockedEnabled;
    BOOL m_shiftLocked;
    BOOL m_soundsEnabled;
    BOOL m_changed;
    BOOL m_selecting;
    BOOL m_returnKeyEnabled;
    BOOL m_caretVisible;
    BOOL m_caretBlinks;
    BOOL m_caretShowingNow;
    BOOL m_userChangedSelection;
    BOOL m_shouldChargeKeys;
    BOOL m_longPress;
}

+ (id)activeInstance;	// IMP=0x3249727c
+ (struct CGSize)defaultSize;	// IMP=0x32497320
+ (struct CGSize)defaultSizeForOrientation:(int)fp8;	// IMP=0x3249d058
+ (struct CGSize)keypadSize;	// IMP=0x3249740c
+ (struct CGSize)keypadSizeForOrientation:(int)fp8;	// IMP=0x32497448
+ (int)orientationForSize:(struct CGSize)fp8;	// IMP=0x32497dc8
+ (void)releaseSharedInstance;	// IMP=0x3249728c
+ (void)removeAllDynamicDictionaries;	// IMP=0x32497d60
+ (id)sharedInstance;	// IMP=0x3249d0c0
+ (struct CGSize)suggestionBarSize;	// IMP=0x3249735c
+ (struct CGSize)suggestionBarSizeForOrientation:(int)fp8;	// IMP=0x324973b4
- (BOOL)_shouldSuggestUserEnteredString:(id)fp8;	// IMP=0x3249b300
- (void)acceptAutocorrection;	// IMP=0x3249afd4
- (BOOL)acceptInputString:(id)fp8;	// IMP=0x32499f5c
- (void)acceptMarkedText;	// IMP=0x3249a5ec
- (void)acceptSuggestion:(id)fp8;	// IMP=0x3249ae44
- (void)acceptWord:(id)fp8 addString:(id)fp12 weight:(int)fp16;	// IMP=0x3249b0bc
- (BOOL)acceptedTextEndsWithWhitespace;	// IMP=0x3249a76c
- (void)addInputString:(id)fp8;	// IMP=0x32499f64
- (void)addInputString:(id)fp8 isMarkedText:(BOOL)fp12;	// IMP=0x32499f84
- (void)animateAutocorrection;	// IMP=0x3249bb94
- (void)applicationResumedEventsOnly:(id)fp8;	// IMP=0x32497a50
- (void)applicationSuspendedEventsOnly:(id)fp8;	// IMP=0x324979fc
- (id)arrayWithInputManagerString;	// IMP=0x3249bfe4
- (BOOL)autoCapitalizationPreference;	// IMP=0x32497bf8
- (BOOL)autoCorrectionPreference;	// IMP=0x32497c74
- (void)autoDeleteTimerFired:(id)fp8;	// IMP=0x3249c82c
- (id)autocorrectPrompt;	// IMP=0x3249b424
- (void)autocorrectionAnimationDidStop:(id)fp8 finished:(id)fp12 context:(void *)fp16;	// IMP=0x3249bf74
- (void)callChanged;	// IMP=0x32498ac8
- (void)callChangedSelection;	// IMP=0x3249893c
- (id)callInputOverlayContainer;	// IMP=0x32498990
- (int)callPositionForAutocorrection:(id)fp8;	// IMP=0x32498a28
- (BOOL)callShouldDelete;	// IMP=0x324988d8
- (BOOL)callShouldInsertText:(id)fp8 isMarkedText:(BOOL)fp12;	// IMP=0x32498850
- (void)caretBlinkTimerFired:(id)fp8;	// IMP=0x32499b80
- (BOOL)caretBlinks;	// IMP=0x32499de8
- (void)caretChanged;	// IMP=0x32499e14
- (BOOL)caretVisible;	// IMP=0x32499df0
- (void)clearAcceptedText;	// IMP=0x3249a740
- (void)clearAnimations;	// IMP=0x3249b09c
- (void)clearCaret;	// IMP=0x32499960
- (void)clearCaretBlinkTimer;	// IMP=0x32499bb4
- (void)clearChangedDelegate;	// IMP=0x32498b80
- (void)clearDynamicDictionary;	// IMP=0x32497da8
- (void)clearInput;	// IMP=0x3249b034
- (void)clearLongPressTimer;	// IMP=0x3249cbfc
- (void)clearMarkedText;	// IMP=0x3249a6a8
- (void)clearTimers;	// IMP=0x3249cc88
- (void)clearTransientState;	// IMP=0x3249b088
- (struct CGRect)convertRectToAutocorrectRect:(struct CGRect)fp8 delegateView:(id)fp24 container:(id)fp28;	// IMP=0x3249b670
- (id)currentLayout;	// IMP=0x32498dc8
- (void)dealloc;	// IMP=0x32497804
- (void)defaultsDidChange:(id)fp8;	// IMP=0x32497a8c
- (void)delayedInitialization;	// IMP=0x32497608
- (id)delegate;	// IMP=0x324980ac
- (void)delegateSuggestionsForCurrentInput;	// IMP=0x3249c238
- (void)deleteFromInput;	// IMP=0x3249ac34
- (void)drawRect:(struct CGRect)fp8;	// IMP=0x3249ce78
- (void)enable;	// IMP=0x32498830
- (void)fadeAutocorrectPrompt;	// IMP=0x3249be40
- (void)geometryChangeDone:(BOOL)fp8;	// IMP=0x32498c04
- (void)handleDeleteWithNonZeroInputCount;	// IMP=0x3249aa24
- (void)handleDeleteWithZeroInputCount;	// IMP=0x3249a844
- (void)hideCaret:(int)fp8;	// IMP=0x324999e4
- (void)hideSuggestionBar;	// IMP=0x3249b2dc
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x32497480
- (void)initializeSounds;	// IMP=0x3249cd54
- (id)inputOverlayContainer;	// IMP=0x3249b5f8
- (void)installCaret;	// IMP=0x32499850
- (BOOL)isAutoShifted;	// IMP=0x32499838
- (BOOL)isLongPress;	// IMP=0x3249cc80
- (BOOL)isShiftLocked;	// IMP=0x32499840
- (BOOL)isShifted;	// IMP=0x32499830
- (BOOL)isSuggestionBasedLayoutClass:(Class)fp8;	// IMP=0x32498dc0
- (void)keyActivated:(CDAnonymousStruct5 *)fp8;	// IMP=0x32499f48
- (void)keyDeactivated:(CDAnonymousStruct5 *)fp8;	// IMP=0x32499f4c
- (id)layoutKeyForPreferredKeyboardType;	// IMP=0x32498708
- (void)longPressAction;	// IMP=0x3249cc44
- (void)nextCharacterProbabilities:(float **)fp8;	// IMP=0x3249c6d8
- (void)notifyShiftChanged;	// IMP=0x324990b4
- (void)notifySublayoutChanged;	// IMP=0x324990b0
- (int)orientation;	// IMP=0x324990a8
- (void)playKeyboardSound:(unsigned long)fp8;	// IMP=0x3249cdec
- (id)preferenceName;	// IMP=0x32498ce4
- (int)preferredKeyboardType;	// IMP=0x324986e0
- (Class)preferredLayoutClass;	// IMP=0x32498cb0
- (void)prepareForGeometryChange;	// IMP=0x32498bb4
- (void)prepareForSelectionChange;	// IMP=0x324990b8
- (void)removeAutocorrectPrompt;	// IMP=0x3249b454
- (void)removeFromSuperview;	// IMP=0x32497994
- (BOOL)returnKeyEnabled;	// IMP=0x3249b49c
- (int)returnKeyType;	// IMP=0x3249b494
- (void)setAutocorrection:(id)fp8;	// IMP=0x3249b3b4
- (void)setCaretBlinks:(BOOL)fp8;	// IMP=0x32499d30
- (void)setCaretVisible:(BOOL)fp8;	// IMP=0x32499d8c
- (void)setChanged;	// IMP=0x32498b3c
- (void)setDefaultTextTraits:(id)fp8;	// IMP=0x32498684
- (void)setDelegate:(id)fp8;	// IMP=0x324980b4
- (void)setDelegate:(id)fp8 force:(BOOL)fp12;	// IMP=0x324980d4
- (void)setFrame:(struct CGRect)fp8;	// IMP=0x32497e54
- (void)setKeyPoint:(struct CGPoint)fp8;	// IMP=0x32499f50
- (void)setOrientationForSize:(struct CGSize)fp8;	// IMP=0x32497df0
- (void)setPreferenceName:(id)fp8;	// IMP=0x32498d6c
- (void)setPreferredKeyboardType:(int)fp8;	// IMP=0x324986e8
- (void)setReturnKeyEnabled:(BOOL)fp8;	// IMP=0x3249b4a4
- (void)setShift:(BOOL)fp8;	// IMP=0x324996e8
- (void)setShift:(BOOL)fp8 autoshift:(BOOL)fp12;	// IMP=0x3249970c
- (void)setShiftLocked;	// IMP=0x324997fc
- (void)setSoundsEnabled:(BOOL)fp8;	// IMP=0x3249ce0c
- (void)setSuggestionBarTextSize:(int)fp8;	// IMP=0x3249b2e8
- (void)setSuggestions:(id)fp8;	// IMP=0x3249c06c
- (void)setTestMode;	// IMP=0x32497d88
- (BOOL)shiftLockPreference;	// IMP=0x32497cf0
- (BOOL)shiftLockedEnabled;	// IMP=0x32499848
- (BOOL)shouldChargeKeys;	// IMP=0x3249c6d0
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned short)fp8;	// IMP=0x3249a7cc
- (void)showCaret:(int)fp8;	// IMP=0x32499ab0
- (void)showLayout:(Class)fp8;	// IMP=0x32498e14
- (void)showPreferredKeyboardType;	// IMP=0x324987f8
- (void)showPreferredLayout;	// IMP=0x32498dd0
- (void)showSuggestionBar;	// IMP=0x3249b2d8
- (void)startAutoDeleteTimer;	// IMP=0x3249ca00
- (void)stopAutoDelete;	// IMP=0x3249ca40
- (int)suggestionBarVisibility;	// IMP=0x3249b2ec
- (BOOL)suggestionBarVisible;	// IMP=0x3249b2f4
- (id)suggestions;	// IMP=0x3249c6c8
- (id)synchronizedUserDefaults;	// IMP=0x32497ba0
- (void)takeTraitsFrom:(id)fp8;	// IMP=0x32497edc
- (void)textChanged:(id)fp8;	// IMP=0x32498508
- (void)touchAutoDeleteTimerWithThreshold:(double)fp8;	// IMP=0x3249c6f8
- (void)touchCaretBlinkTimer;	// IMP=0x32499bfc
- (void)touchLongPressTimer;	// IMP=0x3249cb64
- (void)updateAutocorrectPrompt:(id)fp8;	// IMP=0x3249b7b0
- (void)updateCaretRect;	// IMP=0x32499df8
- (void)updateForChangedSelection;	// IMP=0x324991cc
- (void)updateInputManagerAutoShiftFlag;	// IMP=0x324993d8
- (void)updatePreferredLayoutClass;	// IMP=0x32498c34
- (void)updatePreferredLayoutClassFromPreferences;	// IMP=0x32498c64
- (void)updateReturnKey;	// IMP=0x3249b4c8
- (void)updateReturnKey:(BOOL)fp8;	// IMP=0x3249b4e8
- (void)updateSelectionWithPoint:(struct CGPoint)fp8;	// IMP=0x324991ac
- (void)updateShift;	// IMP=0x32499434
- (void)updateSuggestionBarVisibility:(BOOL)fp8;	// IMP=0x3249b2fc
- (void)updateSuggestionsDisplay;	// IMP=0x3249b368
- (void)updateSuggestionsForCurrentInput;	// IMP=0x3249c554
- (id)visibleSuggestions;	// IMP=0x3249b2e0

@end
