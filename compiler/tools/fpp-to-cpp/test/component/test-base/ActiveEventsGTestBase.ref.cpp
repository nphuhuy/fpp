// ======================================================================
// \title  ActiveEventsGTestBase.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for ActiveEvents component Google Test harness base class
// ======================================================================

#include "test-base/ActiveEventsGTestBase.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

ActiveEventsGTestBase ::
  ActiveEventsGTestBase(
      const char* const compName,
      const U32 maxHistorySize
  ) :
    ActiveEventsTesterBase(compName, maxHistorySize)
{

}

ActiveEventsGTestBase ::
  ~ActiveEventsGTestBase()
{

}

// ----------------------------------------------------------------------
// From ports
// ----------------------------------------------------------------------

void ActiveEventsGTestBase ::
  assertFromPortHistory_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistorySize)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Total size of all from port histories\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistorySize << "\n";
}

void ActiveEventsGTestBase ::
  assert_from_typedOut(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistory_typedOut->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for typedOut\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistory_typedOut->size() << "\n";
}

void ActiveEventsGTestBase ::
  assert_from_typedReturnOut(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistory_typedReturnOut->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for typedReturnOut\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistory_typedReturnOut->size() << "\n";
}

// ----------------------------------------------------------------------
// Events
// ----------------------------------------------------------------------

void ActiveEventsGTestBase ::
  assertEvents_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->eventsSize)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Total size of all event histories\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->eventsSize << "\n";
}

void ActiveEventsGTestBase ::
  assertEvents_EventActivityHigh_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->eventsSize_EventActivityHigh)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for event EventActivityHigh\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->eventsSize_EventActivityHigh << "\n";
}

void ActiveEventsGTestBase ::
  assertEvents_EventActivityLowThrottled_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->eventHistory_EventActivityLowThrottled->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for event EventActivityLowThrottled\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->eventHistory_EventActivityLowThrottled->size() << "\n";
}

void ActiveEventsGTestBase ::
  assertEvents_EventActivityLowThrottled(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const U32 u32,
      const F32 f32,
      const bool b
  ) const
{
  ASSERT_GT(this->eventHistory_EventActivityLowThrottled->size(), __index)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of event EventActivityLowThrottled\n"
    << "  Expected: Less than size of history ("
    << this->eventHistory_EventActivityLowThrottled->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const EventEntry_EventActivityLowThrottled& _e =
    this->eventHistory_EventActivityLowThrottled->at(__index);
  ASSERT_EQ(u32, _e.u32)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value of argument u32 at index "
    << __index
    << " in history of event EventActivityLowThrottled\n"
    << "  Expected: " << u32 << "\n"
    << "  Actual:   " << _e.u32 << "\n";
  ASSERT_EQ(f32, _e.f32)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value of argument f32 at index "
    << __index
    << " in history of event EventActivityLowThrottled\n"
    << "  Expected: " << f32 << "\n"
    << "  Actual:   " << _e.f32 << "\n";
  ASSERT_EQ(b, _e.b)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value of argument b at index "
    << __index
    << " in history of event EventActivityLowThrottled\n"
    << "  Expected: " << b << "\n"
    << "  Actual:   " << _e.b << "\n";
}

void ActiveEventsGTestBase ::
  assertEvents_EventCommand_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->eventHistory_EventCommand->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for event EventCommand\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->eventHistory_EventCommand->size() << "\n";
}

void ActiveEventsGTestBase ::
  assertEvents_EventCommand(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const char* const str1,
      const char* const str2
  ) const
{
  ASSERT_GT(this->eventHistory_EventCommand->size(), __index)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of event EventCommand\n"
    << "  Expected: Less than size of history ("
    << this->eventHistory_EventCommand->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const EventEntry_EventCommand& _e =
    this->eventHistory_EventCommand->at(__index);
  ASSERT_EQ(str1, _e.str1.toChar())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value of argument str1 at index "
    << __index
    << " in history of event EventCommand\n"
    << "  Expected: " << str1 << "\n"
    << "  Actual:   " << _e.str1.toChar() << "\n";
  ASSERT_EQ(str2, _e.str2.toChar())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value of argument str2 at index "
    << __index
    << " in history of event EventCommand\n"
    << "  Expected: " << str2 << "\n"
    << "  Actual:   " << _e.str2.toChar() << "\n";
}

void ActiveEventsGTestBase ::
  assertEvents_EventDiagnostic_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->eventHistory_EventDiagnostic->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for event EventDiagnostic\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->eventHistory_EventDiagnostic->size() << "\n";
}

void ActiveEventsGTestBase ::
  assertEvents_EventDiagnostic(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const E& e
  ) const
{
  ASSERT_GT(this->eventHistory_EventDiagnostic->size(), __index)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of event EventDiagnostic\n"
    << "  Expected: Less than size of history ("
    << this->eventHistory_EventDiagnostic->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const EventEntry_EventDiagnostic& _e =
    this->eventHistory_EventDiagnostic->at(__index);
  ASSERT_EQ(e, _e.e)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value of argument e at index "
    << __index
    << " in history of event EventDiagnostic\n"
    << "  Expected: " << e << "\n"
    << "  Actual:   " << _e.e << "\n";
}

void ActiveEventsGTestBase ::
  assertEvents_EventFatalThrottled_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->eventHistory_EventFatalThrottled->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for event EventFatalThrottled\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->eventHistory_EventFatalThrottled->size() << "\n";
}

void ActiveEventsGTestBase ::
  assertEvents_EventFatalThrottled(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const A& a
  ) const
{
  ASSERT_GT(this->eventHistory_EventFatalThrottled->size(), __index)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of event EventFatalThrottled\n"
    << "  Expected: Less than size of history ("
    << this->eventHistory_EventFatalThrottled->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const EventEntry_EventFatalThrottled& _e =
    this->eventHistory_EventFatalThrottled->at(__index);
  ASSERT_EQ(a, _e.a)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value of argument a at index "
    << __index
    << " in history of event EventFatalThrottled\n"
    << "  Expected: " << a << "\n"
    << "  Actual:   " << _e.a << "\n";
}

void ActiveEventsGTestBase ::
  assertEvents_EventWarningHigh_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->eventHistory_EventWarningHigh->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for event EventWarningHigh\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->eventHistory_EventWarningHigh->size() << "\n";
}

void ActiveEventsGTestBase ::
  assertEvents_EventWarningHigh(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const S& s
  ) const
{
  ASSERT_GT(this->eventHistory_EventWarningHigh->size(), __index)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of event EventWarningHigh\n"
    << "  Expected: Less than size of history ("
    << this->eventHistory_EventWarningHigh->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const EventEntry_EventWarningHigh& _e =
    this->eventHistory_EventWarningHigh->at(__index);
  ASSERT_EQ(s, _e.s)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value of argument s at index "
    << __index
    << " in history of event EventWarningHigh\n"
    << "  Expected: " << s << "\n"
    << "  Actual:   " << _e.s << "\n";
}

void ActiveEventsGTestBase ::
  assertEvents_EventWarningLowThrottled_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->eventsSize_EventWarningLowThrottled)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for event EventWarningLowThrottled\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->eventsSize_EventWarningLowThrottled << "\n";
}
