/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 7.0.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include <JuceHeader.h>
#include "RNBO.h"
#include "RNBO_JuceAudioProcessor.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class RootComponent  : public juce::Component,
                       public juce::Slider::Listener,
                       public juce::ComboBox::Listener,
                       public juce::Button::Listener
{
public:
    //==============================================================================
    RootComponent ();
    ~RootComponent() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void setAudioProcessor(RNBO::JuceAudioProcessor *p);
    void updateSliderForParam(unsigned long index, double value);
    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void sliderValueChanged (juce::Slider* sliderThatWasMoved) override;
    void comboBoxChanged (juce::ComboBox* comboBoxThatHasChanged) override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    RNBO::JuceAudioProcessor *processor = nullptr;
    HashMap<int, Slider *> slidersByParameterIndex;
    HashMap<int, ComboBox *> boxesByParameterIndex;
    HashMap<int, ToggleButton *> switchesByParameterIndex;
    int sendSettingsInt = 0;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::Label> juce__label;
    std::unique_ptr<juce::Label> juce__label2;
    std::unique_ptr<juce::Slider> waveAll_slider;
    std::unique_ptr<juce::Label> wave1_label;
    std::unique_ptr<juce::Slider> wave2_slider;
    std::unique_ptr<juce::Label> wave2_label;
    std::unique_ptr<juce::Slider> wave3_slider;
    std::unique_ptr<juce::Label> wave3_label;
    std::unique_ptr<juce::Slider> tremDepth_slider;
    std::unique_ptr<juce::Slider> tremSpeed_slider;
    std::unique_ptr<juce::Label> juce__label6;
    std::unique_ptr<juce::Label> juce__label7;
    std::unique_ptr<juce::Label> juce__label8;
    std::unique_ptr<juce::Slider> resonance_slider;
    std::unique_ptr<juce::Label> juce__label9;
    std::unique_ptr<juce::Label> juce__label10;
    std::unique_ptr<juce::Slider> pulseWidth_slider;
    std::unique_ptr<juce::Label> juce__label11;
    std::unique_ptr<juce::Slider> volume_slider;
    std::unique_ptr<juce::Label> juce__label13;
    std::unique_ptr<juce::ComboBox> voice_picker;
    std::unique_ptr<juce::ComboBox> modulation_picker;
    std::unique_ptr<juce::ComboBox> patch_picker;
    std::unique_ptr<juce::Label> juce__label14;
    std::unique_ptr<juce::Label> juce__label15;
    std::unique_ptr<juce::TextButton> sendSettingsButton;
    std::unique_ptr<juce::Slider> release_slider;
    std::unique_ptr<juce::Slider> attack_slider;
    std::unique_ptr<juce::ToggleButton> linkWavesSwitch;
    std::unique_ptr<juce::ToggleButton> customWaves_switch;
    std::unique_ptr<juce::Label> juce__label3;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RootComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

