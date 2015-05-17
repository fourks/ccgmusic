#ifndef MIDIINSTRUMENTS_H
#define MIDIINSTRUMENTS_H

#define GM_ACOUSTIC_GRAND_PIANO 1
#define GM_BRIGHT_ACOUSTIC_PIANO 2
#define GM_ELECTRIC_GRAND_PIANO 3
#define GM_HONKYTONK_PIANO 4
#define GM_ELECTRIC_PIANO_1 5
#define GM_ELECTRIC_PIANO_2 6
#define GM_HARPSICHORD 7
#define GM_CLAVINET 8
#define GM_CELESTA 9
#define GM_GLOCKENSPIEL 10
#define GM_MUSIC_BOX 11
#define GM_VIBRAPHONE 12
#define GM_MARIMBA 13
#define GM_XYLOPHONE 14
#define GM_TUBULAR_BELLS 15
#define GM_DULCIMER 16
#define GM_DRAWBAR_ORGAN 17
#define GM_PERCUSSIVE_ORGAN 18
#define GM_ROCK_ORGAN 19
#define GM_CHURCH_ORGAN 20
#define GM_REED_ORGAN 21
#define GM_ACCORDION_ 22
#define GM_HARMONICA 23
#define GM_TANGO_ACCORDION 24
#define GM_ACOUSTIC_GUITARNYLON 25
#define GM_ACOUSTIC_GUITARSTEEL 26
#define GM_ELECTRIC_GUITARJAZZ 27
#define GM_ELECTRIC_GUITARCLEAN 28
#define GM_ELECTRIC_GUITARMUTED 29
#define GM_OVERDRIVEN_GUITAR 30
#define GM_DISTORTION_GUITAR 31
#define GM_GUITAR_HARMONICS 32
#define GM_ACOUSTIC_BASS 33
#define GM_ELECTRIC_BASSFINDER 34
#define GM_ELECTRIC_BASSPICK 35
#define GM_FRETLESS_BASS 36
#define GM_SLAP_BASS_1 37
#define GM_SLAP_BASS_2 38
#define GM_SYNTH_BASS_1 39
#define GM_SYNTH_BASS_2 40
#define GM_VIOLIN 41
#define GM_VIOLA 42
#define GM_CELLO 43
#define GM_CONTRABASS 44
#define GM_TREMOLO_STRINGS 45
#define GM_PIZZICATO_STRINGS 46
#define GM_ORCHESTRAL_HARP 47
#define GM_TIMPANI 48
#define GM_STRINGS_ENSEMBLE_1 49
#define GM_STRINGS_ENSEMBLE_2 50
#define GM_SYN_STRINGS_1 51
#define GM_SYN_STRINGS_2 52
#define GM_CHOIR_AAHS 53
#define GM_VOICE_OOHS 54
#define GM_SYNVOX 55
#define GM_ORCHESTRA_HIT 56
#define GM_TRUMPET 57
#define GM_TROMBONE 58
#define GM_TUBA 59
#define GM_MUTEDTRUMPET 60
#define GM_FRENCH_HORN 61
#define GM_BRASS_SECTION 62
#define GM_SYNTH_BRASS_1 63
#define GM_SYNTH_BRASS_2 64
#define GM_SOPRANO_SAX 65
#define GM_ALTO_SAX 66
#define GM_TENOR_SAX 67
#define GM_BARITONE_SAX 68
#define GM_OBOE 69
#define GM_ENGLISH_HORN 70
#define GM_BASSOON 71
#define GM_CLARINET 72
#define GM_PICCOLO 73
#define GM_FLUTE 74
#define GM_RECORDER 75
#define GM_PAN_FLUTE 76
#define GM_BLOWN_BOTTLE 77
#define GM_SHAKUHACHI 78
#define GM_WHISTLE 79
#define GM_OCARINA 80
#define GM_LEAD_1_SQUARE 81
#define GM_LEAD_2_SAWTOOTH 82
#define GM_LEAD_3_CALLIOPE 83
#define GM_LEAD_4_CHIFF 84
#define GM_LEAD_5_CHARANG 85
#define GM_LEAD_6_VOICE 86
#define GM_LEAD_7_FIFTHS 87
#define GM_LEAD_8_BASS_LEAD 88
#define GM_PAD_1_NEW_AGE 89
#define GM_PAD_2_WARM 90
#define GM_PAD_3_POLYSYNTH 91
#define GM_PAD_4_CHOIR 92
#define GM_PAD_5_BOWED 93
#define GM_PAD_6_METALLIC 94
#define GM_PAD_7_HALO 95
#define GM_PAD_8_SWEEP 96
#define GM_FX_1_RAIN 97
#define GM_FX_2_SOUNDTRACK 98
#define GM_FX_3_CRYSTAL 99
#define GM_FX_4_ATMOSPHERE 100
#define GM_FX_5_BRIGHTNESS 101
#define GM_FX_6_GOBLINS 102
#define GM_FX_7_ECHOES 103
#define GM_FX_8_SCIFI 104
#define GM_SITAR 105
#define GM_BANJO 106
#define GM_SHAMISEN 107
#define GM_KOTO 108
#define GM_KALIMBA 109
#define GM_BAGPIPE 110
#define GM_FIDDLE 111
#define GM_SHANAI 112
#define GM_TINKLE_BELL 113
#define GM_AGOGO 114
#define GM_STEEL_DRUMS 115
#define GM_WOODBLOCK 116
#define GM_TAIKO_DRUM 117
#define GM_MELODIC_TOM 118
#define GM_SYNTH_DRUM 119
#define GM_REVERSE_CYMBALS 120
#define GM_GUITAR_FRET_NOISE 121
#define GM_BREATH_NOISE 122
#define GM_SEASHORE 123
#define GM_BIRD_TWEET 124
#define GM_TELEPHONE_RING 125
#define GM_HELICOPTER 126
#define GM_APPLAUSE 127
#define GM_GUN_SHOT 128

