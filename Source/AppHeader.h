/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.2.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_716564D79F80047C__
#define __JUCE_HEADER_716564D79F80047C__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]



//==============================================================================
/*
	JUCEColours Application Header
*/
class AppHeader  : public Component
{
public:
    AppHeader ();
    ~AppHeader();

    enum ColourIds {
        TitleLabelColourId        = 0x2000000, // TODO: Choose correct colour id's 
        SubtitleLabelColourId     = 0x2000001,
        HeadingBackgroundColourId = 0x2000002,
    };
    
    void paint (Graphics& g);
    void resized();

private:
    ScopedPointer<Label> titleLabel;
    ScopedPointer<Label> subTitleLabel;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AppHeader)
};

#endif   // __JUCE_HEADER_716564D79F80047C__
