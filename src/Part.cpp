#include "Part.h"
#include "MusicScript.h"

int Part::CHROMATIC_BASE = 45;

Part::Part() {
	currentScale = MusicScript::scales[MusicScript::MAJOR_SCALE];
	tempoMod = 1.0;
	transpose = 0;
	scale = MusicScript::MAJOR_SCALE;
	arrHint = 3;
}

Part::~Part() {
//	printf("delete Part %x\n",this);
	Utils::deleteVector(chromaticEvents);
}

vector<ChromaticEvent*> *Part::getChromaticEventList() {
 return &chromaticEvents;
}
int Part::getStartBar() {
 return startBar;
}
int Part::getEndBar() {
 return endBar;
}
int Part::getUniquePart() {
 return uniquePart;
}
void Part::setUniquePart(int uniquePart) {
 this->uniquePart = uniquePart;
}
double Part::getTempoMod() {
 return tempoMod;
}
void Part::setTempoMod(double tempoMod) {
 this->tempoMod = tempoMod;
}
int Part::getTranspose() {
 return transpose;
}
void Part::setTranspose(int transpose) {
 this->transpose = transpose;
}
int Part::getScale() {
 return scale;
}
void Part::setScale(int scale) {
 this->scale = scale;
 currentScale = MusicScript::getScaleOffsets(scale);
}
int Part::getArrHint() {
 return arrHint;
}
void Part::setArrHint(int arrHint) {
 this->arrHint = arrHint;
}
void Part::setStartBar(int startBar) {
 this->startBar = startBar;
}
void Part::setEndBar(int endBar) {
 this->endBar = endBar;
}
void Part::addEvent(Time start,Time end,int chromaticNote) {
 chromaticEvents.push_back(new ChromaticEvent(start,end,chromaticNote));
}
int Part::computePitch(int scaleNote) {
 int scaleIndex = scaleNote - 1;
 int octaveOffset = 0;

 while(scaleIndex < 0){
     scaleIndex += 7;
     --octaveOffset;
 }
 while(scaleIndex > 6){
     scaleIndex -= 7;
     ++octaveOffset;
 }

 return Part::CHROMATIC_BASE + transpose + currentScale[scaleIndex] + 12 * octaveOffset;
}
int* Part::getScaleOffsets() {
 return currentScale;
}