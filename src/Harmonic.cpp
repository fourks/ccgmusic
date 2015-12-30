#include "Harmonic.h"
#include "MusicScript.h"

Harmonic::~Harmonic() {
	offsets.clear();
//      delete offsets;
  //    delete chordData;
}

Harmonic::Harmonic() {
}
Interval2D Harmonic::toInterval2D(int metrum) {
 return Interval2D(startTime.getPosition(metrum),endTime.getPosition(metrum));
}

vector<int> Harmonic::getOffsets() {
 return offsets;
}

Time Harmonic::getStartTime() {
 return startTime;
}
Time Harmonic::getEndTime() {
 return endTime;
}
int Harmonic::getBaseNote() {
 return baseNote;
}

void Harmonic::setEndTime(Time t) {
 endTime = t;
}

// baseNote == scale degree
Harmonic::Harmonic(Time time,int baseNote,vector<int> chordData) {
 this->startTime = time;
 this->baseNote = baseNote;
// offsets=chordData;
// printf("HARMONIC %d\n",baseNote);
 for(int i=0;i<chordData.size();i++) 
 	offsets.push_back((baseNote - 1 + chordData.at(i)) % 7);

}
vector<int> Harmonic::getScaleDegrees() {
/*	vector<int> result;
//	printf("Harmonic::getScaleDegrees %d\n",baseNote);
	for(size_t i=0;i<offsets.size();i++) {
		int t=offsets.at(i);
//		int t=Utils::half2tone(offsets.at(i));
//		if(t==-1)
//			printf("ERROR invalid tone %d %d\n",i,offsets.at(i));
       int scale=(baseNote - 1 + t) % 7;

//       int scale=(intervals[baseNote-1] + t) % 12;


//       printf("SCALE %d %d %d\n",baseNote-1,scales[baseNote-1],Utils::tone2half(baseNote-1));
 //      printf("Harmonic::getScaleDegrees scale %d->%d(%s) %d %d %d\n",baseNote-1,intervals[baseNote-1],Utils::midiToNote(Utils::tone2half(baseNote-1)).c_str(),t,offsets.at(i),scale);

       result.push_back(scale);
	}

 return result;
*/ 
 return offsets;
}
void Harmonic::translate(int bars) {
 startTime = startTime.translateCopy(bars);
 endTime = endTime.translateCopy(bars);
}
