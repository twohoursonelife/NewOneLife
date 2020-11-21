#include "GamePage.h"

#include "TextButton.h"
#include "CheckboxButton.h"
#include "RadioButtonSet.h"
#include "ValueSlider.h"
#include "SoundUsage.h"


#include "minorGems/ui/event/ActionListener.h"




class SettingsPage : public GamePage, public ActionListener {
        
    public:
        
        SettingsPage();
        ~SettingsPage();
        

        virtual void draw( doublePair inViewCenter, 
                           double inViewSize );

        virtual void step();

        virtual void actionPerformed( GUIComponent *inTarget );

        
        virtual void makeActive( char inFresh );
        virtual void makeNotActive();

    protected:
        
        int mOldFullscreenSetting;
        int mOldBorderlessSetting;
        int mEnableNudeSetting;
		int mDisableNightSetting;
        
        SoundUsage mTestSound;

        double mMusicStartTime;


        TextButton mBackButton;
        TextButton mEditAccountButton;
        TextButton mRestartButton;
        TextButton mRedetectButton;

        CheckboxButton mFullscreenBox;
        CheckboxButton mBorderlessBox;
        
		CheckboxButton mEnableNudeBox;
		CheckboxButton mDisableNightBox;

        ValueSlider mMusicLoudnessSlider;
        ValueSlider mSoundEffectsLoudnessSlider;


        TextField mSpawnSeed;

        RadioButtonSet *mCursorModeSet;
        
        ValueSlider mCursorScaleSlider;

    };
