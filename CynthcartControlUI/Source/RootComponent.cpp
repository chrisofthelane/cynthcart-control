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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "RootComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
RootComponent::RootComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    juce__label.reset (new juce::Label ("attacklabel",
                                        TRANS("Attack")));
    addAndMakeVisible (juce__label.get());
    juce__label->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label->setJustificationType (juce::Justification::centred);
    juce__label->setEditable (false, false, false);
    juce__label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label->setBounds (32, 40, 80, 16);

    juce__label2.reset (new juce::Label ("releaselabel",
                                         TRANS("Release")));
    addAndMakeVisible (juce__label2.get());
    juce__label2->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label2->setJustificationType (juce::Justification::centred);
    juce__label2->setEditable (false, false, false);
    juce__label2->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label2->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label2->setBounds (112, 40, 80, 16);

    waveAll_slider.reset (new juce::Slider ("wave_all"));
    addAndMakeVisible (waveAll_slider.get());
    waveAll_slider->setRange (0, 127, 1);
    waveAll_slider->setSliderStyle (juce::Slider::LinearHorizontal);
    waveAll_slider->setTextBoxStyle (juce::Slider::TextBoxLeft, false, 80, 20);
    waveAll_slider->addListener (this);

    waveAll_slider->setBounds (120, 376, 368, 24);

    wave1_label.reset (new juce::Label ("waveallLabel",
                                        TRANS("Wave All")));
    addAndMakeVisible (wave1_label.get());
    wave1_label->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    wave1_label->setJustificationType (juce::Justification::centred);
    wave1_label->setEditable (false, false, false);
    wave1_label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    wave1_label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    wave1_label->setBounds (8, 376, 104, 24);

    wave2_slider.reset (new juce::Slider ("wave_voice2"));
    addAndMakeVisible (wave2_slider.get());
    wave2_slider->setRange (0, 127, 1);
    wave2_slider->setSliderStyle (juce::Slider::LinearHorizontal);
    wave2_slider->setTextBoxStyle (juce::Slider::TextBoxLeft, false, 80, 20);
    wave2_slider->addListener (this);

    wave2_slider->setBounds (120, 408, 368, 24);

    wave2_label.reset (new juce::Label ("Wave2",
                                        TRANS("Wave Osc2")));
    addAndMakeVisible (wave2_label.get());
    wave2_label->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    wave2_label->setJustificationType (juce::Justification::centred);
    wave2_label->setEditable (false, false, false);
    wave2_label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    wave2_label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    wave2_label->setBounds (8, 408, 104, 24);

    wave3_slider.reset (new juce::Slider ("wave_voice3"));
    addAndMakeVisible (wave3_slider.get());
    wave3_slider->setRange (0, 127, 1);
    wave3_slider->setSliderStyle (juce::Slider::LinearHorizontal);
    wave3_slider->setTextBoxStyle (juce::Slider::TextBoxLeft, false, 80, 20);
    wave3_slider->addListener (this);

    wave3_slider->setBounds (120, 440, 368, 24);

    wave3_label.reset (new juce::Label ("waveOsc3",
                                        TRANS("Wave Osc3")));
    addAndMakeVisible (wave3_label.get());
    wave3_label->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    wave3_label->setJustificationType (juce::Justification::centred);
    wave3_label->setEditable (false, false, false);
    wave3_label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    wave3_label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    wave3_label->setBounds (8, 440, 104, 24);

    tremDepth_slider.reset (new juce::Slider ("tremdepth"));
    addAndMakeVisible (tremDepth_slider.get());
    tremDepth_slider->setRange (0, 63, 1);
    tremDepth_slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    tremDepth_slider->setTextBoxStyle (juce::Slider::NoTextBox, true, 80, 20);
    tremDepth_slider->addListener (this);

    tremDepth_slider->setBounds (416, 56, 80, 88);

    tremSpeed_slider.reset (new juce::Slider ("tremspeed"));
    addAndMakeVisible (tremSpeed_slider.get());
    tremSpeed_slider->setRange (0, 63, 1);
    tremSpeed_slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    tremSpeed_slider->setTextBoxStyle (juce::Slider::NoTextBox, true, 80, 20);
    tremSpeed_slider->addListener (this);

    tremSpeed_slider->setBounds (504, 56, 80, 88);

    juce__label6.reset (new juce::Label ("tremDepthLabel",
                                         TRANS("Trem Depth")));
    addAndMakeVisible (juce__label6.get());
    juce__label6->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label6->setJustificationType (juce::Justification::centred);
    juce__label6->setEditable (false, false, false);
    juce__label6->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label6->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label6->setBounds (408, 40, 80, 16);

    juce__label7.reset (new juce::Label ("tremSpeedLabel",
                                         TRANS("Trem Speed")));
    addAndMakeVisible (juce__label7.get());
    juce__label7->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label7->setJustificationType (juce::Justification::centred);
    juce__label7->setEditable (false, false, false);
    juce__label7->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label7->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label7->setBounds (504, 40, 80, 16);

    juce__label8.reset (new juce::Label ("patchLabel",
                                         TRANS("Core Preset")));
    addAndMakeVisible (juce__label8.get());
    juce__label8->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label8->setJustificationType (juce::Justification::centred);
    juce__label8->setEditable (false, false, false);
    juce__label8->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label8->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label8->setBounds (120, 168, 104, 24);

    resonance_slider.reset (new juce::Slider ("resonance"));
    addAndMakeVisible (resonance_slider.get());
    resonance_slider->setRange (0, 127, 1);
    resonance_slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    resonance_slider->setTextBoxStyle (juce::Slider::NoTextBox, true, 80, 20);
    resonance_slider->addListener (this);

    resonance_slider->setBounds (272, 56, 80, 88);

    juce__label9.reset (new juce::Label ("resoLabel",
                                         TRANS("Resonance")));
    addAndMakeVisible (juce__label9.get());
    juce__label9->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label9->setJustificationType (juce::Justification::centred);
    juce__label9->setEditable (false, false, false);
    juce__label9->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label9->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label9->setBounds (272, 40, 80, 16);

    juce__label10.reset (new juce::Label ("Title",
                                          TRANS("Cynthcart Control v0.11")));
    addAndMakeVisible (juce__label10.get());
    juce__label10->setFont (juce::Font (24.10f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label10->setJustificationType (juce::Justification::centred);
    juce__label10->setEditable (false, false, false);
    juce__label10->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label10->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label10->setBounds (160, 8, 270, 24);

    pulseWidth_slider.reset (new juce::Slider ("pulsewidth"));
    addAndMakeVisible (pulseWidth_slider.get());
    pulseWidth_slider->setRange (0, 127, 1);
    pulseWidth_slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    pulseWidth_slider->setTextBoxStyle (juce::Slider::NoTextBox, true, 80, 20);
    pulseWidth_slider->addListener (this);

    pulseWidth_slider->setBounds (504, 384, 80, 88);

    juce__label11.reset (new juce::Label ("pulseLabel",
                                          TRANS("Pulse Width")));
    addAndMakeVisible (juce__label11.get());
    juce__label11->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label11->setJustificationType (juce::Justification::centred);
    juce__label11->setEditable (false, false, false);
    juce__label11->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label11->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label11->setBounds (504, 368, 80, 16);

    volume_slider.reset (new juce::Slider ("patch_volume"));
    addAndMakeVisible (volume_slider.get());
    volume_slider->setRange (0, 127, 1);
    volume_slider->setSliderStyle (juce::Slider::LinearHorizontal);
    volume_slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    volume_slider->addListener (this);

    volume_slider->setBounds (488, 8, 96, 24);

    juce__label13.reset (new juce::Label ("volumeLabel",
                                          TRANS("Volume")));
    addAndMakeVisible (juce__label13.get());
    juce__label13->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label13->setJustificationType (juce::Justification::centred);
    juce__label13->setEditable (false, false, false);
    juce__label13->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label13->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label13->setBounds (424, 8, 64, 24);

    voice_picker.reset (new juce::ComboBox ("voice_mode"));
    addAndMakeVisible (voice_picker.get());
    voice_picker->setEditableText (false);
    voice_picker->setJustificationType (juce::Justification::centredLeft);
    voice_picker->setTextWhenNothingSelected (TRANS("-Select Mode-"));
    voice_picker->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    voice_picker->addItem (TRANS("-Use Preset\'s  Setting-"), 1);
    voice_picker->addItem (TRANS("Poly"), 2);
    voice_picker->addItem (TRANS("5ths"), 3);
    voice_picker->addItem (TRANS("5Port"), 4);
    voice_picker->addItem (TRANS("Port1 - Slow"), 5);
    voice_picker->addItem (TRANS("Port2 - Med"), 6);
    voice_picker->addItem (TRANS("Port3 - Fast"), 7);
    voice_picker->addItem (TRANS("Mono1 - Octaves"), 8);
    voice_picker->addItem (TRANS("Mono2 - Unison"), 9);
    voice_picker->addItem (TRANS("MonoP1 - Octaves Port"), 10);
    voice_picker->addItem (TRANS("MonoP2 - Unison Port"), 11);
    voice_picker->addItem (TRANS("Arp1 - Up Fast"), 12);
    voice_picker->addItem (TRANS("Arp2 - Up Med"), 13);
    voice_picker->addItem (TRANS("Arp3 - Up Slow"), 14);
    voice_picker->addItem (TRANS("Arp4 - Down Med"), 15);
    voice_picker->addItem (TRANS("Arp5 - Down Fast"), 16);
    voice_picker->addItem (TRANS("6Chan (Req 2nd SID)"), 17);
    voice_picker->addListener (this);

    voice_picker->setBounds (240, 200, 208, 24);

    modulation_picker.reset (new juce::ComboBox ("modulation_mode"));
    addAndMakeVisible (modulation_picker.get());
    modulation_picker->setEditableText (false);
    modulation_picker->setJustificationType (juce::Justification::centredLeft);
    modulation_picker->setTextWhenNothingSelected (TRANS("-Select Mode-"));
    modulation_picker->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    modulation_picker->addItem (TRANS("-Use Preset\'s Setting-"), 1);
    modulation_picker->addItem (TRANS("None"), 2);
    modulation_picker->addItem (TRANS("Filt1 - Slow LFO"), 3);
    modulation_picker->addItem (TRANS("Filt2 - Slow Riser"), 4);
    modulation_picker->addItem (TRANS("Filt3 - Fast Drop"), 5);
    modulation_picker->addItem (TRANS("Filt4 - Square LFO"), 6);
    modulation_picker->addItem (TRANS("Filt5 - Fast Square LFO"), 7);
    modulation_picker->addItem (TRANS("Puls1 - Slow LFO"), 8);
    modulation_picker->addItem (TRANS("Puls2 - Rising Env"), 9);
    modulation_picker->addListener (this);

    modulation_picker->setBounds (240, 232, 208, 24);

    patch_picker.reset (new juce::ComboBox ("patch"));
    addAndMakeVisible (patch_picker.get());
    patch_picker->setEditableText (false);
    patch_picker->setJustificationType (juce::Justification::centredLeft);
    patch_picker->setTextWhenNothingSelected (TRANS("-Select Mode-"));
    patch_picker->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    patch_picker->addItem (TRANS("Sawtooth Bass"), 1);
    patch_picker->addItem (TRANS("Gritty Bass"), 2);
    patch_picker->addItem (TRANS("Portamento 5th"), 3);
    patch_picker->addItem (TRANS("Saw Portamento"), 4);
    patch_picker->addItem (TRANS("Pulse 5th"), 5);
    patch_picker->addItem (TRANS("Pulse High"), 6);
    patch_picker->addItem (TRANS("Triangle HiLo"), 7);
    patch_picker->addItem (TRANS("Triangle Drop"), 8);
    patch_picker->addItem (TRANS("SID Explosion"), 9);
    patch_picker->addItem (TRANS("MUTE"), 10);
    patch_picker->addItem (TRANS("Filter Bass"), 11);
    patch_picker->addItem (TRANS("Sweep Arp"), 12);
    patch_picker->addItem (TRANS("Pluck Arp"), 13);
    patch_picker->addItem (TRANS("Slow Arp"), 14);
    patch_picker->addItem (TRANS("Filter Stack 1"), 15);
    patch_picker->addItem (TRANS("Filter Stack 2"), 16);
    patch_picker->addItem (TRANS("Pulsar"), 17);
    patch_picker->addItem (TRANS("Vibrato Lead"), 18);
    patch_picker->addItem (TRANS("Slow Rise"), 19);
    patch_picker->addItem (TRANS("Bending Echo"), 20);
    patch_picker->addItem (TRANS("6-Voice Saw"), 21);
    patch_picker->addItem (TRANS("Arp Lead"), 22);
    patch_picker->addItem (TRANS("Laser Bass"), 23);
    patch_picker->addItem (TRANS("Trombone Blast"), 24);
    patch_picker->addItem (TRANS("Noisy Square Arp"), 25);
    patch_picker->addItem (TRANS("Triangle Sync"), 26);
    patch_picker->addItem (TRANS("Mono Sync Echo"), 27);
    patch_picker->addItem (TRANS("Clean Saw"), 28);
    patch_picker->addItem (TRANS("Clean Triangle"), 29);
    patch_picker->addItem (TRANS("Clean Square"), 30);
    patch_picker->addListener (this);

    patch_picker->setBounds (240, 168, 208, 24);

    juce__label14.reset (new juce::Label ("voiceModeLabel",
                                          TRANS("Voice Mode")));
    addAndMakeVisible (juce__label14.get());
    juce__label14->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label14->setJustificationType (juce::Justification::centred);
    juce__label14->setEditable (false, false, false);
    juce__label14->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label14->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label14->setBounds (120, 200, 104, 24);

    juce__label15.reset (new juce::Label ("modModeLabel",
                                          TRANS("Modulation Mode")));
    addAndMakeVisible (juce__label15.get());
    juce__label15->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label15->setJustificationType (juce::Justification::centred);
    juce__label15->setEditable (false, false, false);
    juce__label15->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label15->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label15->setBounds (120, 232, 104, 24);

    sendSettingsButton.reset (new juce::TextButton ("sendSettings"));
    addAndMakeVisible (sendSettingsButton.get());
    sendSettingsButton->setButtonText (TRANS("Send All Settings"));
    sendSettingsButton->addListener (this);

    sendSettingsButton->setBounds (480, 184, 64, 48);

    release_slider.reset (new juce::Slider ("release"));
    addAndMakeVisible (release_slider.get());
    release_slider->setRange (0, 127, 1);
    release_slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    release_slider->setTextBoxStyle (juce::Slider::NoTextBox, true, 80, 20);
    release_slider->addListener (this);

    release_slider->setBounds (112, 56, 80, 88);

    attack_slider.reset (new juce::Slider ("attack"));
    addAndMakeVisible (attack_slider.get());
    attack_slider->setRange (0, 127, 1);
    attack_slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    attack_slider->setTextBoxStyle (juce::Slider::NoTextBox, true, 80, 20);
    attack_slider->addListener (this);

    attack_slider->setBounds (32, 56, 80, 88);

    linkWavesSwitch.reset (new juce::ToggleButton ("linkWaves"));
    addAndMakeVisible (linkWavesSwitch.get());
    linkWavesSwitch->setButtonText (TRANS("Link Waves"));
    linkWavesSwitch->addListener (this);

    linkWavesSwitch->setBounds (48, 344, 150, 24);

    customWaves_switch.reset (new juce::ToggleButton ("customWaves"));
    addAndMakeVisible (customWaves_switch.get());
    customWaves_switch->setButtonText (TRANS("Customize Waveforms"));
    customWaves_switch->addListener (this);

    customWaves_switch->setBounds (48, 304, 150, 24);

    juce__label3.reset (new juce::Label ("new label",
                                         TRANS("Core Presets can have more elaborate wave settings, but enable Customize Waveforms to override the Core Preset tones.")));
    addAndMakeVisible (juce__label3.get());
    juce__label3->setFont (juce::Font (11.60f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label3->setJustificationType (juce::Justification::centredLeft);
    juce__label3->setEditable (false, false, false);
    juce__label3->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label3->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label3->setBounds (224, 296, 352, 48);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 500);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

RootComponent::~RootComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    juce__label = nullptr;
    juce__label2 = nullptr;
    waveAll_slider = nullptr;
    wave1_label = nullptr;
    wave2_slider = nullptr;
    wave2_label = nullptr;
    wave3_slider = nullptr;
    wave3_label = nullptr;
    tremDepth_slider = nullptr;
    tremSpeed_slider = nullptr;
    juce__label6 = nullptr;
    juce__label7 = nullptr;
    juce__label8 = nullptr;
    resonance_slider = nullptr;
    juce__label9 = nullptr;
    juce__label10 = nullptr;
    pulseWidth_slider = nullptr;
    juce__label11 = nullptr;
    volume_slider = nullptr;
    juce__label13 = nullptr;
    voice_picker = nullptr;
    modulation_picker = nullptr;
    patch_picker = nullptr;
    juce__label14 = nullptr;
    juce__label15 = nullptr;
    sendSettingsButton = nullptr;
    release_slider = nullptr;
    attack_slider = nullptr;
    linkWavesSwitch = nullptr;
    customWaves_switch = nullptr;
    juce__label3 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void RootComponent::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void RootComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void RootComponent::sliderValueChanged (juce::Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    if (processor == nullptr) return;
    RNBO::CoreObject& coreObject = processor->getRnboObject();
    auto parameters = processor->getParameters();
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == waveAll_slider.get())
    {
        //[UserSliderCode_waveAll_slider] -- add your slider handling code here..
        //[/UserSliderCode_waveAll_slider]
    }
    else if (sliderThatWasMoved == wave2_slider.get())
    {
        //[UserSliderCode_wave2_slider] -- add your slider handling code here..
        //[/UserSliderCode_wave2_slider]
    }
    else if (sliderThatWasMoved == wave3_slider.get())
    {
        //[UserSliderCode_wave3_slider] -- add your slider handling code here..
        //[/UserSliderCode_wave3_slider]
    }
    else if (sliderThatWasMoved == tremDepth_slider.get())
    {
        //[UserSliderCode_tremDepth_slider] -- add your slider handling code here..
        //[/UserSliderCode_tremDepth_slider]
    }
    else if (sliderThatWasMoved == tremSpeed_slider.get())
    {
        //[UserSliderCode_tremSpeed_slider] -- add your slider handling code here..
        //[/UserSliderCode_tremSpeed_slider]
    }
    else if (sliderThatWasMoved == resonance_slider.get())
    {
        //[UserSliderCode_resonance_slider] -- add your slider handling code here..
        //[/UserSliderCode_resonance_slider]
    }
    else if (sliderThatWasMoved == pulseWidth_slider.get())
    {
        //[UserSliderCode_pulseWidth_slider] -- add your slider handling code here..
        //[/UserSliderCode_pulseWidth_slider]
    }
    else if (sliderThatWasMoved == volume_slider.get())
    {
        //[UserSliderCode_volume_slider] -- add your slider handling code here..
        //[/UserSliderCode_volume_slider]
    }
    else if (sliderThatWasMoved == release_slider.get())
    {
        //[UserSliderCode_release_slider] -- add your slider handling code here..
        //[/UserSliderCode_release_slider]
    }
    else if (sliderThatWasMoved == attack_slider.get())
    {
        //[UserSliderCode_attack_slider] -- add your slider handling code here..
        //[/UserSliderCode_attack_slider]
    }

    //[UsersliderValueChanged_Post]
    RNBO::ParameterIndex index = coreObject.getParameterIndexForID(sliderThatWasMoved->getName().toRawUTF8());
    if (index != -1) {
        const auto param = processor->getParameters()[index];
        auto newVal = sliderThatWasMoved->getValue();

        if (param && param->getValue() != newVal)
        {
            auto normalizedValue = coreObject.convertToNormalizedParameterValue(index, newVal);
            param->beginChangeGesture();
            param->setValueNotifyingHost(normalizedValue);
            param->endChangeGesture();
        }
    }
    //[/UsersliderValueChanged_Post]
}

void RootComponent::comboBoxChanged (juce::ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    if (processor == nullptr) return;
    RNBO::CoreObject& coreObject = processor->getRnboObject();
    auto parameters = processor->getParameters();
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == voice_picker.get())
    {
        //[UserComboBoxCode_voice_picker] -- add your combo box handling code here..
        //[/UserComboBoxCode_voice_picker]
    }
    else if (comboBoxThatHasChanged == modulation_picker.get())
    {
        //[UserComboBoxCode_modulation_picker] -- add your combo box handling code here..
        //[/UserComboBoxCode_modulation_picker]
    }
    else if (comboBoxThatHasChanged == patch_picker.get())
    {
        //[UserComboBoxCode_patch_picker] -- add your combo box handling code here..
        //[/UserComboBoxCode_patch_picker]
    }

    //[UsercomboBoxChanged_Post]
    RNBO::ParameterIndex index = coreObject.getParameterIndexForID(comboBoxThatHasChanged->getName().toRawUTF8());
    if (index != -1) {
        const auto param = processor->getParameters()[index];
        auto newVal = comboBoxThatHasChanged->getSelectedItemIndex();

        if (param)
        {
            auto normalizedValue = coreObject.convertToNormalizedParameterValue(index, newVal);
            param->beginChangeGesture();
            param->setValueNotifyingHost(normalizedValue);
            param->endChangeGesture();
        }
    }
    //[/UsercomboBoxChanged_Post]
}

void RootComponent::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    if (processor == nullptr) return;
    RNBO::CoreObject& coreObject = processor->getRnboObject();
    auto parameters = processor->getParameters();
    RNBO::ParameterIndex index = coreObject.getParameterIndexForID(buttonThatWasClicked->getName().toRawUTF8());
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == sendSettingsButton.get())
    {
        //[UserButtonCode_sendSettingsButton] -- add your button handler code here..
        if (index != -1) {
            const auto param = processor->getParameters()[index];
            if(param)
            {
                sendSettingsInt++;
                param->beginChangeGesture();
                param->setValueNotifyingHost(sendSettingsInt);
                param->endChangeGesture();
            }
        }
        //[/UserButtonCode_sendSettingsButton]
    }
    else if (buttonThatWasClicked == linkWavesSwitch.get())
    {
        //[UserButtonCode_linkWavesSwitch] -- add your button handler code here..
        if (index != -1) {
            const auto param = processor->getParameters()[index];
            if(param)
            {
                int linkState = (juce::ToggleButton*)buttonThatWasClicked->getToggleState() ? 1 : 0;
                param->beginChangeGesture();
                param->setValueNotifyingHost(linkState);
                param->endChangeGesture();
            }
        }

        if ((juce::ToggleButton*)buttonThatWasClicked->getToggleState()){
            //Waves are linked, hide Waves 2&3
            wave1_label->setText("Wave Type", dontSendNotification);
            wave2_label->setVisible(false);
            wave3_label->setVisible(false);
            wave2_slider->setVisible(false);
            wave3_slider->setVisible(false);
        } else {
            wave1_label->setText("Wave Osc1", dontSendNotification);
            wave2_label->setVisible(true);
            wave3_label->setVisible(true);
            wave2_slider->setVisible(true);
            wave3_slider->setVisible(true);
        }
        //[/UserButtonCode_linkWavesSwitch]
    }
    else if (buttonThatWasClicked == customWaves_switch.get())
    {
        //[UserButtonCode_customWaves_switch] -- add your button handler code here..
        if (index != -1) {
            const auto param = processor->getParameters()[index];
            if(param)
            {
                int customWavesState = (juce::ToggleButton*)buttonThatWasClicked->getToggleState() ? 1 : 0;
                param->beginChangeGesture();
                param->setValueNotifyingHost(customWavesState);
                param->endChangeGesture();
            }
        }

        //Hide or show wave options based on custom state
        if (customWaves_switch->getToggleState()){
            linkWavesSwitch->setVisible(true);
            wave1_label->setVisible(true);
            waveAll_slider->setVisible(true);
            pulseWidth_slider->setVisible(true);

            if (linkWavesSwitch->getToggleState()){
                //Waves are linked, hide Waves 2&3
                wave1_label->setText("Wave Type", dontSendNotification);
                wave2_label->setVisible(false);
                wave3_label->setVisible(false);
                wave2_slider->setVisible(false);
                wave3_slider->setVisible(false);
            } else {
                //Waves aren't linked, show sliders for Waves 2&3
                wave1_label->setText("Wave Osc1", dontSendNotification);
                wave2_label->setVisible(true);
                wave3_label->setVisible(true);
                wave2_slider->setVisible(true);
                wave3_slider->setVisible(true);
            }
        } else {
            linkWavesSwitch->setVisible(false);
            wave1_label->setVisible(false);
            wave2_label->setVisible(false);
            wave3_label->setVisible(false);
            waveAll_slider->setVisible(false);
            wave2_slider->setVisible(false);
            wave3_slider->setVisible(false);
            pulseWidth_slider->setVisible(false);
        }

        //[/UserButtonCode_customWaves_switch]
    }

    //[UserbuttonClicked_Post]

    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void RootComponent::setAudioProcessor(RNBO::JuceAudioProcessor *p)
{
    processor = p;

    RNBO::ParameterInfo parameterInfo;
    RNBO::CoreObject& coreObject = processor->getRnboObject();

    int sendSettingsIndex = -1;

    for (unsigned long i = 0; i < coreObject.getNumParameters(); i++) {
        auto parameterName = coreObject.getParameterId(i);
        RNBO::ParameterValue value = coreObject.getParameterValue(i);
        RNBO::ParameterValue normValue = coreObject.getParameterNormalized(i);
        Slider *slider = nullptr;
        if (juce::String(parameterName) == attack_slider.get()->getName()) {
            slider = attack_slider.get();
        } else if (juce::String(parameterName) == release_slider.get()->getName()) {
            slider = release_slider.get();
        } else if (juce::String(parameterName) == tremDepth_slider.get()->getName()) {
            slider = tremDepth_slider.get();
        } else if (juce::String(parameterName) == tremSpeed_slider.get()->getName()) {
            slider = tremSpeed_slider.get();
        } else if (juce::String(parameterName) == volume_slider.get()->getName()) {
            slider = volume_slider.get();
        } else if (juce::String(parameterName) == waveAll_slider.get()->getName()) {
            slider = waveAll_slider.get();
        } else if (juce::String(parameterName) == wave2_slider.get()->getName()) {
            slider = wave2_slider.get();
        } else if (juce::String(parameterName) == wave3_slider.get()->getName()) {
            slider = wave3_slider.get();
        } else if (juce::String(parameterName) == pulseWidth_slider.get()->getName()) {
            slider = pulseWidth_slider.get();
        } else if (juce::String(parameterName) == resonance_slider.get()->getName()) {
            slider = resonance_slider.get();
        }

        if (slider) {
            slidersByParameterIndex.set(i, slider);
            coreObject.getParameterInfo(i, &parameterInfo);
            //slider->setRange(parameterInfo.min, parameterInfo.max);
            slider->setValue(value);
        } else {
            ComboBox *comboBox = nullptr;
            if (juce::String(parameterName) == patch_picker.get()->getName()) {
                comboBox = patch_picker.get();
            } else if (juce::String(parameterName) == voice_picker.get()->getName()) {
                comboBox = voice_picker.get();
            } else if (juce::String(parameterName) == modulation_picker.get()->getName()) {
                comboBox = modulation_picker.get();
            }

            if (comboBox) {
                boxesByParameterIndex.set(i, comboBox);
                coreObject.getParameterInfo(i, &parameterInfo);
                comboBox->setSelectedItemIndex(std::round(normValue * parameterInfo.max));
            } else {
                ToggleButton *toggle = nullptr;
                if (juce::String(parameterName) == linkWavesSwitch.get()->getName()) {
                    toggle = linkWavesSwitch.get();
                }

                if (toggle) {
                    switchesByParameterIndex.set(i, toggle);
                    coreObject.getParameterInfo(i, &parameterInfo);
                    toggle->setToggleState(value > 0, dontSendNotification);
                } else if (juce::String(parameterName) == sendSettingsButton.get()->getName()){
                        sendSettingsIndex = i;
                } else if (juce::String(parameterName) == customWaves_switch.get()->getName()){
                    toggle = customWaves_switch.get();

                    switchesByParameterIndex.set(i, toggle);
                    coreObject.getParameterInfo(i, &parameterInfo);
                    toggle->setToggleState(value > 0, dontSendNotification);
                }
            }
        }

    }
    if (sendSettingsIndex > - 1){
        coreObject.setParameterValue(sendSettingsIndex, coreObject.getParameterValue(sendSettingsIndex) + 1);
    }

    //Hide or show wave options based on custom state
    if (customWaves_switch->getToggleState()){
        linkWavesSwitch->setVisible(true);
        wave1_label->setVisible(true);
        waveAll_slider->setVisible(true);
        pulseWidth_slider->setVisible(true);

        if (linkWavesSwitch->getToggleState()){
            //Waves are linked, hide Waves 2&3
            wave1_label->setText("Wave Type", dontSendNotification);
            wave2_label->setVisible(false);
            wave3_label->setVisible(false);
            wave2_slider->setVisible(false);
            wave3_slider->setVisible(false);
        } else {
            //Waves aren't linked, show sliders for Waves 2&3
            wave1_label->setText("Wave Osc1", dontSendNotification);
            wave2_label->setVisible(true);
            wave3_label->setVisible(true);
            wave2_slider->setVisible(true);
            wave3_slider->setVisible(true);
        }
    } else {
        linkWavesSwitch->setVisible(false);
        wave1_label->setVisible(false);
        wave2_label->setVisible(false);
        wave3_label->setVisible(false);
        waveAll_slider->setVisible(false);
        wave2_slider->setVisible(false);
        wave3_slider->setVisible(false);
        pulseWidth_slider->setVisible(false);
    }

}

