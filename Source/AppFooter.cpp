/*
  AppFooter - the bottom area of the screen
*/

#include "AppFooter.h"

AppFooter::AppFooter ()
{
    addAndMakeVisible (appVerision = new Label ("new label",
                                                TRANS("appVersion")));
    appVerision->setFont (Font (15.00f, Font::plain));
    appVerision->setJustificationType (Justification::centredRight);
    appVerision->setEditable (false, false, false);
    appVerision->setColour (TextEditor::textColourId, Colours::black);
    appVerision->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    setSize (600, 40);
}

AppFooter::~AppFooter()
{
    appVerision = nullptr;
}


void AppFooter::paint (Graphics& g)
{
    g.fillAll (Colours::white);
}

void AppFooter::resized()
{
	Rectangle<int>area(getLocalBounds());
	appVerision->setBounds (area);
}
