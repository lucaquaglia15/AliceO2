/// \file MisalignmentParameter.h
/// \brief Definition of the MisalignmentParameter class

#ifndef ALICEO2_ITS_MISALIGNMENTPARAMETER_H_
#define ALICEO2_ITS_MISALIGNMENTPARAMETER_H_

#include "FairParGenericSet.h" // for FairParGenericSet

#include "Rtypes.h" // for ClassDef

#include "TArrayD.h" // for TArrayD

class FairParamList;

namespace AliceO2 {
namespace ITS {

class MisalignmentParameter : public FairParGenericSet {

public:
  MisalignmentParameter(
      const char* name = "MisalignmentParameter",
      const char* title =
          "Misalignment parameter for AliceO2ITSHitProducerIdealMisallign Parameters",
      const char* context = "TestDefaultContext");
  ~MisalignmentParameter(void);

  void Clear(void);
  void PutParams(FairParamList*);
  Bool_t GetParams(FairParamList*);

  TArrayD GetShiftX()
  {
    return mShiftX;
  }
  TArrayD GetShiftY()
  {
    return mShiftY;
  }
  TArrayD GetShiftZ()
  {
    return mShiftZ;
  }
  TArrayD GetRotX()
  {
    return mRotX;
  }
  TArrayD GetRotY()
  {
    return mRotY;
  }
  TArrayD GetRotZ()
  {
    return mRotZ;
  }
  Int_t GetNumberOfDetectors()
  {
    return mNumberOfDetectors;
  }

private:
  TArrayD mShiftX;          ///< Array to hold the misalignment in x-direction
  TArrayD mShiftY;          ///< Array to hold the misalignment in y-direction
  TArrayD mShiftZ;          ///< Array to hold the misalignment in z-direction
  TArrayD mRotX;            ///< Array to hold the rotation in x-direction
  TArrayD mRotY;            ///< Array to hold the rotation in y-direction
  TArrayD mRotZ;            ///< Array to hold the rotation in z-direction
  Int_t mNumberOfDetectors; ///< Total number of detectors

  MisalignmentParameter(const MisalignmentParameter&);
  MisalignmentParameter& operator=(const MisalignmentParameter&);

  ClassDef(MisalignmentParameter, 1)
};
}
}

#endif
