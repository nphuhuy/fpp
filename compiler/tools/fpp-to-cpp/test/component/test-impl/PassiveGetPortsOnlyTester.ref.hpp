// ======================================================================
// \title  PassiveGetPortsOnlyTester.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PassiveGetPortsOnly component test harness implementation class
// ======================================================================

#ifndef PassiveGetPortsOnlyTester_HPP
#define PassiveGetPortsOnlyTester_HPP

#include "PassiveGetPortsOnlyGTestBase.hpp"
#include "PassiveGetPortsOnly.hpp"

class PassiveGetPortsOnlyTester :
  public PassiveGetPortsOnlyGTestBase
{

  public:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    // Maximum size of histories storing events, telemetry, and port outputs
    static const NATIVE_INT_TYPE MAX_HISTORY_SIZE = 10;

    // Instance ID supplied to the component instance under test
    static const NATIVE_INT_TYPE TEST_INSTANCE_ID = 0;

  public:

    // ----------------------------------------------------------------------
    // Construction and destruction
    // ----------------------------------------------------------------------

    //! Construct object PassiveGetPortsOnlyTester
    PassiveGetPortsOnlyTester();

    //! Destroy object PassiveGetPortsOnlyTester
    ~PassiveGetPortsOnlyTester();

  public:

    // ----------------------------------------------------------------------
    // Tests
    // ----------------------------------------------------------------------

    //! To do
    void toDo();

  private:

    // ----------------------------------------------------------------------
    // Helper functions
    // ----------------------------------------------------------------------

    //! Connect ports
    void connectPorts();

    //! Initialize components
    void initComponents();

  private:

    // ----------------------------------------------------------------------
    // Member variables
    // ----------------------------------------------------------------------

    //! The component under test
    PassiveGetPortsOnly component;

};

#endif
