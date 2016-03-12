/*
  AppFooter - the bottom of the screen
*/

#ifndef __JUCE_HEADER_D54565BFA56CF5B0__
#define __JUCE_HEADER_D54565BFA56CF5B0__

#include "JuceHeader.h"
/**
*/
class AppFooter  : public Component
{
public:
    AppFooter ();
    ~AppFooter();

	enum ColourIds {
		FooterBackgroundColourId = 0x2000011,
		FooterVersionColourId = 0x2000010,
	};

    void paint (Graphics& g);
    void resized();

private:

	ScopedPointer<Label> appVerision;
	
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AppFooter)
};
#endif   // __JUCE_HEADER_D54565BFA56CF5B0__
