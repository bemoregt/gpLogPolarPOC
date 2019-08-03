# ofxLogPolarPOC
Scale and Rotate-invariant Image matching using Openframewrks.

![ example]( https://github.com/bemoregt/ofxLogPolarPOC/blob/master/test2.png "example")

### Algorithm
- using POC(Phase only correlation) with Log-Polar Transform of 2D FFT(Mellin Transform).
- Polar Transform of 2D FFT has rotation invariance.
- Logarithmic Transform of 2D FFT has scale invariance.
- 2D FFT has shift invariance.

### Dependency
- OpenFrameworks 0.10.1
- ofxCv
- ofxOpenCv
- fftm.hpp & fftm.cpp
- XCode 10.12.x
- OSX Mojave

### Next Plan
- Rotation & Scale Restotation.
- Panoramic merge using Image Sequence. 

### Reference
- Openframeworks Porting from original code : https://github.com/Smorodov/LogPolarFFTTemplateMatcher.git
