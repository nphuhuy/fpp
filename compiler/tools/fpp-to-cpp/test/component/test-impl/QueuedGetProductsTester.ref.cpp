// ======================================================================
// \title  QueuedGetProductsTester.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for QueuedGetProducts component test harness implementation class
// ======================================================================

#include "QueuedGetProductsTester.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

QueuedGetProductsTester ::
  QueuedGetProductsTester() :
    QueuedGetProductsGTestBase("QueuedGetProductsTester", QueuedGetProductsTester::MAX_HISTORY_SIZE),
    component("QueuedGetProducts")
{
  this->initComponents();
  this->connectPorts();
}

QueuedGetProductsTester ::
  ~QueuedGetProductsTester()
{

}

// ----------------------------------------------------------------------
// Tests
// ----------------------------------------------------------------------

void QueuedGetProductsTester ::
  toDo()
{
  // TODO
}

// ----------------------------------------------------------------------
// Handlers for typed from ports
// ----------------------------------------------------------------------

void QueuedGetProductsTester ::
  from_typedOut_handler(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedPortStrings::StringSize80& str1,
      const E& e,
      const A& a,
      const S& s
  )
{
  // TODO
}

F32 QueuedGetProductsTester ::
  from_typedReturnOut_handler(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedReturnPortStrings::StringSize80& str2,
      const E& e,
      const A& a,
      const S& s
  )
{
  // TODO return
}
