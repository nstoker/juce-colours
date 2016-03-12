/*
  ==============================================================================
  JUCEColours Application Header File
  ==============================================================================
*/

#include "AppHeader.h"

AppHeader::AppHeader ()
{
    addAndMakeVisible (titleLabel = new Label ("title",
                                               translate("JUCE Colours")));
    titleLabel->setFont (Font (40.00f, Font::plain));
    titleLabel->setJustificationType (Justification::centredLeft);
    titleLabel->setEditable (false, false, false);
    titleLabel->setColour (TextEditor::textColourId, Colours::black);
    titleLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (subTitleLabel = new Label ("new label",
                                                  translate("Choosing a colour scheme")));
    subTitleLabel->setFont (Font (15.00f, Font::plain));
    subTitleLabel->setJustificationType (Justification::centredLeft);
    subTitleLabel->setEditable (false, false, false);
    subTitleLabel->setColour (TextEditor::textColourId, Colours::black);
    subTitleLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    setSize (600, 65);
}

AppHeader::~AppHeader()
{
    titleLabel = nullptr;
    subTitleLabel = nullptr;
}

void AppHeader::paint (Graphics& g)
{
    g.fillAll (Colours::white);
}

void AppHeader::resized()
{
	Rectangle<int> area = getLocalBounds();
    titleLabel->setBounds (area.removeFromTop(40));
    subTitleLabel->setBounds (area.removeFromTop(20));
}