void RootComponent::updateSliderForParam(unsigned long index, double value)
{
    if (processor == nullptr) return;
    RNBO::CoreObject& coreObject = processor->getRnboObject();
    auto denormalizedValue = coreObject.convertFromNormalizedParameterValue(index, value);
    auto slider = slidersByParameterIndex.getReference((int) index);
    if (slider && (slider->getThumbBeingDragged() == -1)) {
        slider->setValue(denormalizedValue, NotificationType::dontSendNotification);
    }
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="RootComponent" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="600" initialHeight="500">
  <BACKGROUND backgroundColour="ff323e44"/>
  <LABEL name="attacklabel" id="f6648757a5aa5bad" memberName="juce__label"
         virtualName="" explicitFocusOrder="0" pos="32 40 80 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Attack" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="releaselabel" id="f53698c628d3ed46" memberName="juce__label2"
         virtualName="" explicitFocusOrder="0" pos="112 40 80 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Release" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <SLIDER name="wave_all" id="d627a4e69a5f3c62" memberName="waveAll_slider"
          virtualName="" explicitFocusOrder="0" pos="120 376 368 24" min="0.0"
          max="127.0" int="1.0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="waveallLabel" id="2471461b59670766" memberName="wave1_label"
         virtualName="" explicitFocusOrder="0" pos="8 376 104 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Wave All" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <SLIDER name="wave_voice2" id="8f74456ecd26eaf9" memberName="wave2_slider"
          virtualName="" explicitFocusOrder="0" pos="120 408 368 24" min="0.0"
          max="127.0" int="1.0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="Wave2" id="adc7faf168a9f200" memberName="wave2_label" virtualName=""
         explicitFocusOrder="0" pos="8 408 104 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Wave Osc2" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <SLIDER name="wave_voice3" id="90c1f37aafb02bd4" memberName="wave3_slider"
          virtualName="" explicitFocusOrder="0" pos="120 440 368 24" min="0.0"
          max="127.0" int="1.0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="waveOsc3" id="f05a35af3e6f6627" memberName="wave3_label"
         virtualName="" explicitFocusOrder="0" pos="8 440 104 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Wave Osc3" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <SLIDER name="tremdepth" id="39d740287c199a5a" memberName="tremDepth_slider"
          virtualName="" explicitFocusOrder="0" pos="416 56 80 88" min="0.0"
          max="63.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="tremspeed" id="390599c84a4fc622" memberName="tremSpeed_slider"
          virtualName="" explicitFocusOrder="0" pos="504 56 80 88" min="0.0"
          max="63.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="tremDepthLabel" id="e209e867b559474a" memberName="juce__label6"
         virtualName="" explicitFocusOrder="0" pos="408 40 80 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Trem Depth" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="tremSpeedLabel" id="50ddedfd45345ead" memberName="juce__label7"
         virtualName="" explicitFocusOrder="0" pos="504 40 80 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Trem Speed" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="patchLabel" id="99ae726f8acde801" memberName="juce__label8"
         virtualName="" explicitFocusOrder="0" pos="120 168 104 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Core Preset" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <SLIDER name="resonance" id="dad87b6cf0df06c" memberName="resonance_slider"
          virtualName="" explicitFocusOrder="0" pos="272 56 80 88" min="0.0"
          max="127.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="resoLabel" id="a98005ec2aefd31c" memberName="juce__label9"
         virtualName="" explicitFocusOrder="0" pos="272 40 80 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Resonance" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="Title" id="f68bf6c2249ca3fd" memberName="juce__label10"
         virtualName="" explicitFocusOrder="0" pos="160 8 270 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Cynthcart Control v0.11" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="24.1" kerning="0.0" bold="0" italic="0" justification="36"/>
  <SLIDER name="pulsewidth" id="6bdaddd7928ef6c1" memberName="pulseWidth_slider"
          virtualName="" explicitFocusOrder="0" pos="504 384 80 88" min="0.0"
          max="127.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="pulseLabel" id="fd7dea0fe7315ed1" memberName="juce__label11"
         virtualName="" explicitFocusOrder="0" pos="504 368 80 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Pulse Width" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <SLIDER name="patch_volume" id="ac8755516921ce29" memberName="volume_slider"
          virtualName="" explicitFocusOrder="0" pos="488 8 96 24" min="0.0"
          max="127.0" int="1.0" style="LinearHorizontal" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="volumeLabel" id="f783361911f232d5" memberName="juce__label13"
         virtualName="" explicitFocusOrder="0" pos="424 8 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Volume" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <COMBOBOX name="voice_mode" id="94231fccb1854b57" memberName="voice_picker"
            virtualName="" explicitFocusOrder="0" pos="240 200 208 24" editable="0"
            layout="33" items="-Use Preset's  Setting-&#10;Poly&#10;5ths&#10;5Port&#10;Port1 - Slow&#10;Port2 - Med&#10;Port3 - Fast&#10;Mono1 - Octaves&#10;Mono2 - Unison&#10;MonoP1 - Octaves Port&#10;MonoP2 - Unison Port&#10;Arp1 - Up Fast&#10;Arp2 - Up Med&#10;Arp3 - Up Slow&#10;Arp4 - Down Med&#10;Arp5 - Down Fast&#10;6Chan (Req 2nd SID)"
            textWhenNonSelected="-Select Mode-" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="modulation_mode" id="4951035817b7339d" memberName="modulation_picker"
            virtualName="" explicitFocusOrder="0" pos="240 232 208 24" editable="0"
            layout="33" items="-Use Preset's Setting-&#10;None&#10;Filt1 - Slow LFO&#10;Filt2 - Slow Riser&#10;Filt3 - Fast Drop&#10;Filt4 - Square LFO&#10;Filt5 - Fast Square LFO&#10;Puls1 - Slow LFO&#10;Puls2 - Rising Env"
            textWhenNonSelected="-Select Mode-" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="patch" id="e2a5650e24521ab6" memberName="patch_picker"
            virtualName="" explicitFocusOrder="0" pos="240 168 208 24" editable="0"
            layout="33" items="Sawtooth Bass&#10;Gritty Bass&#10;Portamento 5th&#10;Saw Portamento&#10;Pulse 5th&#10;Pulse High&#10;Triangle HiLo&#10;Triangle Drop&#10;SID Explosion&#10;MUTE&#10;Filter Bass&#10;Sweep Arp&#10;Pluck Arp&#10;Slow Arp&#10;Filter Stack 1&#10;Filter Stack 2&#10;Pulsar&#10;Vibrato Lead&#10;Slow Rise&#10;Bending Echo&#10;6-Voice Saw&#10;Arp Lead&#10;Laser Bass&#10;Trombone Blast&#10;Noisy Square Arp&#10;Triangle Sync&#10;Mono Sync Echo&#10;Clean Saw&#10;Clean Triangle&#10;Clean Square"
            textWhenNonSelected="-Select Mode-" textWhenNoItems="(no choices)"/>
  <LABEL name="voiceModeLabel" id="ba29d2988588a493" memberName="juce__label14"
         virtualName="" explicitFocusOrder="0" pos="120 200 104 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Voice Mode" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="modModeLabel" id="6078d051b6a5f77f" memberName="juce__label15"
         virtualName="" explicitFocusOrder="0" pos="120 232 104 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Modulation Mode" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <TEXTBUTTON name="sendSettings" id="18658edfa79078cf" memberName="sendSettingsButton"
              virtualName="" explicitFocusOrder="0" pos="480 184 64 48" buttonText="Send All Settings"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <SLIDER name="release" id="f1ad67955ab3ef0a" memberName="release_slider"
          virtualName="" explicitFocusOrder="0" pos="112 56 80 88" min="0.0"
          max="127.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="attack" id="e7d9b3994dacad6b" memberName="attack_slider"
          virtualName="" explicitFocusOrder="0" pos="32 56 80 88" min="0.0"
          max="127.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <TOGGLEBUTTON name="linkWaves" id="718a764354655f3f" memberName="linkWavesSwitch"
                virtualName="" explicitFocusOrder="0" pos="48 344 150 24" buttonText="Link Waves"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="customWaves" id="2c96a748ada533a0" memberName="customWaves_switch"
                virtualName="" explicitFocusOrder="0" pos="48 304 150 24" buttonText="Customize Waveforms"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="new label" id="754c23a9ffbbdec1" memberName="juce__label3"
         virtualName="" explicitFocusOrder="0" pos="224 296 352 48" edTextCol="ff000000"
         edBkgCol="0" labelText="Core Presets can have more elaborate wave settings, but enable Customize Waveforms to override the Core Preset tones."
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="11.6" kerning="0.0" bold="0"
         italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