#define GM_RAND_PIANO Utils::getRandomInt(GM_ACOUSTIC_GRAND_PIANO, GM_CLAVINET)
#define GM_RAND_CHROMATIC_PERCUSSION Utils::getRandomInt(GM_CELESTA, GM_DULCIMER)
#define GM_RAND_ORGAN Utils::getRandomInt(GM_DRAWBAR_ORGAN, GM_TANGO_ACCORDION)
#define GM_RAND_GUITAR Utils::getRandomInt(GM_ACOUSTIC_GUITARNYLON, GM_GUITAR_HARMONICS)
#define GM_RAND_BASS Utils::getRandomInt(GM_ACOUSTIC_BASS, GM_SYNTH_BASS_2)
#define GM_RAND_STRINGS_ORCHESTRA Utils::getRandomInt(GM_VIOLIN, GM_TIMPANI)
#define GM_RAND_ENSEMBLE Utils::getRandomInt(GM_STRINGS_ENSEMBLE_1, GM_ORCHESTRA_HIT)
#define GM_RAND_BRASS Utils::getRandomInt(GM_TRUMPET, GM_SYNTH_BRASS_2)
#define GM_RAND_REED Utils::getRandomInt(GM_SOPRANO_SAX, GM_CLARINET)
#define GM_RAND_PIPE Utils::getRandomInt(GM_PICCOLO, GM_OCARINA)
#define GM_RAND_SYNTH_LEAD Utils::getRandomInt(GM_LEAD_1_SQUARE, GM_LEAD_8_BASS_LEAD)
#define GM_RAND_SYNTH_PAD Utils::getRandomInt(GM_PAD_1_NEW_AGE, GM_PAD_8_SWEEP)
#define GM_RAND_SYNTH_EFFECT Utils::getRandomInt(GM_FX_1_RAIN, GM_FX_8_SCIFI)
#define GM_RAND_ETHNIC Utils::getRandomInt(GM_SITAR, GM_SHANAI)
#define GM_RAND_PERCUSSIVE Utils::getRandomInt(GM_TINKLE_BELL, GM_REVERSE_CYMBALS)
#define GM_RAND_SOUND_EFFECTS Utils::getRandomInt(GM_GUITAR_FRET_NOISE, GM_GUN_SHOT)

#endif // MIDIINSTRUMENTS_H