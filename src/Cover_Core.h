#ifndef Cover_Core_h
#define Cover_Core_h

namespace Cover
{
  enum State{
    StatePowerUp=-1,
    StateUnknown=0,
    StateOpen=1,
    StateOpening=2,
    StateClosed=3,
    StateClosing=4,
  };
  enum Command{
    CommandUnknown=0,
    CommandOpen=1,
    CommandClose=2,
    CommandStop=3,
  };
}


#endif
